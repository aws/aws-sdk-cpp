/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ClassifierMetadata.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

ClassifierMetadata::ClassifierMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ClassifierMetadata& ClassifierMetadata::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "NumberOfLabels") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfLabels = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfLabels = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfLabelsHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfTrainedDocuments") {
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
                m_evaluationMetrics = ClassifierEvaluationMetrics(decoder);
                m_evaluationMetricsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ClassifierMetadata", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "NumberOfLabels") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfLabels = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfLabels = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfLabelsHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfTrainedDocuments") {
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
              m_evaluationMetrics = ClassifierEvaluationMetrics(decoder);
              m_evaluationMetricsHasBeenSet = true;
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

void ClassifierMetadata::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_numberOfLabelsHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfTrainedDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfTestDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationMetricsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_numberOfLabelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfLabels"));
    (m_numberOfLabels >= 0) ? encoder.WriteUInt(m_numberOfLabels) : encoder.WriteNegInt(m_numberOfLabels);
  }

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
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws