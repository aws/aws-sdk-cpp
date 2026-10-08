/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/TargetTrackingScalingPolicyConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

TargetTrackingScalingPolicyConfiguration& TargetTrackingScalingPolicyConfiguration::operator=(
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

              if (initialKeyStr == "disableScaleIn") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_disableScaleIn = val.value();
                }
                m_disableScaleInHasBeenSet = true;
              }

              else if (initialKeyStr == "scaleInCooldown") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_scaleInCooldown = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_scaleInCooldown = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_scaleInCooldownHasBeenSet = true;
              }

              else if (initialKeyStr == "scaleOutCooldown") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_scaleOutCooldown = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_scaleOutCooldown = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_scaleOutCooldownHasBeenSet = true;
              }

              else if (initialKeyStr == "targetValue") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_targetValue = val.value();
                }
                m_targetValueHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TargetTrackingScalingPolicyConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "disableScaleIn") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_disableScaleIn = val.value();
              }
              m_disableScaleInHasBeenSet = true;
            }

            else if (initialKeyStr == "scaleInCooldown") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_scaleInCooldown = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_scaleInCooldown = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_scaleInCooldownHasBeenSet = true;
            }

            else if (initialKeyStr == "scaleOutCooldown") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_scaleOutCooldown = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_scaleOutCooldown = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_scaleOutCooldownHasBeenSet = true;
            }

            else if (initialKeyStr == "targetValue") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_targetValue = val.value();
              }
              m_targetValueHasBeenSet = true;
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

void TargetTrackingScalingPolicyConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_disableScaleInHasBeenSet) {
    mapSize++;
  }
  if (m_scaleInCooldownHasBeenSet) {
    mapSize++;
  }
  if (m_scaleOutCooldownHasBeenSet) {
    mapSize++;
  }
  if (m_targetValueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_disableScaleInHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("disableScaleIn"));
    encoder.WriteBool(m_disableScaleIn);
  }

  if (m_scaleInCooldownHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scaleInCooldown"));
    (m_scaleInCooldown >= 0) ? encoder.WriteUInt(m_scaleInCooldown) : encoder.WriteNegInt(m_scaleInCooldown);
  }

  if (m_scaleOutCooldownHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scaleOutCooldown"));
    (m_scaleOutCooldown >= 0) ? encoder.WriteUInt(m_scaleOutCooldown) : encoder.WriteNegInt(m_scaleOutCooldown);
  }

  if (m_targetValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetValue"));
    encoder.WriteFloat(m_targetValue);
  }
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws