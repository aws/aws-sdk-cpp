/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/polly/model/SpeechMarkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace SpeechMarkTypeMapper
      {

        static const int sentence_HASH = HashingUtils::HashString("sentence");
        static const int ssml_HASH = HashingUtils::HashString("ssml");
        static const int viseme_HASH = HashingUtils::HashString("viseme");
        static const int word_HASH = HashingUtils::HashString("word");


        SpeechMarkType GetSpeechMarkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sentence_HASH)
          {
            return SpeechMarkType::sentence;
          }
          else if (hashCode == ssml_HASH)
          {
            return SpeechMarkType::ssml;
          }
          else if (hashCode == viseme_HASH)
          {
            return SpeechMarkType::viseme;
          }
          else if (hashCode == word_HASH)
          {
            return SpeechMarkType::word;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpeechMarkType>(hashCode);
          }

          return SpeechMarkType::NOT_SET;
        }

        Aws::String GetNameForSpeechMarkType(SpeechMarkType enumValue)
        {
          switch(enumValue)
          {
          case SpeechMarkType::sentence:
            return "sentence";
          case SpeechMarkType::ssml:
            return "ssml";
          case SpeechMarkType::viseme:
            return "viseme";
          case SpeechMarkType::word:
            return "word";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SpeechMarkTypeMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
