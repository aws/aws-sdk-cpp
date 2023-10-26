/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKIdentity
  {
    namespace Model
    {
      namespace AppInstanceUserEndpointTypeMapper
      {

        static const int APNS_HASH = HashingUtils::HashString("APNS");
        static const int APNS_SANDBOX_HASH = HashingUtils::HashString("APNS_SANDBOX");
        static const int GCM_HASH = HashingUtils::HashString("GCM");


        AppInstanceUserEndpointType GetAppInstanceUserEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APNS_HASH)
          {
            return AppInstanceUserEndpointType::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return AppInstanceUserEndpointType::APNS_SANDBOX;
          }
          else if (hashCode == GCM_HASH)
          {
            return AppInstanceUserEndpointType::GCM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppInstanceUserEndpointType>(hashCode);
          }

          return AppInstanceUserEndpointType::NOT_SET;
        }

        Aws::String GetNameForAppInstanceUserEndpointType(AppInstanceUserEndpointType enumValue)
        {
          switch(enumValue)
          {
          case AppInstanceUserEndpointType::NOT_SET:
            return {};
          case AppInstanceUserEndpointType::APNS:
            return "APNS";
          case AppInstanceUserEndpointType::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case AppInstanceUserEndpointType::GCM:
            return "GCM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppInstanceUserEndpointTypeMapper
    } // namespace Model
  } // namespace ChimeSDKIdentity
} // namespace Aws
