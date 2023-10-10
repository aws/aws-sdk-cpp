/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsSessionField.h>
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
      namespace AnalyticsSessionFieldMapper
      {

        static const int ConversationEndState_HASH = HashingUtils::HashString("ConversationEndState");
        static const int LocaleId_HASH = HashingUtils::HashString("LocaleId");


        AnalyticsSessionField GetAnalyticsSessionFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConversationEndState_HASH)
          {
            return AnalyticsSessionField::ConversationEndState;
          }
          else if (hashCode == LocaleId_HASH)
          {
            return AnalyticsSessionField::LocaleId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsSessionField>(hashCode);
          }

          return AnalyticsSessionField::NOT_SET;
        }

        Aws::String GetNameForAnalyticsSessionField(AnalyticsSessionField enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsSessionField::NOT_SET:
            return {};
          case AnalyticsSessionField::ConversationEndState:
            return "ConversationEndState";
          case AnalyticsSessionField::LocaleId:
            return "LocaleId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsSessionFieldMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
