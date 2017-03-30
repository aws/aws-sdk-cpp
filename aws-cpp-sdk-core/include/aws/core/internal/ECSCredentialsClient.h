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
#include <aws/core/internal/EC2MetadataClient.h>
#include <aws/core/internal/ECSCredentialsClient.h>
#include <memory>

namespace Aws
{
    namespace Internal 
    {
        /**
         * A wrapper class with functions almost similar with EC2MedataClient.
         * The differences are default endpoint address and target service, here target is ECS.
         */
        class AWS_CORE_API ECSCredentialsClient
        {
        public:
            /**
             * Build an wrapper instance using "http://169.254.170.2" as the default endpoint.
             * See detailed implementation at EC2MetadataClient.h
             */
            ECSCredentialsClient(const char* endpoint = "http://169.254.170.2")
                :m_metadataClient(Aws::MakeShared<Aws::Internal::EC2MetadataClient>(endpoint))
            { }

            virtual ~ECSCredentialsClient()
            { }

            /**
             * Fetch resource from ECS endpoint service with the resource name.
             * Here the main purpose is to fetch ECS Credential with Json format.
             * The resource name should be set by ENV virable AWS_CONTAINER_CREDENTIALS_RELATIVE_URI.
             */
            virtual Aws::String GetResource(const char* resource) const 
            {
                return m_metadataClient->GetResource(resource);
            }

            /**
             * Explicityly get ECSCredentials.
             */
            virtual Aws::String GetECSCredentials(const char *relativeURI) const {
                return GetResource(relativeURI);
            }

        private:
            std::shared_ptr<Aws::Internal::EC2MetadataClient> m_metadataClient;
        };
    }
}
