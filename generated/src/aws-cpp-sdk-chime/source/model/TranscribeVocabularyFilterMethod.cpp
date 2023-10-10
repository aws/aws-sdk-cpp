/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeVocabularyFilterMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribeVocabularyFilterMethodMapper
      {

        static const int remove_HASH = HashingUtils::HashString("remove");
        static const int mask_HASH = HashingUtils::HashString("mask");
        static const int tag_HASH = HashingUtils::HashString("tag");


        TranscribeVocabularyFilterMethod GetTranscribeVocabularyFilterMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace Chime
} // namespace Aws
