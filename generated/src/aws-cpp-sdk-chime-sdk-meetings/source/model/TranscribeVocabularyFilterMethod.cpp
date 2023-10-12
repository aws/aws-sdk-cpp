/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/TranscribeVocabularyFilterMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace TranscribeVocabularyFilterMethodMapper
      {

        static constexpr uint32_t remove_HASH = ConstExprHashingUtils::HashString("remove");
        static constexpr uint32_t mask_HASH = ConstExprHashingUtils::HashString("mask");
        static constexpr uint32_t tag_HASH = ConstExprHashingUtils::HashString("tag");


        TranscribeVocabularyFilterMethod GetTranscribeVocabularyFilterMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remove_HASH)
          {
            return TranscribeVocabularyFilterMethod::remove;
          }
          else if (hashCode == mask_HASH)
          {
            return TranscribeVocabularyFilterMethod::mask;
          }
          else if (hashCode == tag_HASH)
          {
            return TranscribeVocabularyFilterMethod::tag;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeVocabularyFilterMethod>(hashCode);
          }

          return TranscribeVocabularyFilterMethod::NOT_SET;
        }

        Aws::String GetNameForTranscribeVocabularyFilterMethod(TranscribeVocabularyFilterMethod enumValue)
        {
          switch(enumValue)
          {
          case TranscribeVocabularyFilterMethod::NOT_SET:
            return {};
          case TranscribeVocabularyFilterMethod::remove:
            return "remove";
          case TranscribeVocabularyFilterMethod::mask:
            return "mask";
          case TranscribeVocabularyFilterMethod::tag:
            return "tag";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeVocabularyFilterMethodMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
