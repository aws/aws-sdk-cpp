/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalTableStatus.h>
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
      namespace GlobalTableStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        GlobalTableStatus GetGlobalTableStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GlobalTableStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return GlobalTableStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GlobalTableStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GlobalTableStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalTableStatus>(hashCode);
          }

          return GlobalTableStatus::NOT_SET;
        }

        Aws::String GetNameForGlobalTableStatus(GlobalTableStatus enumValue)
        {
          switch(enumValue)
          {
          case GlobalTableStatus::NOT_SET:
            return {};
          case GlobalTableStatus::CREATING:
            return "CREATING";
          case GlobalTableStatus::ACTIVE:
            return "ACTIVE";
          case GlobalTableStatus::DELETING:
            return "DELETING";
          case GlobalTableStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalTableStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
