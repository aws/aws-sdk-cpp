/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/SupportContainerDefinition.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

SupportContainerDefinition::SupportContainerDefinition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SupportContainerDefinition& SupportContainerDefinition::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ContainerName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_containerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_containerName = ss.str();
                  }
                }
                m_containerNameHasBeenSet = true;
              }

              else if (initialKeyStr == "DependsOn") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_dependsOn.push_back(ContainerDependency(decoder));
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
                      m_dependsOn.push_back(ContainerDependency(decoder));
                    }
                  }
                }
                m_dependsOnHasBeenSet = true;
              }

              else if (initialKeyStr == "MountPoints") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_mountPoints.push_back(ContainerMountPoint(decoder));
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
                      m_mountPoints.push_back(ContainerMountPoint(decoder));
                    }
                  }
                }
                m_mountPointsHasBeenSet = true;
              }

              else if (initialKeyStr == "EnvironmentOverride") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_environmentOverride.push_back(ContainerEnvironment(decoder));
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
                      m_environmentOverride.push_back(ContainerEnvironment(decoder));
                    }
                  }
                }
                m_environmentOverrideHasBeenSet = true;
              }

              else if (initialKeyStr == "Essential") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_essential = val.value();
                }
                m_essentialHasBeenSet = true;
              }

              else if (initialKeyStr == "HealthCheck") {
                m_healthCheck = ContainerHealthCheck(decoder);
                m_healthCheckHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageUri") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_imageUri = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_imageUri = ss.str();
                  }
                }
                m_imageUriHasBeenSet = true;
              }

              else if (initialKeyStr == "MemoryHardLimitMebibytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_memoryHardLimitMebibytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_memoryHardLimitMebibytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_memoryHardLimitMebibytesHasBeenSet = true;
              }

              else if (initialKeyStr == "PortConfiguration") {
                m_portConfiguration = ContainerPortConfiguration(decoder);
                m_portConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "ResolvedImageDigest") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resolvedImageDigest = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resolvedImageDigest = ss.str();
                  }
                }
                m_resolvedImageDigestHasBeenSet = true;
              }

              else if (initialKeyStr == "Vcpu") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_vcpu = val.value();
                }
                m_vcpuHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SupportContainerDefinition", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ContainerName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_containerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_containerName = ss.str();
                }
              }
              m_containerNameHasBeenSet = true;
            }

            else if (initialKeyStr == "DependsOn") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_dependsOn.push_back(ContainerDependency(decoder));
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
                    m_dependsOn.push_back(ContainerDependency(decoder));
                  }
                }
              }
              m_dependsOnHasBeenSet = true;
            }

            else if (initialKeyStr == "MountPoints") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_mountPoints.push_back(ContainerMountPoint(decoder));
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
                    m_mountPoints.push_back(ContainerMountPoint(decoder));
                  }
                }
              }
              m_mountPointsHasBeenSet = true;
            }

            else if (initialKeyStr == "EnvironmentOverride") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_environmentOverride.push_back(ContainerEnvironment(decoder));
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
                    m_environmentOverride.push_back(ContainerEnvironment(decoder));
                  }
                }
              }
              m_environmentOverrideHasBeenSet = true;
            }

            else if (initialKeyStr == "Essential") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_essential = val.value();
              }
              m_essentialHasBeenSet = true;
            }

            else if (initialKeyStr == "HealthCheck") {
              m_healthCheck = ContainerHealthCheck(decoder);
              m_healthCheckHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageUri") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_imageUri = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_imageUri = ss.str();
                }
              }
              m_imageUriHasBeenSet = true;
            }

            else if (initialKeyStr == "MemoryHardLimitMebibytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_memoryHardLimitMebibytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_memoryHardLimitMebibytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_memoryHardLimitMebibytesHasBeenSet = true;
            }

            else if (initialKeyStr == "PortConfiguration") {
              m_portConfiguration = ContainerPortConfiguration(decoder);
              m_portConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "ResolvedImageDigest") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resolvedImageDigest = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resolvedImageDigest = ss.str();
                }
              }
              m_resolvedImageDigestHasBeenSet = true;
            }

            else if (initialKeyStr == "Vcpu") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_vcpu = val.value();
              }
              m_vcpuHasBeenSet = true;
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

void SupportContainerDefinition::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_containerNameHasBeenSet) {
    mapSize++;
  }
  if (m_dependsOnHasBeenSet) {
    mapSize++;
  }
  if (m_mountPointsHasBeenSet) {
    mapSize++;
  }
  if (m_environmentOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_essentialHasBeenSet) {
    mapSize++;
  }
  if (m_healthCheckHasBeenSet) {
    mapSize++;
  }
  if (m_imageUriHasBeenSet) {
    mapSize++;
  }
  if (m_memoryHardLimitMebibytesHasBeenSet) {
    mapSize++;
  }
  if (m_portConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_resolvedImageDigestHasBeenSet) {
    mapSize++;
  }
  if (m_vcpuHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_containerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_containerName.c_str()));
  }

  if (m_dependsOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DependsOn"));
    encoder.WriteArrayStart(m_dependsOn.size());
    for (const auto& item_0 : m_dependsOn) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_mountPointsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MountPoints"));
    encoder.WriteArrayStart(m_mountPoints.size());
    for (const auto& item_0 : m_mountPoints) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_environmentOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnvironmentOverride"));
    encoder.WriteArrayStart(m_environmentOverride.size());
    for (const auto& item_0 : m_environmentOverride) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_essentialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Essential"));
    encoder.WriteBool(m_essential);
  }

  if (m_healthCheckHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HealthCheck"));
    m_healthCheck.CborEncode(encoder);
  }

  if (m_imageUriHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageUri"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageUri.c_str()));
  }

  if (m_memoryHardLimitMebibytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MemoryHardLimitMebibytes"));
    (m_memoryHardLimitMebibytes >= 0) ? encoder.WriteUInt(m_memoryHardLimitMebibytes) : encoder.WriteNegInt(m_memoryHardLimitMebibytes);
  }

  if (m_portConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PortConfiguration"));
    m_portConfiguration.CborEncode(encoder);
  }

  if (m_resolvedImageDigestHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResolvedImageDigest"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resolvedImageDigest.c_str()));
  }

  if (m_vcpuHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Vcpu"));
    encoder.WriteFloat(m_vcpu);
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws