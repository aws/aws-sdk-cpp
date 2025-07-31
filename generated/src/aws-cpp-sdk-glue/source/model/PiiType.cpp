/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PiiType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace PiiTypeMapper
      {

        static const int RowAudit_HASH = HashingUtils::HashString("RowAudit");
        static const int RowHashing_HASH = HashingUtils::HashString("RowHashing");
        static const int RowMasking_HASH = HashingUtils::HashString("RowMasking");
        static const int RowPartialMasking_HASH = HashingUtils::HashString("RowPartialMasking");
        static const int ColumnAudit_HASH = HashingUtils::HashString("ColumnAudit");
        static const int ColumnHashing_HASH = HashingUtils::HashString("ColumnHashing");
        static const int ColumnMasking_HASH = HashingUtils::HashString("ColumnMasking");


        PiiType GetPiiTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RowAudit_HASH)
          {
            return PiiType::RowAudit;
          }
          else if (hashCode == RowHashing_HASH)
          {
            return PiiType::RowHashing;
          }
          else if (hashCode == RowMasking_HASH)
          {
            return PiiType::RowMasking;
          }
          else if (hashCode == RowPartialMasking_HASH)
          {
            return PiiType::RowPartialMasking;
          }
          else if (hashCode == ColumnAudit_HASH)
          {
            return PiiType::ColumnAudit;
          }
          else if (hashCode == ColumnHashing_HASH)
          {
            return PiiType::ColumnHashing;
          }
          else if (hashCode == ColumnMasking_HASH)
          {
            return PiiType::ColumnMasking;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PiiType>(hashCode);
          }

          return PiiType::NOT_SET;
        }

        Aws::String GetNameForPiiType(PiiType enumValue)
        {
          switch(enumValue)
          {
          case PiiType::NOT_SET:
            return {};
          case PiiType::RowAudit:
            return "RowAudit";
          case PiiType::RowHashing:
            return "RowHashing";
          case PiiType::RowMasking:
            return "RowMasking";
          case PiiType::RowPartialMasking:
            return "RowPartialMasking";
          case PiiType::ColumnAudit:
            return "ColumnAudit";
          case PiiType::ColumnHashing:
            return "ColumnHashing";
          case PiiType::ColumnMasking:
            return "ColumnMasking";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PiiTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
