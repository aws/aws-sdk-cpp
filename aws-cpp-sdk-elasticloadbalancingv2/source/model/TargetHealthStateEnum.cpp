/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetHealthStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace TargetHealthStateEnumMapper
      {

        static const int initial_HASH = HashingUtils::HashString("initial");
        static const int healthy_HASH = HashingUtils::HashString("healthy");
        static const int unhealthy_HASH = HashingUtils::HashString("unhealthy");
        static const int unused_HASH = HashingUtils::HashString("unused");
        static const int draining_HASH = HashingUtils::HashString("draining");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");


        TargetHealthStateEnum GetTargetHealthStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initial_HASH)
          {
            return TargetHealthStateEnum::initial;
          }
          else if (hashCode == healthy_HASH)
          {
            return TargetHealthStateEnum::healthy;
          }
          else if (hashCode == unhealthy_HASH)
          {
            return TargetHealthStateEnum::unhealthy;
          }
          else if (hashCode == unused_HASH)
          {
            return TargetHealthStateEnum::unused;
          }
          else if (hashCode == draining_HASH)
          {
            return TargetHealthStateEnum::draining;
          }
          else if (hashCode == unavailable_HASH)
          {
            return TargetHealthStateEnum::unavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetHealthStateEnum>(hashCode);
          }

          return TargetHealthStateEnum::NOT_SET;
        }

        Aws::String GetNameForTargetHealthStateEnum(TargetHealthStateEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetHealthStateEnum::initial:
            return "initial";
          case TargetHealthStateEnum::healthy:
            return "healthy";
          case TargetHealthStateEnum::unhealthy:
            return "unhealthy";
          case TargetHealthStateEnum::unused:
            return "unused";
          case TargetHealthStateEnum::draining:
            return "draining";
          case TargetHealthStateEnum::unavailable:
            return "unavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetHealthStateEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
