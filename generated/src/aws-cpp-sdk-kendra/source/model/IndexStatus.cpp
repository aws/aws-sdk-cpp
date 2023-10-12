/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/IndexStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace IndexStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t SYSTEM_UPDATING_HASH = ConstExprHashingUtils::HashString("SYSTEM_UPDATING");


        IndexStatus GetIndexStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IndexStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IndexStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IndexStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IndexStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IndexStatus::UPDATING;
          }
          else if (hashCode == SYSTEM_UPDATING_HASH)
          {
            return IndexStatus::SYSTEM_UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexStatus>(hashCode);
          }

          return IndexStatus::NOT_SET;
        }

        Aws::String GetNameForIndexStatus(IndexStatus enumValue)
        {
          switch(enumValue)
          {
          case IndexStatus::NOT_SET:
            return {};
          case IndexStatus::CREATING:
            return "CREATING";
          case IndexStatus::ACTIVE:
            return "ACTIVE";
          case IndexStatus::DELETING:
            return "DELETING";
          case IndexStatus::FAILED:
            return "FAILED";
          case IndexStatus::UPDATING:
            return "UPDATING";
          case IndexStatus::SYSTEM_UPDATING:
            return "SYSTEM_UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
