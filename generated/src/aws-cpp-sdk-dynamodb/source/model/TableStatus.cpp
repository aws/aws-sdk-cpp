/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TableStatus.h>
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
      namespace TableStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("INACCESSIBLE_ENCRYPTION_CREDENTIALS");
        static constexpr uint32_t ARCHIVING_HASH = ConstExprHashingUtils::HashString("ARCHIVING");
        static constexpr uint32_t ARCHIVED_HASH = ConstExprHashingUtils::HashString("ARCHIVED");


        TableStatus GetTableStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return TableStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return TableStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TableStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TableStatus::ACTIVE;
          }
          else if (hashCode == INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH)
          {
            return TableStatus::INACCESSIBLE_ENCRYPTION_CREDENTIALS;
          }
          else if (hashCode == ARCHIVING_HASH)
          {
            return TableStatus::ARCHIVING;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return TableStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableStatus>(hashCode);
          }

          return TableStatus::NOT_SET;
        }

        Aws::String GetNameForTableStatus(TableStatus enumValue)
        {
          switch(enumValue)
          {
          case TableStatus::NOT_SET:
            return {};
          case TableStatus::CREATING:
            return "CREATING";
          case TableStatus::UPDATING:
            return "UPDATING";
          case TableStatus::DELETING:
            return "DELETING";
          case TableStatus::ACTIVE:
            return "ACTIVE";
          case TableStatus::INACCESSIBLE_ENCRYPTION_CREDENTIALS:
            return "INACCESSIBLE_ENCRYPTION_CREDENTIALS";
          case TableStatus::ARCHIVING:
            return "ARCHIVING";
          case TableStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
