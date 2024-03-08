/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLogsInputModeFilter.h>
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
      namespace ConversationLogsInputModeFilterMapper
      {

        static const int Speech_HASH = HashingUtils::HashString("Speech");
        static const int Text_HASH = HashingUtils::HashString("Text");


        ConversationLogsInputModeFilter GetConversationLogsInputModeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Speech_HASH)
          {
            return ConversationLogsInputModeFilter::Speech;
          }
          else if (hashCode == Text_HASH)
          {
            return ConversationLogsInputModeFilter::Text;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationLogsInputModeFilter>(hashCode);
          }

          return ConversationLogsInputModeFilter::NOT_SET;
        }

        Aws::String GetNameForConversationLogsInputModeFilter(ConversationLogsInputModeFilter enumValue)
        {
          switch(enumValue)
          {
          case ConversationLogsInputModeFilter::NOT_SET:
            return {};
          case ConversationLogsInputModeFilter::Speech:
            return "Speech";
          case ConversationLogsInputModeFilter::Text:
            return "Text";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationLogsInputModeFilterMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
