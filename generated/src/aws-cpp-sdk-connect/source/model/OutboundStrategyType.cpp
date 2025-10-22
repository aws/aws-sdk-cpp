/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundStrategyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace OutboundStrategyTypeMapper
      {

        static const int AGENT_FIRST_HASH = HashingUtils::HashString("AGENT_FIRST");


        OutboundStrategyType GetOutboundStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_FIRST_HASH)
          {
            return OutboundStrategyType::AGENT_FIRST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutboundStrategyType>(hashCode);
          }

          return OutboundStrategyType::NOT_SET;
        }

        Aws::String GetNameForOutboundStrategyType(OutboundStrategyType enumValue)
        {
          switch(enumValue)
          {
          case OutboundStrategyType::NOT_SET:
            return {};
          case OutboundStrategyType::AGENT_FIRST:
            return "AGENT_FIRST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutboundStrategyTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
