/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerMetadata.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

EntityRecognizerMetadata::EntityRecognizerMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EntityRecognizerMetadata& EntityRecognizerMetadata::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "NumberOfTrainedDocuments") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfTrainedDocuments = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfTrainedDocuments = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfTrainedDocumentsHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfTestDocuments") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfTestDocuments = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfTestDocuments = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfTestDocumentsHasBeenSet = true;
              }

              else if (initialKeyStr == "EvaluationMetrics") {
                m_evaluationMetrics = EntityRecognizerEvaluationMetrics(decoder);
                m_evaluationMetricsHasBeenSet = true;
              }

              else if (initialKeyStr == "EntityTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_entityTypes.push_back(EntityRecognizerMetadataEntityTypesListItem(decoder));
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
                      m_entityTypes.push_back(EntityRecognizerMetadataEntityTypesListItem(decoder));
                    }
                  }
                }
                m_entityTypesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EntityRecognizerMetadata", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "NumberOfTrainedDocuments") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfTrainedDocuments = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfTrainedDocuments = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfTrainedDocumentsHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfTestDocuments") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfTestDocuments = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfTestDocuments = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfTestDocumentsHasBeenSet = true;
            }

            else if (initialKeyStr == "EvaluationMetrics") {
              m_evaluationMetrics = EntityRecognizerEvaluationMetrics(decoder);
              m_evaluationMetricsHasBeenSet = true;
            }

            else if (initialKeyStr == "EntityTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_entityTypes.push_back(EntityRecognizerMetadataEntityTypesListItem(decoder));
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
                    m_entityTypes.push_back(EntityRecognizerMetadataEntityTypesListItem(decoder));
                  }
                }
              }
              m_entityTypesHasBeenSet = true;
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

void EntityRecognizerMetadata::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_numberOfTrainedDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfTestDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_entityTypesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_numberOfTrainedDocumentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfTrainedDocuments"));
    (m_numberOfTrainedDocuments >= 0) ? encoder.WriteUInt(m_numberOfTrainedDocuments) : encoder.WriteNegInt(m_numberOfTrainedDocuments);
  }

  if (m_numberOfTestDocumentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfTestDocuments"));
    (m_numberOfTestDocuments >= 0) ? encoder.WriteUInt(m_numberOfTestDocuments) : encoder.WriteNegInt(m_numberOfTestDocuments);
  }

  if (m_evaluationMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluationMetrics"));
    m_evaluationMetrics.CborEncode(encoder);
  }

  if (m_entityTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityTypes"));
    encoder.WriteArrayStart(m_entityTypes.size());
    for (const auto& item_0 : m_entityTypes) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws