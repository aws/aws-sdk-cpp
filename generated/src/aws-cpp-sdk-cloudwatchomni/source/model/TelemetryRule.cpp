/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/TelemetryRule.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

TelemetryRule::TelemetryRule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TelemetryRule& TelemetryRule::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "query") {
                m_query = AlertRuleQuery(decoder);
                m_queryHasBeenSet = true;
              }

              else if (initialKeyStr == "condition") {
                m_condition = AlertCondition(decoder);
                m_conditionHasBeenSet = true;
              }

              else if (initialKeyStr == "evaluation") {
                m_evaluation = AlertEvaluation(decoder);
                m_evaluationHasBeenSet = true;
              }

              else if (initialKeyStr == "noData") {
                m_noData = NoData(decoder);
                m_noDataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TelemetryRule", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "query") {
              m_query = AlertRuleQuery(decoder);
              m_queryHasBeenSet = true;
            }

            else if (initialKeyStr == "condition") {
              m_condition = AlertCondition(decoder);
              m_conditionHasBeenSet = true;
            }

            else if (initialKeyStr == "evaluation") {
              m_evaluation = AlertEvaluation(decoder);
              m_evaluationHasBeenSet = true;
            }

            else if (initialKeyStr == "noData") {
              m_noData = NoData(decoder);
              m_noDataHasBeenSet = true;
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

void TelemetryRule::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_queryHasBeenSet) {
    mapSize++;
  }
  if (m_conditionHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationHasBeenSet) {
    mapSize++;
  }
  if (m_noDataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_queryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("query"));
    m_query.CborEncode(encoder);
  }

  if (m_conditionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("condition"));
    m_condition.CborEncode(encoder);
  }

  if (m_evaluationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("evaluation"));
    m_evaluation.CborEncode(encoder);
  }

  if (m_noDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("noData"));
    m_noData.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws