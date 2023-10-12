/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PartitionIndexStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace PartitionIndexStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        PartitionIndexStatus GetPartitionIndexStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PartitionIndexStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PartitionIndexStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PartitionIndexStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PartitionIndexStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartitionIndexStatus>(hashCode);
          }

          return PartitionIndexStatus::NOT_SET;
        }

        Aws::String GetNameForPartitionIndexStatus(PartitionIndexStatus enumValue)
        {
          switch(enumValue)
          {
          case PartitionIndexStatus::NOT_SET:
            return {};
          case PartitionIndexStatus::CREATING:
            return "CREATING";
          case PartitionIndexStatus::ACTIVE:
            return "ACTIVE";
          case PartitionIndexStatus::DELETING:
            return "DELETING";
          case PartitionIndexStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionIndexStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
