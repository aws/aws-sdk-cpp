/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/FlowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace FlowStatusMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Deprecated_HASH = ConstExprHashingUtils::HashString("Deprecated");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Draft_HASH = ConstExprHashingUtils::HashString("Draft");
        static constexpr uint32_t Errored_HASH = ConstExprHashingUtils::HashString("Errored");
        static constexpr uint32_t Suspended_HASH = ConstExprHashingUtils::HashString("Suspended");


        FlowStatus GetFlowStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return FlowStatus::Active;
          }
          else if (hashCode == Deprecated_HASH)
          {
            return FlowStatus::Deprecated;
          }
          else if (hashCode == Deleted_HASH)
          {
            return FlowStatus::Deleted;
          }
          else if (hashCode == Draft_HASH)
          {
            return FlowStatus::Draft;
          }
          else if (hashCode == Errored_HASH)
          {
            return FlowStatus::Errored;
          }
          else if (hashCode == Suspended_HASH)
          {
            return FlowStatus::Suspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowStatus>(hashCode);
          }

          return FlowStatus::NOT_SET;
        }

        Aws::String GetNameForFlowStatus(FlowStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowStatus::NOT_SET:
            return {};
          case FlowStatus::Active:
            return "Active";
          case FlowStatus::Deprecated:
            return "Deprecated";
          case FlowStatus::Deleted:
            return "Deleted";
          case FlowStatus::Draft:
            return "Draft";
          case FlowStatus::Errored:
            return "Errored";
          case FlowStatus::Suspended:
            return "Suspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowStatusMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
