/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CurrentPerformanceRiskRatings.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

CurrentPerformanceRiskRatings::CurrentPerformanceRiskRatings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

CurrentPerformanceRiskRatings& CurrentPerformanceRiskRatings::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "high") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_high = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_high = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_highHasBeenSet = true;
              }

              else if (initialKeyStr == "medium") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_medium = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_medium = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_mediumHasBeenSet = true;
              }

              else if (initialKeyStr == "low") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_low = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_low = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_lowHasBeenSet = true;
              }

              else if (initialKeyStr == "veryLow") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_veryLow = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_veryLow = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_veryLowHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CurrentPerformanceRiskRatings", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "high") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_high = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_high = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_highHasBeenSet = true;
            }

            else if (initialKeyStr == "medium") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_medium = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_medium = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_mediumHasBeenSet = true;
            }

            else if (initialKeyStr == "low") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_low = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_low = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_lowHasBeenSet = true;
            }

            else if (initialKeyStr == "veryLow") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_veryLow = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_veryLow = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_veryLowHasBeenSet = true;
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

void CurrentPerformanceRiskRatings::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_highHasBeenSet) {
    mapSize++;
  }
  if (m_mediumHasBeenSet) {
    mapSize++;
  }
  if (m_lowHasBeenSet) {
    mapSize++;
  }
  if (m_veryLowHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_highHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("high"));
    (m_high >= 0) ? encoder.WriteUInt(m_high) : encoder.WriteNegInt(m_high);
  }

  if (m_mediumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("medium"));
    (m_medium >= 0) ? encoder.WriteUInt(m_medium) : encoder.WriteNegInt(m_medium);
  }

  if (m_lowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("low"));
    (m_low >= 0) ? encoder.WriteUInt(m_low) : encoder.WriteNegInt(m_low);
  }

  if (m_veryLowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("veryLow"));
    (m_veryLow >= 0) ? encoder.WriteUInt(m_veryLow) : encoder.WriteNegInt(m_veryLow);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws