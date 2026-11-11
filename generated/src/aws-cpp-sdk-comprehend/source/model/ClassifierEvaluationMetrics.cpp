/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ClassifierEvaluationMetrics.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

ClassifierEvaluationMetrics::ClassifierEvaluationMetrics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ClassifierEvaluationMetrics& ClassifierEvaluationMetrics::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Accuracy") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_accuracy = val.value();
                }
                m_accuracyHasBeenSet = true;
              }

              else if (initialKeyStr == "Precision") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_precision = val.value();
                }
                m_precisionHasBeenSet = true;
              }

              else if (initialKeyStr == "Recall") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_recall = val.value();
                }
                m_recallHasBeenSet = true;
              }

              else if (initialKeyStr == "F1Score") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_f1Score = val.value();
                }
                m_f1ScoreHasBeenSet = true;
              }

              else if (initialKeyStr == "MicroPrecision") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_microPrecision = val.value();
                }
                m_microPrecisionHasBeenSet = true;
              }

              else if (initialKeyStr == "MicroRecall") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_microRecall = val.value();
                }
                m_microRecallHasBeenSet = true;
              }

              else if (initialKeyStr == "MicroF1Score") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_microF1Score = val.value();
                }
                m_microF1ScoreHasBeenSet = true;
              }

              else if (initialKeyStr == "HammingLoss") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_hammingLoss = val.value();
                }
                m_hammingLossHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ClassifierEvaluationMetrics", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Accuracy") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_accuracy = val.value();
              }
              m_accuracyHasBeenSet = true;
            }

            else if (initialKeyStr == "Precision") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_precision = val.value();
              }
              m_precisionHasBeenSet = true;
            }

            else if (initialKeyStr == "Recall") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_recall = val.value();
              }
              m_recallHasBeenSet = true;
            }

            else if (initialKeyStr == "F1Score") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_f1Score = val.value();
              }
              m_f1ScoreHasBeenSet = true;
            }

            else if (initialKeyStr == "MicroPrecision") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_microPrecision = val.value();
              }
              m_microPrecisionHasBeenSet = true;
            }

            else if (initialKeyStr == "MicroRecall") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_microRecall = val.value();
              }
              m_microRecallHasBeenSet = true;
            }

            else if (initialKeyStr == "MicroF1Score") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_microF1Score = val.value();
              }
              m_microF1ScoreHasBeenSet = true;
            }

            else if (initialKeyStr == "HammingLoss") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_hammingLoss = val.value();
              }
              m_hammingLossHasBeenSet = true;
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

void ClassifierEvaluationMetrics::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_accuracyHasBeenSet) {
    mapSize++;
  }
  if (m_precisionHasBeenSet) {
    mapSize++;
  }
  if (m_recallHasBeenSet) {
    mapSize++;
  }
  if (m_f1ScoreHasBeenSet) {
    mapSize++;
  }
  if (m_microPrecisionHasBeenSet) {
    mapSize++;
  }
  if (m_microRecallHasBeenSet) {
    mapSize++;
  }
  if (m_microF1ScoreHasBeenSet) {
    mapSize++;
  }
  if (m_hammingLossHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_accuracyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Accuracy"));
    encoder.WriteFloat(m_accuracy);
  }

  if (m_precisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Precision"));
    encoder.WriteFloat(m_precision);
  }

  if (m_recallHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Recall"));
    encoder.WriteFloat(m_recall);
  }

  if (m_f1ScoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("F1Score"));
    encoder.WriteFloat(m_f1Score);
  }

  if (m_microPrecisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MicroPrecision"));
    encoder.WriteFloat(m_microPrecision);
  }

  if (m_microRecallHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MicroRecall"));
    encoder.WriteFloat(m_microRecall);
  }

  if (m_microF1ScoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MicroF1Score"));
    encoder.WriteFloat(m_microF1Score);
  }

  if (m_hammingLossHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HammingLoss"));
    encoder.WriteFloat(m_hammingLoss);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws