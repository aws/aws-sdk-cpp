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

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deprecated_HASH = HashingUtils::HashString("Deprecated");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Draft_HASH = HashingUtils::HashString("Draft");
        static const int Errored_HASH = HashingUtils::HashString("Errored");
        static const int Suspended_HASH = HashingUtils::HashString("Suspended");


        FlowStatus GetFlowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
