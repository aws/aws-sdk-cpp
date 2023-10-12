/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceStateDetailCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ContainerServiceStateDetailCodeMapper
      {

        static constexpr uint32_t CREATING_SYSTEM_RESOURCES_HASH = ConstExprHashingUtils::HashString("CREATING_SYSTEM_RESOURCES");
        static constexpr uint32_t CREATING_NETWORK_INFRASTRUCTURE_HASH = ConstExprHashingUtils::HashString("CREATING_NETWORK_INFRASTRUCTURE");
        static constexpr uint32_t PROVISIONING_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("PROVISIONING_CERTIFICATE");
        static constexpr uint32_t PROVISIONING_SERVICE_HASH = ConstExprHashingUtils::HashString("PROVISIONING_SERVICE");
        static constexpr uint32_t CREATING_DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("CREATING_DEPLOYMENT");
        static constexpr uint32_t EVALUATING_HEALTH_CHECK_HASH = ConstExprHashingUtils::HashString("EVALUATING_HEALTH_CHECK");
        static constexpr uint32_t ACTIVATING_DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("ACTIVATING_DEPLOYMENT");
        static constexpr uint32_t CERTIFICATE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_LIMIT_EXCEEDED");
        static constexpr uint32_t UNKNOWN_ERROR_HASH = ConstExprHashingUtils::HashString("UNKNOWN_ERROR");


        ContainerServiceStateDetailCode GetContainerServiceStateDetailCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_SYSTEM_RESOURCES_HASH)
          {
            return ContainerServiceStateDetailCode::CREATING_SYSTEM_RESOURCES;
          }
          else if (hashCode == CREATING_NETWORK_INFRASTRUCTURE_HASH)
          {
            return ContainerServiceStateDetailCode::CREATING_NETWORK_INFRASTRUCTURE;
          }
          else if (hashCode == PROVISIONING_CERTIFICATE_HASH)
          {
            return ContainerServiceStateDetailCode::PROVISIONING_CERTIFICATE;
          }
          else if (hashCode == PROVISIONING_SERVICE_HASH)
          {
            return ContainerServiceStateDetailCode::PROVISIONING_SERVICE;
          }
          else if (hashCode == CREATING_DEPLOYMENT_HASH)
          {
            return ContainerServiceStateDetailCode::CREATING_DEPLOYMENT;
          }
          else if (hashCode == EVALUATING_HEALTH_CHECK_HASH)
          {
            return ContainerServiceStateDetailCode::EVALUATING_HEALTH_CHECK;
          }
          else if (hashCode == ACTIVATING_DEPLOYMENT_HASH)
          {
            return ContainerServiceStateDetailCode::ACTIVATING_DEPLOYMENT;
          }
          else if (hashCode == CERTIFICATE_LIMIT_EXCEEDED_HASH)
          {
            return ContainerServiceStateDetailCode::CERTIFICATE_LIMIT_EXCEEDED;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return ContainerServiceStateDetailCode::UNKNOWN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServiceStateDetailCode>(hashCode);
          }

          return ContainerServiceStateDetailCode::NOT_SET;
        }

        Aws::String GetNameForContainerServiceStateDetailCode(ContainerServiceStateDetailCode enumValue)
        {
          switch(enumValue)
          {
          case ContainerServiceStateDetailCode::NOT_SET:
            return {};
          case ContainerServiceStateDetailCode::CREATING_SYSTEM_RESOURCES:
            return "CREATING_SYSTEM_RESOURCES";
          case ContainerServiceStateDetailCode::CREATING_NETWORK_INFRASTRUCTURE:
            return "CREATING_NETWORK_INFRASTRUCTURE";
          case ContainerServiceStateDetailCode::PROVISIONING_CERTIFICATE:
            return "PROVISIONING_CERTIFICATE";
          case ContainerServiceStateDetailCode::PROVISIONING_SERVICE:
            return "PROVISIONING_SERVICE";
          case ContainerServiceStateDetailCode::CREATING_DEPLOYMENT:
            return "CREATING_DEPLOYMENT";
          case ContainerServiceStateDetailCode::EVALUATING_HEALTH_CHECK:
            return "EVALUATING_HEALTH_CHECK";
          case ContainerServiceStateDetailCode::ACTIVATING_DEPLOYMENT:
            return "ACTIVATING_DEPLOYMENT";
          case ContainerServiceStateDetailCode::CERTIFICATE_LIMIT_EXCEEDED:
            return "CERTIFICATE_LIMIT_EXCEEDED";
          case ContainerServiceStateDetailCode::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerServiceStateDetailCodeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
