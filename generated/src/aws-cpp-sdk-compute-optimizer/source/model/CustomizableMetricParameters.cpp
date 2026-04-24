/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CustomizableMetricParameters.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

CustomizableMetricParameters::CustomizableMetricParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CustomizableMetricParameters& CustomizableMetricParameters::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "threshold") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_threshold = CustomizableMetricThresholdMapper::GetCustomizableMetricThresholdForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_thresholdHasBeenSet = true;
              }

              else if (initialKeyStr == "headroom") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_headroom = CustomizableMetricHeadroomMapper::GetCustomizableMetricHeadroomForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_headroomHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CustomizableMetricParameters", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "threshold") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_threshold = CustomizableMetricThresholdMapper::GetCustomizableMetricThresholdForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_thresholdHasBeenSet = true;
            }

            else if (initialKeyStr == "headroom") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_headroom = CustomizableMetricHeadroomMapper::GetCustomizableMetricHeadroomForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_headroomHasBeenSet = true;
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

void CustomizableMetricParameters::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_thresholdHasBeenSet) {
    mapSize++;
  }
  if (m_headroomHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_thresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("threshold"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CustomizableMetricThresholdMapper::GetNameForCustomizableMetricThreshold(m_threshold).c_str()));
  }

  if (m_headroomHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("headroom"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CustomizableMetricHeadroomMapper::GetNameForCustomizableMetricHeadroom(m_headroom).c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws