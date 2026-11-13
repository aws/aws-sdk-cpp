/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentConfigInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentConfigInfo::DeploymentConfigInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentConfigInfo& DeploymentConfigInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "deploymentConfigId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentConfigId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentConfigId = ss.str();
                  }
                }
                m_deploymentConfigIdHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentConfigName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentConfigName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentConfigName = ss.str();
                  }
                }
                m_deploymentConfigNameHasBeenSet = true;
              }

              else if (initialKeyStr == "minimumHealthyHosts") {
                m_minimumHealthyHosts = MinimumHealthyHosts(decoder);
                m_minimumHealthyHostsHasBeenSet = true;
              }

              else if (initialKeyStr == "createTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "computePlatform") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_computePlatformHasBeenSet = true;
              }

              else if (initialKeyStr == "trafficRoutingConfig") {
                m_trafficRoutingConfig = TrafficRoutingConfig(decoder);
                m_trafficRoutingConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "zonalConfig") {
                m_zonalConfig = ZonalConfig(decoder);
                m_zonalConfigHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentConfigInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "deploymentConfigId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentConfigId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentConfigId = ss.str();
                }
              }
              m_deploymentConfigIdHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentConfigName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentConfigName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentConfigName = ss.str();
                }
              }
              m_deploymentConfigNameHasBeenSet = true;
            }

            else if (initialKeyStr == "minimumHealthyHosts") {
              m_minimumHealthyHosts = MinimumHealthyHosts(decoder);
              m_minimumHealthyHostsHasBeenSet = true;
            }

            else if (initialKeyStr == "createTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "computePlatform") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_computePlatformHasBeenSet = true;
            }

            else if (initialKeyStr == "trafficRoutingConfig") {
              m_trafficRoutingConfig = TrafficRoutingConfig(decoder);
              m_trafficRoutingConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "zonalConfig") {
              m_zonalConfig = ZonalConfig(decoder);
              m_zonalConfigHasBeenSet = true;
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

void DeploymentConfigInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_deploymentConfigIdHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentConfigNameHasBeenSet) {
    mapSize++;
  }
  if (m_minimumHealthyHostsHasBeenSet) {
    mapSize++;
  }
  if (m_createTimeHasBeenSet) {
    mapSize++;
  }
  if (m_computePlatformHasBeenSet) {
    mapSize++;
  }
  if (m_trafficRoutingConfigHasBeenSet) {
    mapSize++;
  }
  if (m_zonalConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deploymentConfigIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigId.c_str()));
  }

  if (m_deploymentConfigNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigName.c_str()));
  }

  if (m_minimumHealthyHostsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("minimumHealthyHosts"));
    m_minimumHealthyHosts.CborEncode(encoder);
  }

  if (m_createTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("createTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createTime.Seconds());
  }

  if (m_computePlatformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computePlatform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform).c_str()));
  }

  if (m_trafficRoutingConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("trafficRoutingConfig"));
    m_trafficRoutingConfig.CborEncode(encoder);
  }

  if (m_zonalConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("zonalConfig"));
    m_zonalConfig.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws