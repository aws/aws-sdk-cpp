/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/DeploymentConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

DeploymentConfiguration::DeploymentConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentConfiguration& DeploymentConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ProtectionStrategy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_protectionStrategy = DeploymentProtectionStrategyMapper::GetDeploymentProtectionStrategyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_protectionStrategyHasBeenSet = true;
              }

              else if (initialKeyStr == "MinimumHealthyPercentage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_minimumHealthyPercentage = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_minimumHealthyPercentage = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_minimumHealthyPercentageHasBeenSet = true;
              }

              else if (initialKeyStr == "ImpairmentStrategy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_impairmentStrategy = DeploymentImpairmentStrategyMapper::GetDeploymentImpairmentStrategyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_impairmentStrategyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ProtectionStrategy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_protectionStrategy = DeploymentProtectionStrategyMapper::GetDeploymentProtectionStrategyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_protectionStrategyHasBeenSet = true;
            }

            else if (initialKeyStr == "MinimumHealthyPercentage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_minimumHealthyPercentage = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_minimumHealthyPercentage = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_minimumHealthyPercentageHasBeenSet = true;
            }

            else if (initialKeyStr == "ImpairmentStrategy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_impairmentStrategy = DeploymentImpairmentStrategyMapper::GetDeploymentImpairmentStrategyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_impairmentStrategyHasBeenSet = true;
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

void DeploymentConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_protectionStrategyHasBeenSet) {
    mapSize++;
  }
  if (m_minimumHealthyPercentageHasBeenSet) {
    mapSize++;
  }
  if (m_impairmentStrategyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_protectionStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DeploymentProtectionStrategyMapper::GetNameForDeploymentProtectionStrategy(m_protectionStrategy).c_str()));
  }

  if (m_minimumHealthyPercentageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MinimumHealthyPercentage"));
    (m_minimumHealthyPercentage >= 0) ? encoder.WriteUInt(m_minimumHealthyPercentage) : encoder.WriteNegInt(m_minimumHealthyPercentage);
  }

  if (m_impairmentStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImpairmentStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DeploymentImpairmentStrategyMapper::GetNameForDeploymentImpairmentStrategy(m_impairmentStrategy).c_str()));
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws