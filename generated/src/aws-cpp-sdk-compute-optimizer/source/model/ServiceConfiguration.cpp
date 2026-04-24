/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ServiceConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

ServiceConfiguration::ServiceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ServiceConfiguration& ServiceConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "memory") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_memory = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_memory = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_memoryHasBeenSet = true;
              }

              else if (initialKeyStr == "cpu") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_cpu = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_cpu = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_cpuHasBeenSet = true;
              }

              else if (initialKeyStr == "containerConfigurations") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_containerConfigurations.push_back(ContainerConfiguration(decoder));
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
                      m_containerConfigurations.push_back(ContainerConfiguration(decoder));
                    }
                  }
                }
                m_containerConfigurationsHasBeenSet = true;
              }

              else if (initialKeyStr == "autoScalingConfiguration") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_autoScalingConfiguration = AutoScalingConfigurationMapper::GetAutoScalingConfigurationForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_autoScalingConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "taskDefinitionArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_taskDefinitionArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_taskDefinitionArn = ss.str();
                  }
                }
                m_taskDefinitionArnHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ServiceConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "memory") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_memory = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_memory = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_memoryHasBeenSet = true;
            }

            else if (initialKeyStr == "cpu") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_cpu = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_cpu = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_cpuHasBeenSet = true;
            }

            else if (initialKeyStr == "containerConfigurations") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_containerConfigurations.push_back(ContainerConfiguration(decoder));
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
                    m_containerConfigurations.push_back(ContainerConfiguration(decoder));
                  }
                }
              }
              m_containerConfigurationsHasBeenSet = true;
            }

            else if (initialKeyStr == "autoScalingConfiguration") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_autoScalingConfiguration = AutoScalingConfigurationMapper::GetAutoScalingConfigurationForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_autoScalingConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "taskDefinitionArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_taskDefinitionArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_taskDefinitionArn = ss.str();
                }
              }
              m_taskDefinitionArnHasBeenSet = true;
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

void ServiceConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_memoryHasBeenSet) {
    mapSize++;
  }
  if (m_cpuHasBeenSet) {
    mapSize++;
  }
  if (m_containerConfigurationsHasBeenSet) {
    mapSize++;
  }
  if (m_autoScalingConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_taskDefinitionArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_memoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("memory"));
    (m_memory >= 0) ? encoder.WriteUInt(m_memory) : encoder.WriteNegInt(m_memory);
  }

  if (m_cpuHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cpu"));
    (m_cpu >= 0) ? encoder.WriteUInt(m_cpu) : encoder.WriteNegInt(m_cpu);
  }

  if (m_containerConfigurationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("containerConfigurations"));
    encoder.WriteArrayStart(m_containerConfigurations.size());
    for (const auto& item_0 : m_containerConfigurations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_autoScalingConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoScalingConfiguration"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        AutoScalingConfigurationMapper::GetNameForAutoScalingConfiguration(m_autoScalingConfiguration).c_str()));
  }

  if (m_taskDefinitionArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("taskDefinitionArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_taskDefinitionArn.c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws