/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackResourceDriftStatusMapper
      {

        static constexpr uint32_t IN_SYNC_HASH = ConstExprHashingUtils::HashString("IN_SYNC");
        static constexpr uint32_t MODIFIED_HASH = ConstExprHashingUtils::HashString("MODIFIED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t NOT_CHECKED_HASH = ConstExprHashingUtils::HashString("NOT_CHECKED");


        StackResourceDriftStatus GetStackResourceDriftStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_SYNC_HASH)
          {
            return StackResourceDriftStatus::IN_SYNC;
          }
          else if (hashCode == MODIFIED_HASH)
          {
            return StackResourceDriftStatus::MODIFIED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return StackResourceDriftStatus::DELETED;
          }
          else if (hashCode == NOT_CHECKED_HASH)
          {
            return StackResourceDriftStatus::NOT_CHECKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackResourceDriftStatus>(hashCode);
          }

          return StackResourceDriftStatus::NOT_SET;
        }

        Aws::String GetNameForStackResourceDriftStatus(StackResourceDriftStatus enumValue)
        {
          switch(enumValue)
          {
          case StackResourceDriftStatus::NOT_SET:
            return {};
          case StackResourceDriftStatus::IN_SYNC:
            return "IN_SYNC";
          case StackResourceDriftStatus::MODIFIED:
            return "MODIFIED";
          case StackResourceDriftStatus::DELETED:
            return "DELETED";
          case StackResourceDriftStatus::NOT_CHECKED:
            return "NOT_CHECKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackResourceDriftStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
