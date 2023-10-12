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

        static constexpr uint32_t ADJ_HASH = ConstExprHashingUtils::HashString("ADJ");
        static constexpr uint32_t ADP_HASH = ConstExprHashingUtils::HashString("ADP");
        static constexpr uint32_t ADV_HASH = ConstExprHashingUtils::HashString("ADV");
        static constexpr uint32_t AUX_HASH = ConstExprHashingUtils::HashString("AUX");
        static constexpr uint32_t CONJ_HASH = ConstExprHashingUtils::HashString("CONJ");
        static constexpr uint32_t CCONJ_HASH = ConstExprHashingUtils::HashString("CCONJ");
        static constexpr uint32_t DET_HASH = ConstExprHashingUtils::HashString("DET");
        static constexpr uint32_t INTJ_HASH = ConstExprHashingUtils::HashString("INTJ");
        static constexpr uint32_t NOUN_HASH = ConstExprHashingUtils::HashString("NOUN");
        static constexpr uint32_t NUM_HASH = ConstExprHashingUtils::HashString("NUM");
        static constexpr uint32_t O_HASH = ConstExprHashingUtils::HashString("O");
        static constexpr uint32_t PART_HASH = ConstExprHashingUtils::HashString("PART");
        static constexpr uint32_t PRON_HASH = ConstExprHashingUtils::HashString("PRON");
        static constexpr uint32_t PROPN_HASH = ConstExprHashingUtils::HashString("PROPN");
        static constexpr uint32_t PUNCT_HASH = ConstExprHashingUtils::HashString("PUNCT");
        static constexpr uint32_t SCONJ_HASH = ConstExprHashingUtils::HashString("SCONJ");
        static constexpr uint32_t SYM_HASH = ConstExprHashingUtils::HashString("SYM");
        static constexpr uint32_t VERB_HASH = ConstExprHashingUtils::HashString("VERB");


        PartOfSpeechTagType GetPartOfSpeechTagTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PartOfSpeechTagType::NOT_SET:
            return {};
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
