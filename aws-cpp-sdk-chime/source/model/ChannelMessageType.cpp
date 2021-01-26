/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMessageType.h>
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
      namespace ChannelMessageTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int CONTROL_HASH = HashingUtils::HashString("CONTROL");


        ChannelMessageType GetChannelMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ChannelMessageType::STANDARD;
          }
          else if (hashCode == CONTROL_HASH)
          {
            return ChannelMessageType::CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMessageType>(hashCode);
          }

          return ChannelMessageType::NOT_SET;
        }

        Aws::String GetNameForChannelMessageType(ChannelMessageType enumValue)
        {
          switch(enumValue)
          {
          case ChannelMessageType::STANDARD:
            return "STANDARD";
          case ChannelMessageType::CONTROL:
            return "CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMessageTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
