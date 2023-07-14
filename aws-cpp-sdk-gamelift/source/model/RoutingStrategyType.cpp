/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/RoutingStrategyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace RoutingStrategyTypeMapper
      {

        static const int SIMPLE_HASH = HashingUtils::HashString("SIMPLE");
        static const int TERMINAL_HASH = HashingUtils::HashString("TERMINAL");


        RoutingStrategyType GetRoutingStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLE_HASH)
          {
            return RoutingStrategyType::SIMPLE;
          }
          else if (hashCode == TERMINAL_HASH)
          {
            return RoutingStrategyType::TERMINAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingStrategyType>(hashCode);
          }

          return RoutingStrategyType::NOT_SET;
        }

        Aws::String GetNameForRoutingStrategyType(RoutingStrategyType enumValue)
        {
          switch(enumValue)
          {
          case RoutingStrategyType::SIMPLE:
            return "SIMPLE";
          case RoutingStrategyType::TERMINAL:
            return "TERMINAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingStrategyTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
