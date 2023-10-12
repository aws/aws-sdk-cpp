/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DynamicGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DynamicGroupStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t BUILDING_HASH = ConstExprHashingUtils::HashString("BUILDING");
        static constexpr uint32_t REBUILDING_HASH = ConstExprHashingUtils::HashString("REBUILDING");


        DynamicGroupStatus GetDynamicGroupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DynamicGroupStatus::ACTIVE;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return DynamicGroupStatus::BUILDING;
          }
          else if (hashCode == REBUILDING_HASH)
          {
            return DynamicGroupStatus::REBUILDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamicGroupStatus>(hashCode);
          }

          return DynamicGroupStatus::NOT_SET;
        }

        Aws::String GetNameForDynamicGroupStatus(DynamicGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case DynamicGroupStatus::NOT_SET:
            return {};
          case DynamicGroupStatus::ACTIVE:
            return "ACTIVE";
          case DynamicGroupStatus::BUILDING:
            return "BUILDING";
          case DynamicGroupStatus::REBUILDING:
            return "REBUILDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DynamicGroupStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
