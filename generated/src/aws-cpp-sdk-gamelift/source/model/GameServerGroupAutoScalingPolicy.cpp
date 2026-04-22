/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/GameServerGroupAutoScalingPolicy.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

GameServerGroupAutoScalingPolicy::GameServerGroupAutoScalingPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

GameServerGroupAutoScalingPolicy& GameServerGroupAutoScalingPolicy::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "EstimatedInstanceWarmup") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_estimatedInstanceWarmup = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_estimatedInstanceWarmup = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_estimatedInstanceWarmupHasBeenSet = true;
              }

              else if (initialKeyStr == "TargetTrackingConfiguration") {
                m_targetTrackingConfiguration = TargetTrackingConfiguration(decoder);
                m_targetTrackingConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("GameServerGroupAutoScalingPolicy", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "EstimatedInstanceWarmup") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_estimatedInstanceWarmup = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_estimatedInstanceWarmup = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_estimatedInstanceWarmupHasBeenSet = true;
            }

            else if (initialKeyStr == "TargetTrackingConfiguration") {
              m_targetTrackingConfiguration = TargetTrackingConfiguration(decoder);
              m_targetTrackingConfigurationHasBeenSet = true;
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

void GameServerGroupAutoScalingPolicy::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_estimatedInstanceWarmupHasBeenSet) {
    mapSize++;
  }
  if (m_targetTrackingConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_estimatedInstanceWarmupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EstimatedInstanceWarmup"));
    (m_estimatedInstanceWarmup >= 0) ? encoder.WriteUInt(m_estimatedInstanceWarmup) : encoder.WriteNegInt(m_estimatedInstanceWarmup);
  }

  if (m_targetTrackingConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetTrackingConfiguration"));
    m_targetTrackingConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws