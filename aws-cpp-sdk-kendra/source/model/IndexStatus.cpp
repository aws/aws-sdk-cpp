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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int SYSTEM_UPDATING_HASH = HashingUtils::HashString("SYSTEM_UPDATING");


        IndexStatus GetIndexStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
