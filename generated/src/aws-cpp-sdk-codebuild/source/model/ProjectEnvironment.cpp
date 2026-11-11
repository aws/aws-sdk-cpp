/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ProjectEnvironment::ProjectEnvironment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProjectEnvironment& ProjectEnvironment::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = EnvironmentTypeMapper::GetEnvironmentTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "image") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_image = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_image = ss.str();
                  }
                }
                m_imageHasBeenSet = true;
              }

              else if (initialKeyStr == "computeType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_computeType = ComputeTypeMapper::GetComputeTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_computeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "computeConfiguration") {
                m_computeConfiguration = ComputeConfiguration(decoder);
                m_computeConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "fleet") {
                m_fleet = ProjectFleet(decoder);
                m_fleetHasBeenSet = true;
              }

              else if (initialKeyStr == "environmentVariables") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_environmentVariables.push_back(EnvironmentVariable(decoder));
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
                      m_environmentVariables.push_back(EnvironmentVariable(decoder));
                    }
                  }
                }
                m_environmentVariablesHasBeenSet = true;
              }

              else if (initialKeyStr == "privilegedMode") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_privilegedMode = val.value();
                }
                m_privilegedModeHasBeenSet = true;
              }

              else if (initialKeyStr == "certificate") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_certificate = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_certificate = ss.str();
                  }
                }
                m_certificateHasBeenSet = true;
              }

              else if (initialKeyStr == "registryCredential") {
                m_registryCredential = RegistryCredential(decoder);
                m_registryCredentialHasBeenSet = true;
              }

              else if (initialKeyStr == "imagePullCredentialsType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_imagePullCredentialsType = ImagePullCredentialsTypeMapper::GetImagePullCredentialsTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_imagePullCredentialsTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "dockerServer") {
                m_dockerServer = DockerServer(decoder);
                m_dockerServerHasBeenSet = true;
              }

              else if (initialKeyStr == "hostKernel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_hostKernel =
                      HostKernelMapper::GetHostKernelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_hostKernelHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProjectEnvironment", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = EnvironmentTypeMapper::GetEnvironmentTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "image") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_image = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_image = ss.str();
                }
              }
              m_imageHasBeenSet = true;
            }

            else if (initialKeyStr == "computeType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_computeType =
                    ComputeTypeMapper::GetComputeTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_computeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "computeConfiguration") {
              m_computeConfiguration = ComputeConfiguration(decoder);
              m_computeConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "fleet") {
              m_fleet = ProjectFleet(decoder);
              m_fleetHasBeenSet = true;
            }

            else if (initialKeyStr == "environmentVariables") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_environmentVariables.push_back(EnvironmentVariable(decoder));
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
                    m_environmentVariables.push_back(EnvironmentVariable(decoder));
                  }
                }
              }
              m_environmentVariablesHasBeenSet = true;
            }

            else if (initialKeyStr == "privilegedMode") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_privilegedMode = val.value();
              }
              m_privilegedModeHasBeenSet = true;
            }

            else if (initialKeyStr == "certificate") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_certificate = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_certificate = ss.str();
                }
              }
              m_certificateHasBeenSet = true;
            }

            else if (initialKeyStr == "registryCredential") {
              m_registryCredential = RegistryCredential(decoder);
              m_registryCredentialHasBeenSet = true;
            }

            else if (initialKeyStr == "imagePullCredentialsType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_imagePullCredentialsType = ImagePullCredentialsTypeMapper::GetImagePullCredentialsTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_imagePullCredentialsTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "dockerServer") {
              m_dockerServer = DockerServer(decoder);
              m_dockerServerHasBeenSet = true;
            }

            else if (initialKeyStr == "hostKernel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_hostKernel =
                    HostKernelMapper::GetHostKernelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_hostKernelHasBeenSet = true;
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

void ProjectEnvironment::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_imageHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_computeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_fleetHasBeenSet) {
    mapSize++;
  }
  if (m_environmentVariablesHasBeenSet) {
    mapSize++;
  }
  if (m_privilegedModeHasBeenSet) {
    mapSize++;
  }
  if (m_certificateHasBeenSet) {
    mapSize++;
  }
  if (m_registryCredentialHasBeenSet) {
    mapSize++;
  }
  if (m_imagePullCredentialsTypeHasBeenSet) {
    mapSize++;
  }
  if (m_dockerServerHasBeenSet) {
    mapSize++;
  }
  if (m_hostKernelHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnvironmentTypeMapper::GetNameForEnvironmentType(m_type).c_str()));
  }

  if (m_imageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("image"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_image.c_str()));
  }

  if (m_computeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeTypeMapper::GetNameForComputeType(m_computeType).c_str()));
  }

  if (m_computeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computeConfiguration"));
    m_computeConfiguration.CborEncode(encoder);
  }

  if (m_fleetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fleet"));
    m_fleet.CborEncode(encoder);
  }

  if (m_environmentVariablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environmentVariables"));
    encoder.WriteArrayStart(m_environmentVariables.size());
    for (const auto& item_0 : m_environmentVariables) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_privilegedModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("privilegedMode"));
    encoder.WriteBool(m_privilegedMode);
  }

  if (m_certificateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("certificate"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificate.c_str()));
  }

  if (m_registryCredentialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("registryCredential"));
    m_registryCredential.CborEncode(encoder);
  }

  if (m_imagePullCredentialsTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("imagePullCredentialsType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ImagePullCredentialsTypeMapper::GetNameForImagePullCredentialsType(m_imagePullCredentialsType).c_str()));
  }

  if (m_dockerServerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("dockerServer"));
    m_dockerServer.CborEncode(encoder);
  }

  if (m_hostKernelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("hostKernel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HostKernelMapper::GetNameForHostKernel(m_hostKernel).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws