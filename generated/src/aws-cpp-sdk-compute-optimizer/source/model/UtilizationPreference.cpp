/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

UtilizationPreference::UtilizationPreference(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

UtilizationPreference& UtilizationPreference::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "metricName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_metricName = CustomizableMetricNameMapper::GetCustomizableMetricNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_metricNameHasBeenSet = true;
              }

              else if (initialKeyStr == "metricParameters") {
                m_metricParameters = CustomizableMetricParameters(decoder);
                m_metricParametersHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("UtilizationPreference", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "metricName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_metricName = CustomizableMetricNameMapper::GetCustomizableMetricNameForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_metricNameHasBeenSet = true;
            }

            else if (initialKeyStr == "metricParameters") {
              m_metricParameters = CustomizableMetricParameters(decoder);
              m_metricParametersHasBeenSet = true;
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

void UtilizationPreference::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_metricParametersHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("metricName"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CustomizableMetricNameMapper::GetNameForCustomizableMetricName(m_metricName).c_str()));
  }

  if (m_metricParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("metricParameters"));
    m_metricParameters.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws