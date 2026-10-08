/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/AutoScalingSettings.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

AutoScalingSettings::AutoScalingSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AutoScalingSettings& AutoScalingSettings::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "autoScalingDisabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_autoScalingDisabled = val.value();
                }
                m_autoScalingDisabledHasBeenSet = true;
              }

              else if (initialKeyStr == "minimumUnits") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_minimumUnits = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_minimumUnits = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_minimumUnitsHasBeenSet = true;
              }

              else if (initialKeyStr == "maximumUnits") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maximumUnits = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maximumUnits = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maximumUnitsHasBeenSet = true;
              }

              else if (initialKeyStr == "scalingPolicy") {
                m_scalingPolicy = AutoScalingPolicy(decoder);
                m_scalingPolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AutoScalingSettings", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "autoScalingDisabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_autoScalingDisabled = val.value();
              }
              m_autoScalingDisabledHasBeenSet = true;
            }

            else if (initialKeyStr == "minimumUnits") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_minimumUnits = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_minimumUnits = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_minimumUnitsHasBeenSet = true;
            }

            else if (initialKeyStr == "maximumUnits") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maximumUnits = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maximumUnits = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maximumUnitsHasBeenSet = true;
            }

            else if (initialKeyStr == "scalingPolicy") {
              m_scalingPolicy = AutoScalingPolicy(decoder);
              m_scalingPolicyHasBeenSet = true;
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

void AutoScalingSettings::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_autoScalingDisabledHasBeenSet) {
    mapSize++;
  }
  if (m_minimumUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_maximumUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_scalingPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_autoScalingDisabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoScalingDisabled"));
    encoder.WriteBool(m_autoScalingDisabled);
  }

  if (m_minimumUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("minimumUnits"));
    (m_minimumUnits >= 0) ? encoder.WriteUInt(m_minimumUnits) : encoder.WriteNegInt(m_minimumUnits);
  }

  if (m_maximumUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maximumUnits"));
    (m_maximumUnits >= 0) ? encoder.WriteUInt(m_maximumUnits) : encoder.WriteNegInt(m_maximumUnits);
  }

  if (m_scalingPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scalingPolicy"));
    m_scalingPolicy.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws