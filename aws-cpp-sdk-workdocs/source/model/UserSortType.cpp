/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UserSortType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace UserSortTypeMapper
      {

        static const int USER_NAME_HASH = HashingUtils::HashString("USER_NAME");
        static const int FULL_NAME_HASH = HashingUtils::HashString("FULL_NAME");
        static const int STORAGE_LIMIT_HASH = HashingUtils::HashString("STORAGE_LIMIT");
        static const int USER_STATUS_HASH = HashingUtils::HashString("USER_STATUS");
        static const int STORAGE_USED_HASH = HashingUtils::HashString("STORAGE_USED");


        UserSortType GetUserSortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_NAME_HASH)
          {
            return UserSortType::USER_NAME;
          }
          else if (hashCode == FULL_NAME_HASH)
          {
            return UserSortType::FULL_NAME;
          }
          else if (hashCode == STORAGE_LIMIT_HASH)
          {
            return UserSortType::STORAGE_LIMIT;
          }
          else if (hashCode == USER_STATUS_HASH)
          {
            return UserSortType::USER_STATUS;
          }
          else if (hashCode == STORAGE_USED_HASH)
          {
            return UserSortType::STORAGE_USED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserSortType>(hashCode);
          }

          return UserSortType::NOT_SET;
        }

        Aws::String GetNameForUserSortType(UserSortType enumValue)
        {
          switch(enumValue)
          {
          case UserSortType::USER_NAME:
            return "USER_NAME";
          case UserSortType::FULL_NAME:
            return "FULL_NAME";
          case UserSortType::STORAGE_LIMIT:
            return "STORAGE_LIMIT";
          case UserSortType::USER_STATUS:
            return "USER_STATUS";
          case UserSortType::STORAGE_USED:
            return "STORAGE_USED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserSortTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
