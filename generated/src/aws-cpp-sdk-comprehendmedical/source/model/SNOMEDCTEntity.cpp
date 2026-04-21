/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTEntity.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComprehendMedical {
namespace Model {

SNOMEDCTEntity::SNOMEDCTEntity(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SNOMEDCTEntity& SNOMEDCTEntity::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "Id") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_id = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_id = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_idHasBeenSet = true;
              }

              else if (initialKeyStr == "Text") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_text = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_text = ss.str();
                  }
                }
                m_textHasBeenSet = true;
              }

              else if (initialKeyStr == "Category") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_category = SNOMEDCTEntityCategoryMapper::GetSNOMEDCTEntityCategoryForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_categoryHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = SNOMEDCTEntityTypeMapper::GetSNOMEDCTEntityTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "Score") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_score = val.value();
                }
                m_scoreHasBeenSet = true;
              }

              else if (initialKeyStr == "BeginOffset") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_beginOffset = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_beginOffset = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_beginOffsetHasBeenSet = true;
              }

              else if (initialKeyStr == "EndOffset") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_endOffset = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_endOffset = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_endOffsetHasBeenSet = true;
              }

              else if (initialKeyStr == "Attributes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_attributes.push_back(SNOMEDCTAttribute(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_attributes.push_back(SNOMEDCTAttribute(decoder));
                    }
                  }
                }
                m_attributesHasBeenSet = true;
              }

              else if (initialKeyStr == "Traits") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_traits.push_back(SNOMEDCTTrait(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_traits.push_back(SNOMEDCTTrait(decoder));
                    }
                  }
                }
                m_traitsHasBeenSet = true;
              }

              else if (initialKeyStr == "SNOMEDCTConcepts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_sNOMEDCTConcepts.push_back(SNOMEDCTConcept(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_sNOMEDCTConcepts.push_back(SNOMEDCTConcept(decoder));
                    }
                  }
                }
                m_sNOMEDCTConceptsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SNOMEDCTEntity", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "Id") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_id = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_id = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_idHasBeenSet = true;
            }

            else if (initialKeyStr == "Text") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_text = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_text = ss.str();
                }
              }
              m_textHasBeenSet = true;
            }

            else if (initialKeyStr == "Category") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_category = SNOMEDCTEntityCategoryMapper::GetSNOMEDCTEntityCategoryForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_categoryHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = SNOMEDCTEntityTypeMapper::GetSNOMEDCTEntityTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "Score") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_score = val.value();
              }
              m_scoreHasBeenSet = true;
            }

            else if (initialKeyStr == "BeginOffset") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_beginOffset = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_beginOffset = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_beginOffsetHasBeenSet = true;
            }

            else if (initialKeyStr == "EndOffset") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_endOffset = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_endOffset = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_endOffsetHasBeenSet = true;
            }

            else if (initialKeyStr == "Attributes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_attributes.push_back(SNOMEDCTAttribute(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_attributes.push_back(SNOMEDCTAttribute(decoder));
                  }
                }
              }
              m_attributesHasBeenSet = true;
            }

            else if (initialKeyStr == "Traits") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_traits.push_back(SNOMEDCTTrait(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_traits.push_back(SNOMEDCTTrait(decoder));
                  }
                }
              }
              m_traitsHasBeenSet = true;
            }

            else if (initialKeyStr == "SNOMEDCTConcepts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_sNOMEDCTConcepts.push_back(SNOMEDCTConcept(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_sNOMEDCTConcepts.push_back(SNOMEDCTConcept(decoder));
                  }
                }
              }
              m_sNOMEDCTConceptsHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void SNOMEDCTEntity::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_textHasBeenSet) {
    mapSize++;
  }
  if (m_categoryHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_scoreHasBeenSet) {
    mapSize++;
  }
  if (m_beginOffsetHasBeenSet) {
    mapSize++;
  }
  if (m_endOffsetHasBeenSet) {
    mapSize++;
  }
  if (m_attributesHasBeenSet) {
    mapSize++;
  }
  if (m_traitsHasBeenSet) {
    mapSize++;
  }
  if (m_sNOMEDCTConceptsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Id"));
    (m_id >= 0) ? encoder.WriteUInt(m_id) : encoder.WriteNegInt(m_id);
  }

  if (m_textHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Text"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_text.c_str()));
  }

  if (m_categoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Category"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SNOMEDCTEntityCategoryMapper::GetNameForSNOMEDCTEntityCategory(m_category).c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SNOMEDCTEntityTypeMapper::GetNameForSNOMEDCTEntityType(m_type).c_str()));
  }

  if (m_scoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Score"));
    encoder.WriteFloat(m_score);
  }

  if (m_beginOffsetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BeginOffset"));
    (m_beginOffset >= 0) ? encoder.WriteUInt(m_beginOffset) : encoder.WriteNegInt(m_beginOffset);
  }

  if (m_endOffsetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndOffset"));
    (m_endOffset >= 0) ? encoder.WriteUInt(m_endOffset) : encoder.WriteNegInt(m_endOffset);
  }

  if (m_attributesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Attributes"));
    encoder.WriteArrayStart(m_attributes.size());
    for (const auto& item_0 : m_attributes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_traitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Traits"));
    encoder.WriteArrayStart(m_traits.size());
    for (const auto& item_0 : m_traits) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sNOMEDCTConceptsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SNOMEDCTConcepts"));
    encoder.WriteArrayStart(m_sNOMEDCTConcepts.size());
    for (const auto& item_0 : m_sNOMEDCTConcepts) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace ComprehendMedical
}  // namespace Aws