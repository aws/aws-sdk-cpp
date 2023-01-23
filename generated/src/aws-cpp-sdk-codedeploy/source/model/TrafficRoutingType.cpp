/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TrafficRoutingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TrafficRoutingTypeMapper
      {

        static const int TimeBasedCanary_HASH = HashingUtils::HashString("TimeBasedCanary");
        static const int TimeBasedLinear_HASH = HashingUtils::HashString("TimeBasedLinear");
        static const int AllAtOnce_HASH = HashingUtils::HashString("AllAtOnce");


        TrafficRoutingType GetTrafficRoutingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeBasedCanary_HASH)
          {
            return TrafficRoutingType::TimeBasedCanary;
          }
          else if (hashCode == TimeBasedLinear_HASH)
          {
            return TrafficRoutingType::TimeBasedLinear;
          }
          else if (hashCode == AllAtOnce_HASH)
          {
            return TrafficRoutingType::AllAtOnce;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficRoutingType>(hashCode);
          }

          return TrafficRoutingType::NOT_SET;
        }

        Aws::String GetNameForTrafficRoutingType(TrafficRoutingType enumValue)
        {
          switch(enumValue)
          {
          case TrafficRoutingType::TimeBasedCanary:
            return "TimeBasedCanary";
          case TrafficRoutingType::TimeBasedLinear:
            return "TimeBasedLinear";
          case TrafficRoutingType::AllAtOnce:
            return "AllAtOnce";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficRoutingTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
