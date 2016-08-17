/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace RoutingStrategyTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
