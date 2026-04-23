/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int DEVICE_CERTIFICATE_HASH = HashingUtils::HashString("DEVICE_CERTIFICATE");
        static const int CA_CERTIFICATE_HASH = HashingUtils::HashString("CA_CERTIFICATE");
        static const int IOT_POLICY_HASH = HashingUtils::HashString("IOT_POLICY");
        static const int COGNITO_IDENTITY_POOL_HASH = HashingUtils::HashString("COGNITO_IDENTITY_POOL");
        static const int CLIENT_ID_HASH = HashingUtils::HashString("CLIENT_ID");
        static const int ACCOUNT_SETTINGS_HASH = HashingUtils::HashString("ACCOUNT_SETTINGS");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_CERTIFICATE_HASH)
          {
            return ResourceType::DEVICE_CERTIFICATE;
          }
          else if (hashCode == CA_CERTIFICATE_HASH)
          {
            return ResourceType::CA_CERTIFICATE;
          }
          else if (hashCode == IOT_POLICY_HASH)
          {
            return ResourceType::IOT_POLICY;
          }
          else if (hashCode == COGNITO_IDENTITY_POOL_HASH)
          {
            return ResourceType::COGNITO_IDENTITY_POOL;
          }
          else if (hashCode == CLIENT_ID_HASH)
          {
            return ResourceType::CLIENT_ID;
          }
          else if (hashCode == ACCOUNT_SETTINGS_HASH)
          {
            return ResourceType::ACCOUNT_SETTINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::DEVICE_CERTIFICATE:
            return "DEVICE_CERTIFICATE";
          case ResourceType::CA_CERTIFICATE:
            return "CA_CERTIFICATE";
          case ResourceType::IOT_POLICY:
            return "IOT_POLICY";
          case ResourceType::COGNITO_IDENTITY_POOL:
            return "COGNITO_IDENTITY_POOL";
          case ResourceType::CLIENT_ID:
            return "CLIENT_ID";
          case ResourceType::ACCOUNT_SETTINGS:
            return "ACCOUNT_SETTINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
