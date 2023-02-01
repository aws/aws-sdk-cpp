/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ProxySessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace ProxySessionStatusMapper
      {

        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Closed_HASH = HashingUtils::HashString("Closed");


        ProxySessionStatus GetProxySessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Open_HASH)
          {
            return ProxySessionStatus::Open;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ProxySessionStatus::InProgress;
          }
          else if (hashCode == Closed_HASH)
          {
            return ProxySessionStatus::Closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProxySessionStatus>(hashCode);
          }

          return ProxySessionStatus::NOT_SET;
        }

        Aws::String GetNameForProxySessionStatus(ProxySessionStatus enumValue)
        {
          switch(enumValue)
          {
          case ProxySessionStatus::Open:
            return "Open";
          case ProxySessionStatus::InProgress:
            return "InProgress";
          case ProxySessionStatus::Closed:
            return "Closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProxySessionStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
