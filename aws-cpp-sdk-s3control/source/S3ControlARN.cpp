﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <cassert>
#include <aws/core/Region.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/s3control/S3ControlARN.h>

namespace Aws
{
    namespace S3Control
    {
        S3ControlARN::S3ControlARN(const Aws::String& arn) : Utils::ARN(arn)
        {
            ParseARNResource();
        }

        S3ControlARNOutcome S3ControlARN::Validate(const char* clientRegion) const
        {
            // Take pseudo region into consideration here.
            Aws::String region = clientRegion ? clientRegion : "";
            Aws::StringStream ss;
            if (this->GetResourceType() == ARNResourceType::OUTPOST && Aws::Region::IsFipsRegion(region))
            {
                ss.str("");
                ss << "Outposts ARN do not support fips regions right now.";
                return S3ControlARNOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION", ss.str(), false));
            }
            else if (this->GetRegion() != Aws::Region::ComputeSignerRegion(clientRegion))
            {
                ss.str("");
                ss << "Region mismatch between \"" << this->GetRegion() << "\" defined in ARN and \""
                    << clientRegion << "\" defined in client configuration. "
                    << "You can specify AWS_S3_USE_ARN_REGION to ignore region defined in client configuration.";
                return S3ControlARNOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION", ss.str(), false));
            }
            else
            {
                return Validate();
            }
        }

        S3ControlARNOutcome S3ControlARN::Validate() const
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
            else if (this->GetService() != "s3" && this->GetService() != "s3-outposts")
            {
                ss.str("");
                ss << "Invalid service in ARN: " << this->GetService() << ". Valid options: s3, s3-outposts";
                errorMessage = ss.str();
            }
            // Validation on region.
            // TODO: Failure on different partitions.
            else if (this->GetRegion().empty())
            {
                errorMessage = "Invalid ARN with empty region.";
            }
            else if (!Utils::IsValidDnsLabel(this->GetRegion()))
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
            // Validation on Outposts ARN:
            else if (this->GetResourceType() == ARNResourceType::OUTPOST)
            {
                if (!Utils::IsValidDnsLabel(this->GetResourceId()))
                {
                    ss.str("");
                    ss << "Invalid outpost ID in Outposts ARN: " << this->GetResourceId() << ". Outpost ID should be a RFC 3986 Host label.";
                    errorMessage = ss.str();
                }
                else if (this->GetSubResourceType() != ARNResourceType::ACCESSPOINT && this->GetSubResourceType() != ARNResourceType::BUCKET)
                {
                    ss.str("");
                    ss << "Invalid sub resource type in Outposts ARN: " << this->GetSubResourceType() << ". Valid options: " << ARNResourceType::ACCESSPOINT << ", " << ARNResourceType::BUCKET;
                    errorMessage = ss.str();
                }
                else if (!Utils::IsValidDnsLabel(this->GetSubResourceId()))
                {
                    ss.str("");
                    ss << "Invalid " << this->GetSubResourceType() << " name in Outposts ARN: " << this->GetSubResourceId() << ", " << this->GetSubResourceType() << " name should be a RFC 3986 Host label.";
                    errorMessage = ss.str();
                }
                else
                {
                    success = true;
                }
            }
            // Neither Access Point ARN, Bucket ARN nor Outposts ARN.
            else
            {
                ss.str("");
                ss << "Invalid resource type in ARN: " << this->GetResourceType() << ". Valid options: " << ARNResourceType::ACCESSPOINT << ", " << ARNResourceType::OUTPOST;
                errorMessage = ss.str();
            }

            if (success)
            {
                return S3ControlARNOutcome(success);
            }
            else
            {
                return S3ControlARNOutcome(Aws::Client::AWSError<S3ControlErrors>(S3ControlErrors::VALIDATION, "VALIDATION", errorMessage, false));
            }
        }

        void S3ControlARN::ParseARNResource()
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
