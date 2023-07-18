/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3Crt_EXPORTS.h>

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/ARN.h>
#include <aws/s3-crt/S3CrtErrors.h>

namespace Aws
{
    namespace Utils
    {
        template<typename R, typename E> class Outcome;
    }

    namespace S3Crt
    {
        namespace ARNService
        {
            static const char S3[] = "s3";
            static const char S3_OUTPOSTS[] = "s3-outposts";
            static const char S3_OBJECT_LAMBDA[] = "s3-object-lambda";
        }

        namespace ARNResourceType
        {
            static const char ACCESSPOINT[] = "accesspoint";
            static const char OUTPOST[] = "outpost";
        }

        typedef Aws::Utils::Outcome<bool, Aws::Client::AWSError<S3CrtErrors>> S3CrtARNOutcome;

        class AWS_S3CRT_API S3CrtARN : public Aws::Utils::ARN
        {
        public:
            S3CrtARN(const Aws::String& arn);

            const Aws::String& GetResourceType() const { return m_resourceType; }
            const Aws::String& GetResourceId() const { return m_resourceId; }
            const Aws::String& GetSubResourceType() const { return m_subResourceType; }
            const Aws::String& GetSubResourceId() const { return m_subResourceId; }
            const Aws::String& GetResourceQualifier() const { return m_resourceQualifier; }

            // Check if S3ARN is valid.
            S3CrtARNOutcome Validate() const;
            // Check if S3ARN is valid, and especially, ARN region should match the region specified.
            S3CrtARNOutcome Validate(const char* region) const;

        private:
            void ParseARNResource();

            Aws::String m_resourceType;
            Aws::String m_resourceId;
            Aws::String m_subResourceType;
            Aws::String m_subResourceId;
            Aws::String m_resourceQualifier;
        };
    }
}
