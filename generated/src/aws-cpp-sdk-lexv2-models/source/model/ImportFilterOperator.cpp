/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportFilterOperator.h>
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
      namespace ImportFilterOperatorMapper
      {

        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");


        ImportFilterOperator GetImportFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return ImportFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return ImportFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportFilterOperator>(hashCode);
          }

          return ImportFilterOperator::NOT_SET;
        }

        Aws::String GetNameForImportFilterOperator(ImportFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case ImportFilterOperator::NOT_SET:
            return {};
          case ImportFilterOperator::CO:
            return "CO";
          case ImportFilterOperator::EQ:
            return "EQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
