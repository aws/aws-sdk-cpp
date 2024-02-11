/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceField.h>
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
      namespace AnalyticsUtteranceFieldMapper
      {

        static const int UtteranceText_HASH = HashingUtils::HashString("UtteranceText");
        static const int UtteranceState_HASH = HashingUtils::HashString("UtteranceState");


        AnalyticsUtteranceField GetAnalyticsUtteranceFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UtteranceText_HASH)
          {
            return AnalyticsUtteranceField::UtteranceText;
          }
          else if (hashCode == UtteranceState_HASH)
          {
            return AnalyticsUtteranceField::UtteranceState;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsUtteranceField>(hashCode);
          }

          return AnalyticsUtteranceField::NOT_SET;
        }

        Aws::String GetNameForAnalyticsUtteranceField(AnalyticsUtteranceField enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsUtteranceField::NOT_SET:
            return {};
          case AnalyticsUtteranceField::UtteranceText:
            return "UtteranceText";
          case AnalyticsUtteranceField::UtteranceState:
            return "UtteranceState";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsUtteranceFieldMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
