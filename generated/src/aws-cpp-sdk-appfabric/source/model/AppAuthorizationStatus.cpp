/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AppAuthorizationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace AppAuthorizationStatusMapper
      {

        static const int PendingConnect_HASH = HashingUtils::HashString("PendingConnect");
        static const int Connected_HASH = HashingUtils::HashString("Connected");
        static const int ConnectionValidationFailed_HASH = HashingUtils::HashString("ConnectionValidationFailed");
        static const int TokenAutoRotationFailed_HASH = HashingUtils::HashString("TokenAutoRotationFailed");


        AppAuthorizationStatus GetAppAuthorizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingConnect_HASH)
          {
            return AppAuthorizationStatus::PendingConnect;
          }
          else if (hashCode == Connected_HASH)
          {
            return AppAuthorizationStatus::Connected;
          }
          else if (hashCode == ConnectionValidationFailed_HASH)
          {
            return AppAuthorizationStatus::ConnectionValidationFailed;
          }
          else if (hashCode == TokenAutoRotationFailed_HASH)
          {
            return AppAuthorizationStatus::TokenAutoRotationFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppAuthorizationStatus>(hashCode);
          }

          return AppAuthorizationStatus::NOT_SET;
        }

        Aws::String GetNameForAppAuthorizationStatus(AppAuthorizationStatus enumValue)
        {
          switch(enumValue)
          {
          case AppAuthorizationStatus::NOT_SET:
            return {};
          case AppAuthorizationStatus::PendingConnect:
            return "PendingConnect";
          case AppAuthorizationStatus::Connected:
            return "Connected";
          case AppAuthorizationStatus::ConnectionValidationFailed:
            return "ConnectionValidationFailed";
          case AppAuthorizationStatus::TokenAutoRotationFailed:
            return "TokenAutoRotationFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppAuthorizationStatusMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
