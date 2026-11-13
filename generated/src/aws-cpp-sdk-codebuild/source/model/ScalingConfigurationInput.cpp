/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ScalingConfigurationInput.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ScalingConfigurationInput::ScalingConfigurationInput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ScalingConfigurationInput& ScalingConfigurationInput::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "scalingType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_scalingType = FleetScalingTypeMapper::GetFleetScalingTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_scalingTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "targetTrackingScalingConfigs") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_targetTrackingScalingConfigs.push_back(TargetTrackingScalingConfiguration(decoder));
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
                      m_targetTrackingScalingConfigs.push_back(TargetTrackingScalingConfiguration(decoder));
                    }
                  }
                }
                m_targetTrackingScalingConfigsHasBeenSet = true;
              }

              else if (initialKeyStr == "maxCapacity") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxCapacity = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxCapacity = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxCapacityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ScalingConfigurationInput", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "scalingType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_scalingType = FleetScalingTypeMapper::GetFleetScalingTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_scalingTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "targetTrackingScalingConfigs") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_targetTrackingScalingConfigs.push_back(TargetTrackingScalingConfiguration(decoder));
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
                    m_targetTrackingScalingConfigs.push_back(TargetTrackingScalingConfiguration(decoder));
                  }
                }
              }
              m_targetTrackingScalingConfigsHasBeenSet = true;
            }

            else if (initialKeyStr == "maxCapacity") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxCapacity = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxCapacity = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxCapacityHasBeenSet = true;
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

void ScalingConfigurationInput::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_scalingTypeHasBeenSet) {
    mapSize++;
  }
  if (m_targetTrackingScalingConfigsHasBeenSet) {
    mapSize++;
  }
  if (m_maxCapacityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_scalingTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scalingType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FleetScalingTypeMapper::GetNameForFleetScalingType(m_scalingType).c_str()));
  }

  if (m_targetTrackingScalingConfigsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetTrackingScalingConfigs"));
    encoder.WriteArrayStart(m_targetTrackingScalingConfigs.size());
    for (const auto& item_0 : m_targetTrackingScalingConfigs) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_maxCapacityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxCapacity"));
    (m_maxCapacity >= 0) ? encoder.WriteUInt(m_maxCapacity) : encoder.WriteNegInt(m_maxCapacity);
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws