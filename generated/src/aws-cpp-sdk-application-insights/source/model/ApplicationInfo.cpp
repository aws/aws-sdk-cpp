/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ApplicationInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationInsights {
namespace Model {

ApplicationInfo::ApplicationInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ApplicationInfo& ApplicationInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AccountId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_accountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_accountId = ss.str();
                  }
                }
                m_accountIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceGroupName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceGroupName = ss.str();
                  }
                }
                m_resourceGroupNameHasBeenSet = true;
              }

              else if (initialKeyStr == "LifeCycle") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_lifeCycle = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_lifeCycle = ss.str();
                  }
                }
                m_lifeCycleHasBeenSet = true;
              }

              else if (initialKeyStr == "OpsItemSNSTopicArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_opsItemSNSTopicArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_opsItemSNSTopicArn = ss.str();
                  }
                }
                m_opsItemSNSTopicArnHasBeenSet = true;
              }

              else if (initialKeyStr == "SNSNotificationArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sNSNotificationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sNSNotificationArn = ss.str();
                  }
                }
                m_sNSNotificationArnHasBeenSet = true;
              }

              else if (initialKeyStr == "OpsCenterEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_opsCenterEnabled = val.value();
                }
                m_opsCenterEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "CWEMonitorEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_cWEMonitorEnabled = val.value();
                }
                m_cWEMonitorEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "Remarks") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_remarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_remarks = ss.str();
                  }
                }
                m_remarksHasBeenSet = true;
              }

              else if (initialKeyStr == "AutoConfigEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_autoConfigEnabled = val.value();
                }
                m_autoConfigEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "DiscoveryType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_discoveryTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "AttachMissingPermission") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_attachMissingPermission = val.value();
                }
                m_attachMissingPermissionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ApplicationInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AccountId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_accountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_accountId = ss.str();
                }
              }
              m_accountIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceGroupName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceGroupName = ss.str();
                }
              }
              m_resourceGroupNameHasBeenSet = true;
            }

            else if (initialKeyStr == "LifeCycle") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_lifeCycle = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_lifeCycle = ss.str();
                }
              }
              m_lifeCycleHasBeenSet = true;
            }

            else if (initialKeyStr == "OpsItemSNSTopicArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_opsItemSNSTopicArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_opsItemSNSTopicArn = ss.str();
                }
              }
              m_opsItemSNSTopicArnHasBeenSet = true;
            }

            else if (initialKeyStr == "SNSNotificationArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sNSNotificationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sNSNotificationArn = ss.str();
                }
              }
              m_sNSNotificationArnHasBeenSet = true;
            }

            else if (initialKeyStr == "OpsCenterEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_opsCenterEnabled = val.value();
              }
              m_opsCenterEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "CWEMonitorEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_cWEMonitorEnabled = val.value();
              }
              m_cWEMonitorEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "Remarks") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_remarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_remarks = ss.str();
                }
              }
              m_remarksHasBeenSet = true;
            }

            else if (initialKeyStr == "AutoConfigEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_autoConfigEnabled = val.value();
              }
              m_autoConfigEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "DiscoveryType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_discoveryTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "AttachMissingPermission") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_attachMissingPermission = val.value();
              }
              m_attachMissingPermissionHasBeenSet = true;
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

void ApplicationInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_resourceGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_lifeCycleHasBeenSet) {
    mapSize++;
  }
  if (m_opsItemSNSTopicArnHasBeenSet) {
    mapSize++;
  }
  if (m_sNSNotificationArnHasBeenSet) {
    mapSize++;
  }
  if (m_opsCenterEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_cWEMonitorEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_remarksHasBeenSet) {
    mapSize++;
  }
  if (m_autoConfigEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_discoveryTypeHasBeenSet) {
    mapSize++;
  }
  if (m_attachMissingPermissionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_resourceGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceGroupName.c_str()));
  }

  if (m_lifeCycleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LifeCycle"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lifeCycle.c_str()));
  }

  if (m_opsItemSNSTopicArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OpsItemSNSTopicArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_opsItemSNSTopicArn.c_str()));
  }

  if (m_sNSNotificationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SNSNotificationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sNSNotificationArn.c_str()));
  }

  if (m_opsCenterEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OpsCenterEnabled"));
    encoder.WriteBool(m_opsCenterEnabled);
  }

  if (m_cWEMonitorEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CWEMonitorEnabled"));
    encoder.WriteBool(m_cWEMonitorEnabled);
  }

  if (m_remarksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Remarks"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_remarks.c_str()));
  }

  if (m_autoConfigEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoConfigEnabled"));
    encoder.WriteBool(m_autoConfigEnabled);
  }

  if (m_discoveryTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DiscoveryType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DiscoveryTypeMapper::GetNameForDiscoveryType(m_discoveryType).c_str()));
  }

  if (m_attachMissingPermissionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttachMissingPermission"));
    encoder.WriteBool(m_attachMissingPermission);
  }
}

}  // namespace Model
}  // namespace ApplicationInsights
}  // namespace Aws