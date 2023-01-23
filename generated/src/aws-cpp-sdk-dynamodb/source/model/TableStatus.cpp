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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH = HashingUtils::HashString("INACCESSIBLE_ENCRYPTION_CREDENTIALS");
        static const int ARCHIVING_HASH = HashingUtils::HashString("ARCHIVING");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        TableStatus GetTableStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
