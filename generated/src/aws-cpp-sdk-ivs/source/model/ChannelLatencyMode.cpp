/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace ChannelLatencyModeMapper
      {

        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        ChannelLatencyMode GetChannelLatencyModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NORMAL_HASH)
          {
            return ChannelLatencyMode::NORMAL;
          }
          else if (hashCode == LOW_HASH)
          {
            return ChannelLatencyMode::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelLatencyMode>(hashCode);
          }

          return ChannelLatencyMode::NOT_SET;
        }

        Aws::String GetNameForChannelLatencyMode(ChannelLatencyMode enumValue)
        {
          switch(enumValue)
          {
          case ChannelLatencyMode::NORMAL:
            return "NORMAL";
          case ChannelLatencyMode::LOW:
            return "LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelLatencyModeMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
