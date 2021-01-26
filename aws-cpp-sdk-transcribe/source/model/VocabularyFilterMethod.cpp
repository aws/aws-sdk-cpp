/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/VocabularyFilterMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace VocabularyFilterMethodMapper
      {

        static const int remove_HASH = HashingUtils::HashString("remove");
        static const int mask_HASH = HashingUtils::HashString("mask");


        VocabularyFilterMethod GetVocabularyFilterMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remove_HASH)
          {
            return VocabularyFilterMethod::remove;
          }
          else if (hashCode == mask_HASH)
          {
            return VocabularyFilterMethod::mask;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VocabularyFilterMethod>(hashCode);
          }

          return VocabularyFilterMethod::NOT_SET;
        }

        Aws::String GetNameForVocabularyFilterMethod(VocabularyFilterMethod enumValue)
        {
          switch(enumValue)
          {
          case VocabularyFilterMethod::remove:
            return "remove";
          case VocabularyFilterMethod::mask:
            return "mask";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VocabularyFilterMethodMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
