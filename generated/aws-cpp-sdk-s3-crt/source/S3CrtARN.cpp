﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <cassert>
#include <aws/core/Region.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/s3-crt/S3CrtARN.h>

namespace Aws
{
    namespace S3Crt
    {
        S3CrtARN::S3CrtARN(const Aws::String& arn) : Utils::ARN(arn)
        {
            ParseARNResource();
        }

        S3CrtARNOutcome S3CrtARN::Validate(const char* clientRegion) const
        {
            // Take pseudo region into consideration here.
            Aws::String region = clientRegion ? clientRegion : "";
            Aws::StringStream ss;
            if ((this->GetResourceType() == ARNResourceType::OUTPOST || this->GetRegion().empty()) && Aws::Region::IsFipsRegion(region))
            {
                ss.str("");
                ss << "Outposts ARN or Multi Region Access Point ARN do not support fips regions right now.";
                return S3CrtARNOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION", ss.str(), false));
            }
            else if (!this->GetRegion().empty() && (region == Aws::Region::AWS_GLOBAL || region == "s3-external-1"))
            {
                ss.str("");
                ss << "Region: \"" << region << "\" is not a regional endpoint.";
                return S3CrtARNOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION", ss.str(), false));
            }
            else if (!this->GetRegion().empty() && this->GetRegion() != Aws::Region::ComputeSignerRegion(region))
            {
                ss.str("");
                ss << "Region mismatch between \"" << this->GetRegion() << "\" defined in ARN and \""
                    << region << "\" defined in client configuration. "
                    << "You can specify AWS_S3_USE_ARN_REGION to ignore region defined in client configuration.";
                return S3CrtARNOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION", ss.str(), false));
            }
            else
            {
                return Validate();
            }
        }

        S3CrtARNOutcome S3CrtARN::Validate() const
        {
            Aws::String errorMessage;
            bool success = false;
            Aws::StringStream ss;

            if (!*this)
            {
                errorMessage = "Invalid ARN.";
            }
            // Validation on partition.
            else if (this->GetPartition().find("aws") != 0)
            {
                ss.str("");
                ss << "Invalid partition in ARN: " << this->GetPartition() << ". Valid options: aws, aws-cn, and etc.";
            }
            // Validation on service.
            else if (this->GetService() != ARNService::S3 && this->GetService() != ARNService::S3_OUTPOSTS && this->GetService() != ARNService::S3_OBJECT_LAMBDA)
            {
                ss.str("");
                ss << "Invalid service in ARN: " << this->GetService() << ". Valid options: " << ARNService::S3 << ", " << ARNService::S3_OUTPOSTS << ", " << ARNService::S3_OBJECT_LAMBDA << ".";
                errorMessage = ss.str();
            }
            // Validation on region.
            // TODO: Failure on different partitions.
            else if (!this->GetRegion().empty() && !Utils::IsValidDnsLabel(this->GetRegion()))
            {
                ss.str("");
                ss << "Invalid region in ARN: " << this->GetRegion() << ". Region should be a RFC 3986 Host label.";
                errorMessage = ss.str();
            }
            else if (Aws::Region::IsFipsRegion(this->GetRegion()))
            {
                ss.str("");
                ss << "Invalid region in ARN: " << this->GetRegion() << ". FIPS region is not allowed in ARN.";
                errorMessage = ss.str();
            }
            // Validation on account ID
            else if (!Utils::IsValidDnsLabel(this->GetAccountId()))
            {
                ss.str("");
                ss << "Invalid account ID in ARN: " << this->GetAccountId() << ". Account ID should be a RFC 3986 Host label.";
                errorMessage = ss.str();
            }
            // Validation on Access Point ARN and Object Lambda Access Point ARN:
            else if (this->GetResourceType() == ARNResourceType::ACCESSPOINT)
            {
                Aws::Vector<Aws::String> segments = Aws::Utils::StringUtils::Split(this->GetResourceId(), '.');
                // Validation on S3 Object Lambda and regular S3 Access Point alias is a valid [RFC 3986 Host] label.
                // And validation on Multi Region Access Point alias segments separated by a dot (.) are valid [RFC 3986 Host] labels.
                if (segments.size() == 0 || (!this->GetRegion().empty() && segments.size() > 1) ||
                    std::any_of(segments.begin(), segments.end(), [](Aws::String segment){return !Utils::IsValidDnsLabel(segment);}))
                {
                    ss.str("");
                    ss << "Invalid resource ID in accesspoint ARN: " << this->GetResourceId() << ". Resource ID should be a RFC 3986 Host label.";
                    errorMessage = ss.str();
                }
                else if (this->GetService() == ARNService::S3_OBJECT_LAMBDA && this->GetRegion().empty())
                {
                    ss.str("");
                    ss << "Invalid S3 Object Lambda Access Point ARN with empty region.";
                    errorMessage = ss.str();
                }
                else if (!this->GetResourceQualifier().empty())
                {
                    ss.str("");
                    ss << "Invalid accesspoint ARN with non empty resource qualifier: " << this->GetResourceQualifier();
                    errorMessage = ss.str();
                }
                else if (!this->GetSubResourceType().empty() || !this->GetSubResourceId().empty())
                {
                    ss.str("");
                    ss << "Invalid accesspoint ARN with non empty sub resource type: " << this->GetSubResourceType() << ", sub resource ID: " << this->GetSubResourceId();
                    errorMessage = ss.str();
                }
                else
                {
                    success = true;
                }
            }
            // Validation on Outposts ARN:
            else if (this->GetResourceType() == ARNResourceType::OUTPOST)
            {
                if (this->GetService() != ARNService::S3_OUTPOSTS)
                {
                    ss.str("");
                    ss << "Invalid combination of service name: \"" << this->GetService() << "\" and resource type: \"" << this->GetResourceType() << "\".";
                    errorMessage = ss.str();
                }
                else if (this->GetRegion().empty())
                {
                    ss.str("");
                    ss << "Invalid Outposts ARN with empty region.";
                    errorMessage = ss.str();
                }
                else if (!Utils::IsValidDnsLabel(this->GetResourceId()))
                {
                    ss.str("");
                    ss << "Invalid outpost ID in Outposts ARN: " << this->GetResourceId() << ". Outpost ID should be a RFC 3986 Host label.";
                    errorMessage = ss.str();
                }
                else if (this->GetSubResourceType() != ARNResourceType::ACCESSPOINT)
                {
                    ss.str("");
                    ss << "Invalid sub resource type in Outposts ARN: " << this->GetSubResourceType() << ". Valid options: " << ARNResourceType::ACCESSPOINT;
                    errorMessage = ss.str();
                }
                else if (!Utils::IsValidDnsLabel(this->GetSubResourceId()))
                {
                    ss.str("");
                    ss << "Invalid accesspoint name in Outposts ARN: " << this->GetSubResourceId() << ", accesspoint name should be a RFC 3986 Host label.";
                    errorMessage = ss.str();
                }
                else
                {
                    success = true;
                }
            }
            // ARN with unknown resource type.
            else
            {
                ss.str("");
                ss << "Invalid resource type in ARN: " << this->GetResourceType() << ". Valid options: " << ARNResourceType::ACCESSPOINT << ", " << ARNResourceType::OUTPOST << ".";
                errorMessage = ss.str();
            }

            if (success)
            {
                return S3CrtARNOutcome(success);
            }
            else
            {
                return S3CrtARNOutcome(Aws::Client::AWSError<S3CrtErrors>(S3CrtErrors::VALIDATION, "VALIDATION", errorMessage, false));
            }
        }

        void S3CrtARN::ParseARNResource()
        {
            if (!*this) return;

            Aws::String resource = this->GetResource();
            Aws::Vector<Aws::String> resourceSegments;
            if (resource.find(':') != std::string::npos)
            {
                resourceSegments = Utils::StringUtils::Split(resource, ':', 4, Utils::StringUtils::SplitOptions::INCLUDE_EMPTY_ENTRIES);
            }
            else if (resource.find('/') != std::string::npos)
            {
                resourceSegments = Utils::StringUtils::Split(resource, '/', 4, Utils::StringUtils::SplitOptions::INCLUDE_EMPTY_ENTRIES);
            }
            else
            {
                resourceSegments.emplace_back(resource);
            }

            switch (resourceSegments.size())
            {
            case 1:
                m_resourceId = resourceSegments[0];
                break;
            case 2:
                m_resourceType = resourceSegments[0];
                m_resourceId = resourceSegments[1];
                break;
            case 3:
                m_resourceType = resourceSegments[0];
                m_resourceId = resourceSegments[1];
                m_resourceQualifier = resourceSegments[2];
                break;
            case 4:
                m_resourceType = resourceSegments[0];
                m_resourceId = resourceSegments[1];
                m_subResourceType = resourceSegments[2];
                m_subResourceId = resourceSegments[3];
                break;
            default:
                assert(false);
                break;
            }
        }
    }
}
