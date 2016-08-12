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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TargetHealthStateEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
