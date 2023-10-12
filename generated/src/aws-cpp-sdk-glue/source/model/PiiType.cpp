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

        static constexpr uint32_t RowAudit_HASH = ConstExprHashingUtils::HashString("RowAudit");
        static constexpr uint32_t RowMasking_HASH = ConstExprHashingUtils::HashString("RowMasking");
        static constexpr uint32_t ColumnAudit_HASH = ConstExprHashingUtils::HashString("ColumnAudit");
        static constexpr uint32_t ColumnMasking_HASH = ConstExprHashingUtils::HashString("ColumnMasking");


        PiiType GetPiiTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RowAudit_HASH)
          {
            return PiiType::RowAudit;
          }
          else if (hashCode == RowMasking_HASH)
          {
            return PiiType::RowMasking;
          }
          else if (hashCode == ColumnAudit_HASH)
          {
            return PiiType::ColumnAudit;
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
          case PiiType::RowMasking:
            return "RowMasking";
          case PiiType::ColumnAudit:
            return "ColumnAudit";
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
