/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace ChannelModeMapper
      {

        static const int UNRESTRICTED_HASH = HashingUtils::HashString("UNRESTRICTED");
        static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");


        ChannelMode GetChannelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNRESTRICTED_HASH)
          {
            return ChannelMode::UNRESTRICTED;
          }
          else if (hashCode == RESTRICTED_HASH)
          {
            return ChannelMode::RESTRICTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMode>(hashCode);
          }

          return ChannelMode::NOT_SET;
        }

        Aws::String GetNameForChannelMode(ChannelMode enumValue)
        {
          switch(enumValue)
          {
          case ChannelMode::UNRESTRICTED:
            return "UNRESTRICTED";
          case ChannelMode::RESTRICTED:
            return "RESTRICTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelModeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
