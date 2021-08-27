/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoSync
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static const int APNS_HASH = HashingUtils::HashString("APNS");
        static const int APNS_SANDBOX_HASH = HashingUtils::HashString("APNS_SANDBOX");
        static const int GCM_HASH = HashingUtils::HashString("GCM");
        static const int ADM_HASH = HashingUtils::HashString("ADM");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APNS_HASH)
          {
            return Platform::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return Platform::APNS_SANDBOX;
          }
          else if (hashCode == GCM_HASH)
          {
            return Platform::GCM;
          }
          else if (hashCode == ADM_HASH)
          {
            return Platform::ADM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Platform>(hashCode);
          }

          return Platform::NOT_SET;
        }

        Aws::String GetNameForPlatform(Platform enumValue)
        {
          switch(enumValue)
          {
          case Platform::APNS:
            return "APNS";
          case Platform::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case Platform::GCM:
            return "GCM";
          case Platform::ADM:
            return "ADM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformMapper
    } // namespace Model
  } // namespace CognitoSync
} // namespace Aws
