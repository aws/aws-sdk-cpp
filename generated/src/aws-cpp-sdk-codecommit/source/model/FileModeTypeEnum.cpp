/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/FileModeTypeEnum.h>
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
      namespace FileModeTypeEnumMapper
      {

        static constexpr uint32_t EXECUTABLE_HASH = ConstExprHashingUtils::HashString("EXECUTABLE");
        static constexpr uint32_t NORMAL_HASH = ConstExprHashingUtils::HashString("NORMAL");
        static constexpr uint32_t SYMLINK_HASH = ConstExprHashingUtils::HashString("SYMLINK");


        FileModeTypeEnum GetFileModeTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXECUTABLE_HASH)
          {
            return FileModeTypeEnum::EXECUTABLE;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return FileModeTypeEnum::NORMAL;
          }
          else if (hashCode == SYMLINK_HASH)
          {
            return FileModeTypeEnum::SYMLINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileModeTypeEnum>(hashCode);
          }

          return FileModeTypeEnum::NOT_SET;
        }

        Aws::String GetNameForFileModeTypeEnum(FileModeTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case FileModeTypeEnum::NOT_SET:
            return {};
          case FileModeTypeEnum::EXECUTABLE:
            return "EXECUTABLE";
          case FileModeTypeEnum::NORMAL:
            return "NORMAL";
          case FileModeTypeEnum::SYMLINK:
            return "SYMLINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileModeTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
