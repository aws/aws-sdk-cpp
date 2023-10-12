/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t DEVICE_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("DEVICE_CERTIFICATE");
        static constexpr uint32_t CA_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("CA_CERTIFICATE");
        static constexpr uint32_t IOT_POLICY_HASH = ConstExprHashingUtils::HashString("IOT_POLICY");
        static constexpr uint32_t COGNITO_IDENTITY_POOL_HASH = ConstExprHashingUtils::HashString("COGNITO_IDENTITY_POOL");
        static constexpr uint32_t CLIENT_ID_HASH = ConstExprHashingUtils::HashString("CLIENT_ID");
        static constexpr uint32_t ACCOUNT_SETTINGS_HASH = ConstExprHashingUtils::HashString("ACCOUNT_SETTINGS");
        static constexpr uint32_t ROLE_ALIAS_HASH = ConstExprHashingUtils::HashString("ROLE_ALIAS");
        static constexpr uint32_t IAM_ROLE_HASH = ConstExprHashingUtils::HashString("IAM_ROLE");
        static constexpr uint32_t ISSUER_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("ISSUER_CERTIFICATE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ROLE_ALIAS_HASH)
          {
            return ResourceType::ROLE_ALIAS;
          }
          else if (hashCode == IAM_ROLE_HASH)
          {
            return ResourceType::IAM_ROLE;
          }
          else if (hashCode == ISSUER_CERTIFICATE_HASH)
          {
            return ResourceType::ISSUER_CERTIFICATE;
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
          case ResourceType::NOT_SET:
            return {};
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
          case ResourceType::ROLE_ALIAS:
            return "ROLE_ALIAS";
          case ResourceType::IAM_ROLE:
            return "IAM_ROLE";
          case ResourceType::ISSUER_CERTIFICATE:
            return "ISSUER_CERTIFICATE";
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
