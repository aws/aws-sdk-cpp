/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentReaderConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

DocumentReaderConfig::DocumentReaderConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DocumentReaderConfig& DocumentReaderConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DocumentReadAction") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_documentReadAction = DocumentReadActionMapper::GetDocumentReadActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_documentReadActionHasBeenSet = true;
              }

              else if (initialKeyStr == "DocumentReadMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_documentReadMode = DocumentReadModeMapper::GetDocumentReadModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_documentReadModeHasBeenSet = true;
              }

              else if (initialKeyStr == "FeatureTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_featureTypes.push_back(DocumentReadFeatureTypesMapper::GetDocumentReadFeatureTypesForName(
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
                        m_featureTypes.push_back(DocumentReadFeatureTypesMapper::GetDocumentReadFeatureTypesForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_featureTypesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DocumentReaderConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DocumentReadAction") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_documentReadAction = DocumentReadActionMapper::GetDocumentReadActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_documentReadActionHasBeenSet = true;
            }

            else if (initialKeyStr == "DocumentReadMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_documentReadMode = DocumentReadModeMapper::GetDocumentReadModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_documentReadModeHasBeenSet = true;
            }

            else if (initialKeyStr == "FeatureTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_featureTypes.push_back(DocumentReadFeatureTypesMapper::GetDocumentReadFeatureTypesForName(
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
                      m_featureTypes.push_back(DocumentReadFeatureTypesMapper::GetDocumentReadFeatureTypesForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_featureTypesHasBeenSet = true;
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

void DocumentReaderConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_documentReadActionHasBeenSet) {
    mapSize++;
  }
  if (m_documentReadModeHasBeenSet) {
    mapSize++;
  }
  if (m_featureTypesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_documentReadActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentReadAction"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(DocumentReadActionMapper::GetNameForDocumentReadAction(m_documentReadAction).c_str()));
  }

  if (m_documentReadModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentReadMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DocumentReadModeMapper::GetNameForDocumentReadMode(m_documentReadMode).c_str()));
  }

  if (m_featureTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FeatureTypes"));
    encoder.WriteArrayStart(m_featureTypes.size());
    for (const auto& item_0 : m_featureTypes) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(DocumentReadFeatureTypesMapper::GetNameForDocumentReadFeatureTypes(item_0).c_str()));
    }
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws