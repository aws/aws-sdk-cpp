/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DesiredStatus.h>
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
      namespace DesiredStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        DesiredStatus GetDesiredStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DesiredStatus::RUNNING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DesiredStatus::PENDING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DesiredStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredStatus>(hashCode);
          }

          return DesiredStatus::NOT_SET;
        }

        Aws::String GetNameForDesiredStatus(DesiredStatus enumValue)
        {
          switch(enumValue)
          {
          case DesiredStatus::NOT_SET:
            return {};
          case DesiredStatus::RUNNING:
            return "RUNNING";
          case DesiredStatus::PENDING:
            return "PENDING";
          case DesiredStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DesiredStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
