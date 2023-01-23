/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ConflictDetailLevelTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ConflictDetailLevelTypeEnumMapper
      {

        static const int FILE_LEVEL_HASH = HashingUtils::HashString("FILE_LEVEL");
        static const int LINE_LEVEL_HASH = HashingUtils::HashString("LINE_LEVEL");


        ConflictDetailLevelTypeEnum GetConflictDetailLevelTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_LEVEL_HASH)
          {
            return ConflictDetailLevelTypeEnum::FILE_LEVEL;
          }
          else if (hashCode == LINE_LEVEL_HASH)
          {
            return ConflictDetailLevelTypeEnum::LINE_LEVEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictDetailLevelTypeEnum>(hashCode);
          }

          return ConflictDetailLevelTypeEnum::NOT_SET;
        }

        Aws::String GetNameForConflictDetailLevelTypeEnum(ConflictDetailLevelTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ConflictDetailLevelTypeEnum::FILE_LEVEL:
            return "FILE_LEVEL";
          case ConflictDetailLevelTypeEnum::LINE_LEVEL:
            return "LINE_LEVEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictDetailLevelTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
