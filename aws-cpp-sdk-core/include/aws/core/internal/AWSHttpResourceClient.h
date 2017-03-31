/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <memory>

namespace Aws
{
    namespace Http
    {
        class HttpClient;
        class HttpClientFactory;
    } // namespace Http

    namespace Internal
    {
        static const char* EC2MetadataClientDefaultEndpoint = "http://169.254.169.254";
        static const char* ECSCredentialsDefaultEndpoint = "http://169.254.170.2";

        /**
         * Simple client for accessing the AWS remote data by Http.
         * Currently we use it to access EC2 Metadata and ECS Credential.
         */
        class AWS_CORE_API AWSHttpResourceClient
        {
        public:
            /**
             * Builds an instance using EC2MetadataClientDefaultEndpoint if not specified otherwise
             * and the default http stack if httpClientFactory is not specified.
             */
            AWSHttpResourceClient();

            virtual ~AWSHttpResourceClient();

            /**
             * Connects to the metadata service to read the specified resource and
             * returns the text contents. The resource URI = endpoint + resourcePath. 
             * (e.g:http://domain/path/to/res)
             */
            virtual Aws::String GetResource(const char* endpoint, const char* resourcePath) const;

        public: // For EC2
            /**
             * Connects to the Amazon EC2 Instance Metadata Service to retrieve the
             * default credential information (if any).
             */
            virtual Aws::String GetEC2DefaultCredentials(const char* endpoint = EC2MetadataClientDefaultEndpoint) const;

            /**
             * connects to the Amazon EC2 Instance metadata Service to retrieve the region
             * the current EC2 instance is running in.
             */
            virtual Aws::String GetEC2CurrentRegion(const char* endpoint = ECSCredentialsDefaultEndpoint) const;

        public: // For ECS
            /**
             * Connects to the Amazon ECS service to retrieve the credential
             */
            virtual Aws::String GetECSCredentials(const char* endpoint, const char *resourcePath) const {
                return this->GetResource(endpoint, resourcePath);
            }

        private:
            AWSHttpResourceClient &operator =(const AWSHttpResourceClient &rhs);

            std::shared_ptr<Http::HttpClient> m_httpClient;
            std::shared_ptr<Http::HttpClientFactory const> m_httpClientFactory;
        };

    } // namespace Internal
} // namespace Aws
