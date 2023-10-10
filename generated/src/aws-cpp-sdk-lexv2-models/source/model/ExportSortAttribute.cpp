/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExportSortAttribute.h>
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
      namespace ExportSortAttributeMapper
      {

        static const int LastUpdatedDateTime_HASH = HashingUtils::HashString("LastUpdatedDateTime");


        ExportSortAttribute GetExportSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LastUpdatedDateTime_HASH)
          {
            return ExportSortAttribute::LastUpdatedDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportSortAttribute>(hashCode);
          }

          return ExportSortAttribute::NOT_SET;
        }

        Aws::String GetNameForExportSortAttribute(ExportSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case ExportSortAttribute::NOT_SET:
            return {};
          case ExportSortAttribute::LastUpdatedDateTime:
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

      } // namespace ExportSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
