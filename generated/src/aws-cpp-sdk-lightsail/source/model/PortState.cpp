/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PortState.h>
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
      namespace PortStateMapper
      {

        static constexpr uint32_t open_HASH = ConstExprHashingUtils::HashString("open");
        static constexpr uint32_t closed_HASH = ConstExprHashingUtils::HashString("closed");


        PortState GetPortStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return PortState::open;
          }
          else if (hashCode == closed_HASH)
          {
            return PortState::closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortState>(hashCode);
          }

          return PortState::NOT_SET;
        }

        Aws::String GetNameForPortState(PortState enumValue)
        {
          switch(enumValue)
          {
          case PortState::NOT_SET:
            return {};
          case PortState::open:
            return "open";
          case PortState::closed:
            return "closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
