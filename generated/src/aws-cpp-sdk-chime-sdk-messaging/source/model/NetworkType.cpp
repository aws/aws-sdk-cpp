/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/NetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace NetworkTypeMapper
      {

        static const int IPV4_ONLY_HASH = HashingUtils::HashString("IPV4_ONLY");
        static const int DUAL_STACK_HASH = HashingUtils::HashString("DUAL_STACK");


        NetworkType GetNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_ONLY_HASH)
          {
            return NetworkType::IPV4_ONLY;
          }
          else if (hashCode == DUAL_STACK_HASH)
          {
            return NetworkType::DUAL_STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkType>(hashCode);
          }

          return NetworkType::NOT_SET;
        }

        Aws::String GetNameForNetworkType(NetworkType enumValue)
        {
          switch(enumValue)
          {
          case NetworkType::NOT_SET:
            return {};
          case NetworkType::IPV4_ONLY:
            return "IPV4_ONLY";
          case NetworkType::DUAL_STACK:
            return "DUAL_STACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
