/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/IndexStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace IndexStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        IndexStatus GetIndexStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IndexStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IndexStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IndexStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IndexStatus::ACTIVE;
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
          case IndexStatus::UPDATING:
            return "UPDATING";
          case IndexStatus::DELETING:
            return "DELETING";
          case IndexStatus::ACTIVE:
            return "ACTIVE";
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
  } // namespace DynamoDB
} // namespace Aws
