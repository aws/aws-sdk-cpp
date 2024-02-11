/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageField.h>
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
      namespace AnalyticsIntentStageFieldMapper
      {

        static const int IntentStageName_HASH = HashingUtils::HashString("IntentStageName");
        static const int SwitchedToIntent_HASH = HashingUtils::HashString("SwitchedToIntent");


        AnalyticsIntentStageField GetAnalyticsIntentStageFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentStageName_HASH)
          {
            return AnalyticsIntentStageField::IntentStageName;
          }
          else if (hashCode == SwitchedToIntent_HASH)
          {
            return AnalyticsIntentStageField::SwitchedToIntent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentStageField>(hashCode);
          }

          return AnalyticsIntentStageField::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentStageField(AnalyticsIntentStageField enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentStageField::NOT_SET:
            return {};
          case AnalyticsIntentStageField::IntentStageName:
            return "IntentStageName";
          case AnalyticsIntentStageField::SwitchedToIntent:
            return "SwitchedToIntent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentStageFieldMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
