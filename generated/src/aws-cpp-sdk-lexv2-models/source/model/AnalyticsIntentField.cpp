/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentField.h>
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
      namespace AnalyticsIntentFieldMapper
      {

        static const int IntentName_HASH = HashingUtils::HashString("IntentName");
        static const int IntentEndState_HASH = HashingUtils::HashString("IntentEndState");
        static const int IntentLevel_HASH = HashingUtils::HashString("IntentLevel");


        AnalyticsIntentField GetAnalyticsIntentFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentName_HASH)
          {
            return AnalyticsIntentField::IntentName;
          }
          else if (hashCode == IntentEndState_HASH)
          {
            return AnalyticsIntentField::IntentEndState;
          }
          else if (hashCode == IntentLevel_HASH)
          {
            return AnalyticsIntentField::IntentLevel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsIntentField>(hashCode);
          }

          return AnalyticsIntentField::NOT_SET;
        }

        Aws::String GetNameForAnalyticsIntentField(AnalyticsIntentField enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsIntentField::NOT_SET:
            return {};
          case AnalyticsIntentField::IntentName:
            return "IntentName";
          case AnalyticsIntentField::IntentEndState:
            return "IntentEndState";
          case AnalyticsIntentField::IntentLevel:
            return "IntentLevel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntentFieldMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
