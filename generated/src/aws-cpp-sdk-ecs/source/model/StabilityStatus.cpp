/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/StabilityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace StabilityStatusMapper
      {

        static constexpr uint32_t STEADY_STATE_HASH = ConstExprHashingUtils::HashString("STEADY_STATE");
        static constexpr uint32_t STABILIZING_HASH = ConstExprHashingUtils::HashString("STABILIZING");


        StabilityStatus GetStabilityStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STEADY_STATE_HASH)
          {
            return StabilityStatus::STEADY_STATE;
          }
          else if (hashCode == STABILIZING_HASH)
          {
            return StabilityStatus::STABILIZING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StabilityStatus>(hashCode);
          }

          return StabilityStatus::NOT_SET;
        }

        Aws::String GetNameForStabilityStatus(StabilityStatus enumValue)
        {
          switch(enumValue)
          {
          case StabilityStatus::NOT_SET:
            return {};
          case StabilityStatus::STEADY_STATE:
            return "STEADY_STATE";
          case StabilityStatus::STABILIZING:
            return "STABILIZING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StabilityStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
