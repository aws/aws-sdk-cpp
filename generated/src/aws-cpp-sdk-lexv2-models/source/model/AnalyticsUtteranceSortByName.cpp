/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceSortByName.h>
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
      namespace AnalyticsUtteranceSortByNameMapper
      {

        static constexpr uint32_t UtteranceTimestamp_HASH = ConstExprHashingUtils::HashString("UtteranceTimestamp");


        AnalyticsUtteranceSortByName GetAnalyticsUtteranceSortByNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UtteranceTimestamp_HASH)
          {
            return AnalyticsUtteranceSortByName::UtteranceTimestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsUtteranceSortByName>(hashCode);
          }

          return AnalyticsUtteranceSortByName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsUtteranceSortByName(AnalyticsUtteranceSortByName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsUtteranceSortByName::NOT_SET:
            return {};
          case AnalyticsUtteranceSortByName::UtteranceTimestamp:
            return "UtteranceTimestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsUtteranceSortByNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
