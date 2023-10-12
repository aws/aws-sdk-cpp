/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportSortAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ImportSortAttributeMapper
      {

        static constexpr uint32_t LastUpdatedDateTime_HASH = ConstExprHashingUtils::HashString("LastUpdatedDateTime");


        ImportSortAttribute GetImportSortAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LastUpdatedDateTime_HASH)
          {
            return ImportSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportSortAttribute>(hashCode);
          }

          return ImportSortAttribute::NOT_SET;
        }

        Aws::String GetNameForImportSortAttribute(ImportSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case ImportSortAttribute::NOT_SET:
            return {};
          case ImportSortAttribute::LastUpdatedDateTime:
            return "LastUpdatedDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
