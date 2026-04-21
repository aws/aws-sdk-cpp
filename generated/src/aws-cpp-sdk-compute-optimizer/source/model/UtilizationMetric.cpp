/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

UtilizationMetric::UtilizationMetric(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

UtilizationMetric& UtilizationMetric::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "name") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_name =
                      MetricNameMapper::GetMetricNameForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "statistic") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_statistic = MetricStatisticMapper::GetMetricStatisticForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statisticHasBeenSet = true;
              }

              else if (initialKeyStr == "value") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_value = val.value();
                }
                m_valueHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("UtilizationMetric", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "name") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_name =
                    MetricNameMapper::GetMetricNameForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "statistic") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_statistic = MetricStatisticMapper::GetMetricStatisticForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statisticHasBeenSet = true;
            }

            else if (initialKeyStr == "value") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_value = val.value();
              }
              m_valueHasBeenSet = true;
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

void UtilizationMetric::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_statisticHasBeenSet) {
    mapSize++;
  }
  if (m_valueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MetricNameMapper::GetNameForMetricName(m_name).c_str()));
  }

  if (m_statisticHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("statistic"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MetricStatisticMapper::GetNameForMetricStatistic(m_statistic).c_str()));
  }

  if (m_valueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("value"));
    encoder.WriteFloat(m_value);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws