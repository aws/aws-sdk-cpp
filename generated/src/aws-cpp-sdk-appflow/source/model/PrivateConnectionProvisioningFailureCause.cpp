/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrivateConnectionProvisioningFailureCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace PrivateConnectionProvisioningFailureCauseMapper
      {

        static const int CONNECTOR_AUTHENTICATION_HASH = HashingUtils::HashString("CONNECTOR_AUTHENTICATION");
        static const int CONNECTOR_SERVER_HASH = HashingUtils::HashString("CONNECTOR_SERVER");
        static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("INTERNAL_SERVER");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");


        PrivateConnectionProvisioningFailureCause GetPrivateConnectionProvisioningFailureCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTOR_AUTHENTICATION_HASH)
          {
            return PrivateConnectionProvisioningFailureCause::CONNECTOR_AUTHENTICATION;
          }
          else if (hashCode == CONNECTOR_SERVER_HASH)
          {
            return PrivateConnectionProvisioningFailureCause::CONNECTOR_SERVER;
          }
          else if (hashCode == INTERNAL_SERVER_HASH)
          {
            return PrivateConnectionProvisioningFailureCause::INTERNAL_SERVER;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return PrivateConnectionProvisioningFailureCause::ACCESS_DENIED;
          }
          else if (hashCode == VALIDATION_HASH)
          {
            return PrivateConnectionProvisioningFailureCause::VALIDATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivateConnectionProvisioningFailureCause>(hashCode);
          }

          return PrivateConnectionProvisioningFailureCause::NOT_SET;
        }

        Aws::String GetNameForPrivateConnectionProvisioningFailureCause(PrivateConnectionProvisioningFailureCause enumValue)
        {
          switch(enumValue)
          {
          case PrivateConnectionProvisioningFailureCause::NOT_SET:
            return {};
          case PrivateConnectionProvisioningFailureCause::CONNECTOR_AUTHENTICATION:
            return "CONNECTOR_AUTHENTICATION";
          case PrivateConnectionProvisioningFailureCause::CONNECTOR_SERVER:
            return "CONNECTOR_SERVER";
          case PrivateConnectionProvisioningFailureCause::INTERNAL_SERVER:
            return "INTERNAL_SERVER";
          case PrivateConnectionProvisioningFailureCause::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case PrivateConnectionProvisioningFailureCause::VALIDATION:
            return "VALIDATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivateConnectionProvisioningFailureCauseMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
