/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/SortByEnum.h>
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
      namespace SortByEnumMapper
      {

        static constexpr uint32_t repositoryName_HASH = ConstExprHashingUtils::HashString("repositoryName");
        static constexpr uint32_t lastModifiedDate_HASH = ConstExprHashingUtils::HashString("lastModifiedDate");


        SortByEnum GetSortByEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == repositoryName_HASH)
          {
            return SortByEnum::repositoryName;
          }
          else if (hashCode == lastModifiedDate_HASH)
          {
            return SortByEnum::lastModifiedDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortByEnum>(hashCode);
          }

          return SortByEnum::NOT_SET;
        }

        Aws::String GetNameForSortByEnum(SortByEnum enumValue)
        {
          switch(enumValue)
          {
          case SortByEnum::NOT_SET:
            return {};
          case SortByEnum::repositoryName:
            return "repositoryName";
          case SortByEnum::lastModifiedDate:
            return "lastModifiedDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortByEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
