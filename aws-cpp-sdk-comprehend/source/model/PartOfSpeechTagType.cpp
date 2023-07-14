/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PartOfSpeechTagType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace PartOfSpeechTagTypeMapper
      {

        static const int ADJ_HASH = HashingUtils::HashString("ADJ");
        static const int ADP_HASH = HashingUtils::HashString("ADP");
        static const int ADV_HASH = HashingUtils::HashString("ADV");
        static const int AUX_HASH = HashingUtils::HashString("AUX");
        static const int CONJ_HASH = HashingUtils::HashString("CONJ");
        static const int CCONJ_HASH = HashingUtils::HashString("CCONJ");
        static const int DET_HASH = HashingUtils::HashString("DET");
        static const int INTJ_HASH = HashingUtils::HashString("INTJ");
        static const int NOUN_HASH = HashingUtils::HashString("NOUN");
        static const int NUM_HASH = HashingUtils::HashString("NUM");
        static const int O_HASH = HashingUtils::HashString("O");
        static const int PART_HASH = HashingUtils::HashString("PART");
        static const int PRON_HASH = HashingUtils::HashString("PRON");
        static const int PROPN_HASH = HashingUtils::HashString("PROPN");
        static const int PUNCT_HASH = HashingUtils::HashString("PUNCT");
        static const int SCONJ_HASH = HashingUtils::HashString("SCONJ");
        static const int SYM_HASH = HashingUtils::HashString("SYM");
        static const int VERB_HASH = HashingUtils::HashString("VERB");


        PartOfSpeechTagType GetPartOfSpeechTagTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADJ_HASH)
          {
            return PartOfSpeechTagType::ADJ;
          }
          else if (hashCode == ADP_HASH)
          {
            return PartOfSpeechTagType::ADP;
          }
          else if (hashCode == ADV_HASH)
          {
            return PartOfSpeechTagType::ADV;
          }
          else if (hashCode == AUX_HASH)
          {
            return PartOfSpeechTagType::AUX;
          }
          else if (hashCode == CONJ_HASH)
          {
            return PartOfSpeechTagType::CONJ;
          }
          else if (hashCode == CCONJ_HASH)
          {
            return PartOfSpeechTagType::CCONJ;
          }
          else if (hashCode == DET_HASH)
          {
            return PartOfSpeechTagType::DET;
          }
          else if (hashCode == INTJ_HASH)
          {
            return PartOfSpeechTagType::INTJ;
          }
          else if (hashCode == NOUN_HASH)
          {
            return PartOfSpeechTagType::NOUN;
          }
          else if (hashCode == NUM_HASH)
          {
            return PartOfSpeechTagType::NUM;
          }
          else if (hashCode == O_HASH)
          {
            return PartOfSpeechTagType::O;
          }
          else if (hashCode == PART_HASH)
          {
            return PartOfSpeechTagType::PART;
          }
          else if (hashCode == PRON_HASH)
          {
            return PartOfSpeechTagType::PRON;
          }
          else if (hashCode == PROPN_HASH)
          {
            return PartOfSpeechTagType::PROPN;
          }
          else if (hashCode == PUNCT_HASH)
          {
            return PartOfSpeechTagType::PUNCT;
          }
          else if (hashCode == SCONJ_HASH)
          {
            return PartOfSpeechTagType::SCONJ;
          }
          else if (hashCode == SYM_HASH)
          {
            return PartOfSpeechTagType::SYM;
          }
          else if (hashCode == VERB_HASH)
          {
            return PartOfSpeechTagType::VERB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartOfSpeechTagType>(hashCode);
          }

          return PartOfSpeechTagType::NOT_SET;
        }

        Aws::String GetNameForPartOfSpeechTagType(PartOfSpeechTagType enumValue)
        {
          switch(enumValue)
          {
          case PartOfSpeechTagType::ADJ:
            return "ADJ";
          case PartOfSpeechTagType::ADP:
            return "ADP";
          case PartOfSpeechTagType::ADV:
            return "ADV";
          case PartOfSpeechTagType::AUX:
            return "AUX";
          case PartOfSpeechTagType::CONJ:
            return "CONJ";
          case PartOfSpeechTagType::CCONJ:
            return "CCONJ";
          case PartOfSpeechTagType::DET:
            return "DET";
          case PartOfSpeechTagType::INTJ:
            return "INTJ";
          case PartOfSpeechTagType::NOUN:
            return "NOUN";
          case PartOfSpeechTagType::NUM:
            return "NUM";
          case PartOfSpeechTagType::O:
            return "O";
          case PartOfSpeechTagType::PART:
            return "PART";
          case PartOfSpeechTagType::PRON:
            return "PRON";
          case PartOfSpeechTagType::PROPN:
            return "PROPN";
          case PartOfSpeechTagType::PUNCT:
            return "PUNCT";
          case PartOfSpeechTagType::SCONJ:
            return "SCONJ";
          case PartOfSpeechTagType::SYM:
            return "SYM";
          case PartOfSpeechTagType::VERB:
            return "VERB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartOfSpeechTagTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
