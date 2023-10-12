/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSortOrder.h>
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
      namespace AnalyticsSortOrderMapper
      {

        static constexpr uint32_t Ascending_HASH = ConstExprHashingUtils::HashString("Ascending");
        static constexpr uint32_t Descending_HASH = ConstExprHashingUtils::HashString("Descending");


        AnalyticsSortOrder GetAnalyticsSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return AnalyticsSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return AnalyticsSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsSortOrder>(hashCode);
          }

          return AnalyticsSortOrder::NOT_SET;
        }

        Aws::String GetNameForAnalyticsSortOrder(AnalyticsSortOrder enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsSortOrder::NOT_SET:
            return {};
          case AnalyticsSortOrder::Ascending:
            return "Ascending";
          case AnalyticsSortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsSortOrderMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
