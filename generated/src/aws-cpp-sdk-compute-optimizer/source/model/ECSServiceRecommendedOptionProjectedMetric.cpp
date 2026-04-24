/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendedOptionProjectedMetric.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

ECSServiceRecommendedOptionProjectedMetric::ECSServiceRecommendedOptionProjectedMetric(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

ECSServiceRecommendedOptionProjectedMetric& ECSServiceRecommendedOptionProjectedMetric::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "recommendedCpuUnits") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recommendedCpuUnits = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recommendedCpuUnits = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recommendedCpuUnitsHasBeenSet = true;
              }

              else if (initialKeyStr == "recommendedMemorySize") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recommendedMemorySize = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recommendedMemorySize = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recommendedMemorySizeHasBeenSet = true;
              }

              else if (initialKeyStr == "projectedMetrics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_projectedMetrics.push_back(ECSServiceProjectedMetric(decoder));
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
                      m_projectedMetrics.push_back(ECSServiceProjectedMetric(decoder));
                    }
                  }
                }
                m_projectedMetricsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ECSServiceRecommendedOptionProjectedMetric", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "recommendedCpuUnits") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recommendedCpuUnits = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recommendedCpuUnits = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recommendedCpuUnitsHasBeenSet = true;
            }

            else if (initialKeyStr == "recommendedMemorySize") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recommendedMemorySize = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recommendedMemorySize = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recommendedMemorySizeHasBeenSet = true;
            }

            else if (initialKeyStr == "projectedMetrics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_projectedMetrics.push_back(ECSServiceProjectedMetric(decoder));
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
                    m_projectedMetrics.push_back(ECSServiceProjectedMetric(decoder));
                  }
                }
              }
              m_projectedMetricsHasBeenSet = true;
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

void ECSServiceRecommendedOptionProjectedMetric::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_recommendedCpuUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_recommendedMemorySizeHasBeenSet) {
    mapSize++;
  }
  if (m_projectedMetricsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_recommendedCpuUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendedCpuUnits"));
    (m_recommendedCpuUnits >= 0) ? encoder.WriteUInt(m_recommendedCpuUnits) : encoder.WriteNegInt(m_recommendedCpuUnits);
  }

  if (m_recommendedMemorySizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendedMemorySize"));
    (m_recommendedMemorySize >= 0) ? encoder.WriteUInt(m_recommendedMemorySize) : encoder.WriteNegInt(m_recommendedMemorySize);
  }

  if (m_projectedMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectedMetrics"));
    encoder.WriteArrayStart(m_projectedMetrics.size());
    for (const auto& item_0 : m_projectedMetrics) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws