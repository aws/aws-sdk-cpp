/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelModelEvaluationMetrics.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

FlywheelModelEvaluationMetrics::FlywheelModelEvaluationMetrics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

FlywheelModelEvaluationMetrics& FlywheelModelEvaluationMetrics::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AverageF1Score") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_averageF1Score = val.value();
                }
                m_averageF1ScoreHasBeenSet = true;
              }

              else if (initialKeyStr == "AveragePrecision") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_averagePrecision = val.value();
                }
                m_averagePrecisionHasBeenSet = true;
              }

              else if (initialKeyStr == "AverageRecall") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_averageRecall = val.value();
                }
                m_averageRecallHasBeenSet = true;
              }

              else if (initialKeyStr == "AverageAccuracy") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_averageAccuracy = val.value();
                }
                m_averageAccuracyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FlywheelModelEvaluationMetrics", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AverageF1Score") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_averageF1Score = val.value();
              }
              m_averageF1ScoreHasBeenSet = true;
            }

            else if (initialKeyStr == "AveragePrecision") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_averagePrecision = val.value();
              }
              m_averagePrecisionHasBeenSet = true;
            }

            else if (initialKeyStr == "AverageRecall") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_averageRecall = val.value();
              }
              m_averageRecallHasBeenSet = true;
            }

            else if (initialKeyStr == "AverageAccuracy") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_averageAccuracy = val.value();
              }
              m_averageAccuracyHasBeenSet = true;
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

void FlywheelModelEvaluationMetrics::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_averageF1ScoreHasBeenSet) {
    mapSize++;
  }
  if (m_averagePrecisionHasBeenSet) {
    mapSize++;
  }
  if (m_averageRecallHasBeenSet) {
    mapSize++;
  }
  if (m_averageAccuracyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_averageF1ScoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AverageF1Score"));
    encoder.WriteFloat(m_averageF1Score);
  }

  if (m_averagePrecisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AveragePrecision"));
    encoder.WriteFloat(m_averagePrecision);
  }

  if (m_averageRecallHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AverageRecall"));
    encoder.WriteFloat(m_averageRecall);
  }

  if (m_averageAccuracyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AverageAccuracy"));
    encoder.WriteFloat(m_averageAccuracy);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws