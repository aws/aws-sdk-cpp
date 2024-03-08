/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TranscriptFormat.h>
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
      namespace TranscriptFormatMapper
      {

        static const int Lex_HASH = HashingUtils::HashString("Lex");


        TranscriptFormat GetTranscriptFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Lex_HASH)
          {
            return TranscriptFormat::Lex;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscriptFormat>(hashCode);
          }

          return TranscriptFormat::NOT_SET;
        }

        Aws::String GetNameForTranscriptFormat(TranscriptFormat enumValue)
        {
          switch(enumValue)
          {
          case TranscriptFormat::NOT_SET:
            return {};
          case TranscriptFormat::Lex:
            return "Lex";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscriptFormatMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
