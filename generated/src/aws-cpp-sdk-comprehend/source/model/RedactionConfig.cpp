/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/RedactionConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

RedactionConfig::RedactionConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RedactionConfig& RedactionConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PiiEntityTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                        }
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_piiEntityTypesHasBeenSet = true;
              }

              else if (initialKeyStr == "MaskMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_maskMode = PiiEntitiesDetectionMaskModeMapper::GetPiiEntitiesDetectionMaskModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_maskModeHasBeenSet = true;
              }

              else if (initialKeyStr == "MaskCharacter") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_maskCharacter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_maskCharacter = ss.str();
                  }
                }
                m_maskCharacterHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RedactionConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PiiEntityTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_piiEntityTypes.push_back(PiiEntityTypeMapper::GetPiiEntityTypeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_piiEntityTypesHasBeenSet = true;
            }

            else if (initialKeyStr == "MaskMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_maskMode = PiiEntitiesDetectionMaskModeMapper::GetPiiEntitiesDetectionMaskModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_maskModeHasBeenSet = true;
            }

            else if (initialKeyStr == "MaskCharacter") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_maskCharacter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_maskCharacter = ss.str();
                }
              }
              m_maskCharacterHasBeenSet = true;
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

void RedactionConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_piiEntityTypesHasBeenSet) {
    mapSize++;
  }
  if (m_maskModeHasBeenSet) {
    mapSize++;
  }
  if (m_maskCharacterHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_piiEntityTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PiiEntityTypes"));
    encoder.WriteArrayStart(m_piiEntityTypes.size());
    for (const auto& item_0 : m_piiEntityTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(PiiEntityTypeMapper::GetNameForPiiEntityType(item_0).c_str()));
    }
  }

  if (m_maskModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaskMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PiiEntitiesDetectionMaskModeMapper::GetNameForPiiEntitiesDetectionMaskMode(m_maskMode).c_str()));
  }

  if (m_maskCharacterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaskCharacter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_maskCharacter.c_str()));
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws