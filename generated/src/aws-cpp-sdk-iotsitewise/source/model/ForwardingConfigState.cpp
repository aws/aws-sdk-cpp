/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ForwardingConfigState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ForwardingConfigStateMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        ForwardingConfigState GetForwardingConfigStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return ForwardingConfigState::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ForwardingConfigState::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForwardingConfigState>(hashCode);
          }

          return ForwardingConfigState::NOT_SET;
        }

        Aws::String GetNameForForwardingConfigState(ForwardingConfigState enumValue)
        {
          switch(enumValue)
          {
          case ForwardingConfigState::NOT_SET:
            return {};
          case ForwardingConfigState::DISABLED:
            return "DISABLED";
          case ForwardingConfigState::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForwardingConfigStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
