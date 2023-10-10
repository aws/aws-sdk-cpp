/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/ConversationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace ConversationModeMapper
      {

        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        ConversationMode GetConversationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_HASH)
          {
            return ConversationMode::AUDIO;
          }
          else if (hashCode == TEXT_HASH)
          {
            return ConversationMode::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationMode>(hashCode);
          }

          return ConversationMode::NOT_SET;
        }

        Aws::String GetNameForConversationMode(ConversationMode enumValue)
        {
          switch(enumValue)
          {
          case ConversationMode::NOT_SET:
            return {};
          case ConversationMode::AUDIO:
            return "AUDIO";
          case ConversationMode::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationModeMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
