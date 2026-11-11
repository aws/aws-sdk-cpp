/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/DirectoryDescription.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

DirectoryDescription::DirectoryDescription(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DirectoryDescription& DirectoryDescription::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DirectoryId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directoryId = ss.str();
                  }
                }
                m_directoryIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "ShortName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_shortName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_shortName = ss.str();
                  }
                }
                m_shortNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Size") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_size = DirectorySizeMapper::GetDirectorySizeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_sizeHasBeenSet = true;
              }

              else if (initialKeyStr == "Edition") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_edition = DirectoryEditionMapper::GetDirectoryEditionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_editionHasBeenSet = true;
              }

              else if (initialKeyStr == "Alias") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_alias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_alias = ss.str();
                  }
                }
                m_aliasHasBeenSet = true;
              }

              else if (initialKeyStr == "AccessUrl") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_accessUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_accessUrl = ss.str();
                  }
                }
                m_accessUrlHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsIpAddrs") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_dnsIpAddrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_dnsIpAddrs.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
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
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_dnsIpAddrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_dnsIpAddrs.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_dnsIpAddrsHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsIpv6Addrs") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_dnsIpv6Addrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_dnsIpv6Addrs.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
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
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_dnsIpv6Addrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_dnsIpv6Addrs.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_dnsIpv6AddrsHasBeenSet = true;
              }

              else if (initialKeyStr == "Stage") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_stage = DirectoryStageMapper::GetDirectoryStageForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stageHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_shareStatus = ShareStatusMapper::GetShareStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_shareStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareMethod") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_shareMethod = ShareMethodMapper::GetShareMethodForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_shareMethodHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareNotes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_shareNotes = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_shareNotes = ss.str();
                  }
                }
                m_shareNotesHasBeenSet = true;
              }

              else if (initialKeyStr == "LaunchTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_launchTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_launchTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_launchTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "StageLastUpdatedDateTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_stageLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_stageLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_stageLastUpdatedDateTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = DirectoryTypeMapper::GetDirectoryTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "VpcSettings") {
                m_vpcSettings = DirectoryVpcSettingsDescription(decoder);
                m_vpcSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectSettings") {
                m_connectSettings = DirectoryConnectSettingsDescription(decoder);
                m_connectSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "RadiusSettings") {
                m_radiusSettings = RadiusSettings(decoder);
                m_radiusSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "RadiusStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_radiusStatus = RadiusStatusMapper::GetRadiusStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_radiusStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "StageReason") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stageReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stageReason = ss.str();
                  }
                }
                m_stageReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "SsoEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_ssoEnabled = val.value();
                }
                m_ssoEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "DesiredNumberOfDomainControllers") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_desiredNumberOfDomainControllers = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_desiredNumberOfDomainControllers = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_desiredNumberOfDomainControllersHasBeenSet = true;
              }

              else if (initialKeyStr == "OwnerDirectoryDescription") {
                m_ownerDirectoryDescription = OwnerDirectoryDescription(decoder);
                m_ownerDirectoryDescriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "RegionsInfo") {
                m_regionsInfo = RegionsInfo(decoder);
                m_regionsInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "OsVersion") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_osVersion =
                      OSVersionMapper::GetOSVersionForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_osVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "HybridSettings") {
                m_hybridSettings = HybridSettingsDescription(decoder);
                m_hybridSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_networkType = NetworkTypeMapper::GetNetworkTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_networkTypeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DirectoryDescription", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DirectoryId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directoryId = ss.str();
                }
              }
              m_directoryIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "ShortName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_shortName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_shortName = ss.str();
                }
              }
              m_shortNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Size") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_size = DirectorySizeMapper::GetDirectorySizeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_sizeHasBeenSet = true;
            }

            else if (initialKeyStr == "Edition") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_edition = DirectoryEditionMapper::GetDirectoryEditionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_editionHasBeenSet = true;
            }

            else if (initialKeyStr == "Alias") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_alias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_alias = ss.str();
                }
              }
              m_aliasHasBeenSet = true;
            }

            else if (initialKeyStr == "AccessUrl") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_accessUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_accessUrl = ss.str();
                }
              }
              m_accessUrlHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsIpAddrs") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_dnsIpAddrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_dnsIpAddrs.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
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
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_dnsIpAddrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_dnsIpAddrs.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_dnsIpAddrsHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsIpv6Addrs") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_dnsIpv6Addrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_dnsIpv6Addrs.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
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
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_dnsIpv6Addrs.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_dnsIpv6Addrs.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_dnsIpv6AddrsHasBeenSet = true;
            }

            else if (initialKeyStr == "Stage") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_stage = DirectoryStageMapper::GetDirectoryStageForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stageHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_shareStatus =
                    ShareStatusMapper::GetShareStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_shareStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareMethod") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_shareMethod =
                    ShareMethodMapper::GetShareMethodForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_shareMethodHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareNotes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_shareNotes = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_shareNotes = ss.str();
                }
              }
              m_shareNotesHasBeenSet = true;
            }

            else if (initialKeyStr == "LaunchTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_launchTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_launchTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_launchTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "StageLastUpdatedDateTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_stageLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_stageLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_stageLastUpdatedDateTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = DirectoryTypeMapper::GetDirectoryTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "VpcSettings") {
              m_vpcSettings = DirectoryVpcSettingsDescription(decoder);
              m_vpcSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectSettings") {
              m_connectSettings = DirectoryConnectSettingsDescription(decoder);
              m_connectSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "RadiusSettings") {
              m_radiusSettings = RadiusSettings(decoder);
              m_radiusSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "RadiusStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_radiusStatus = RadiusStatusMapper::GetRadiusStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_radiusStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "StageReason") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stageReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stageReason = ss.str();
                }
              }
              m_stageReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "SsoEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_ssoEnabled = val.value();
              }
              m_ssoEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "DesiredNumberOfDomainControllers") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_desiredNumberOfDomainControllers = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_desiredNumberOfDomainControllers = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_desiredNumberOfDomainControllersHasBeenSet = true;
            }

            else if (initialKeyStr == "OwnerDirectoryDescription") {
              m_ownerDirectoryDescription = OwnerDirectoryDescription(decoder);
              m_ownerDirectoryDescriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "RegionsInfo") {
              m_regionsInfo = RegionsInfo(decoder);
              m_regionsInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "OsVersion") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_osVersion =
                    OSVersionMapper::GetOSVersionForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_osVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "HybridSettings") {
              m_hybridSettings = HybridSettingsDescription(decoder);
              m_hybridSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_networkType =
                    NetworkTypeMapper::GetNetworkTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_networkTypeHasBeenSet = true;
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

void DirectoryDescription::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_shortNameHasBeenSet) {
    mapSize++;
  }
  if (m_sizeHasBeenSet) {
    mapSize++;
  }
  if (m_editionHasBeenSet) {
    mapSize++;
  }
  if (m_aliasHasBeenSet) {
    mapSize++;
  }
  if (m_accessUrlHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpAddrsHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpv6AddrsHasBeenSet) {
    mapSize++;
  }
  if (m_stageHasBeenSet) {
    mapSize++;
  }
  if (m_shareStatusHasBeenSet) {
    mapSize++;
  }
  if (m_shareMethodHasBeenSet) {
    mapSize++;
  }
  if (m_shareNotesHasBeenSet) {
    mapSize++;
  }
  if (m_launchTimeHasBeenSet) {
    mapSize++;
  }
  if (m_stageLastUpdatedDateTimeHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_vpcSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_connectSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_radiusSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_radiusStatusHasBeenSet) {
    mapSize++;
  }
  if (m_stageReasonHasBeenSet) {
    mapSize++;
  }
  if (m_ssoEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_desiredNumberOfDomainControllersHasBeenSet) {
    mapSize++;
  }
  if (m_ownerDirectoryDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_regionsInfoHasBeenSet) {
    mapSize++;
  }
  if (m_osVersionHasBeenSet) {
    mapSize++;
  }
  if (m_hybridSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_networkTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_shortNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShortName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_shortName.c_str()));
  }

  if (m_sizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Size"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DirectorySizeMapper::GetNameForDirectorySize(m_size).c_str()));
  }

  if (m_editionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Edition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DirectoryEditionMapper::GetNameForDirectoryEdition(m_edition).c_str()));
  }

  if (m_aliasHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Alias"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alias.c_str()));
  }

  if (m_accessUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accessUrl.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_dnsIpAddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpAddrs"));
    encoder.WriteArrayStart(m_dnsIpAddrs.size());
    for (const auto& item_0 : m_dnsIpAddrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_dnsIpv6AddrsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpv6Addrs"));
    encoder.WriteArrayStart(m_dnsIpv6Addrs.size());
    for (const auto& item_0 : m_dnsIpv6Addrs) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_stageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Stage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DirectoryStageMapper::GetNameForDirectoryStage(m_stage).c_str()));
  }

  if (m_shareStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShareStatusMapper::GetNameForShareStatus(m_shareStatus).c_str()));
  }

  if (m_shareMethodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareMethod"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShareMethodMapper::GetNameForShareMethod(m_shareMethod).c_str()));
  }

  if (m_shareNotesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareNotes"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_shareNotes.c_str()));
  }

  if (m_launchTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LaunchTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_launchTime.Seconds());
  }

  if (m_stageLastUpdatedDateTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StageLastUpdatedDateTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_stageLastUpdatedDateTime.Seconds());
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DirectoryTypeMapper::GetNameForDirectoryType(m_type).c_str()));
  }

  if (m_vpcSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcSettings"));
    m_vpcSettings.CborEncode(encoder);
  }

  if (m_connectSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectSettings"));
    m_connectSettings.CborEncode(encoder);
  }

  if (m_radiusSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RadiusSettings"));
    m_radiusSettings.CborEncode(encoder);
  }

  if (m_radiusStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RadiusStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RadiusStatusMapper::GetNameForRadiusStatus(m_radiusStatus).c_str()));
  }

  if (m_stageReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StageReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stageReason.c_str()));
  }

  if (m_ssoEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SsoEnabled"));
    encoder.WriteBool(m_ssoEnabled);
  }

  if (m_desiredNumberOfDomainControllersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredNumberOfDomainControllers"));
    (m_desiredNumberOfDomainControllers >= 0) ? encoder.WriteUInt(m_desiredNumberOfDomainControllers)
                                              : encoder.WriteNegInt(m_desiredNumberOfDomainControllers);
  }

  if (m_ownerDirectoryDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerDirectoryDescription"));
    m_ownerDirectoryDescription.CborEncode(encoder);
  }

  if (m_regionsInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegionsInfo"));
    m_regionsInfo.CborEncode(encoder);
  }

  if (m_osVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OsVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(OSVersionMapper::GetNameForOSVersion(m_osVersion).c_str()));
  }

  if (m_hybridSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HybridSettings"));
    m_hybridSettings.CborEncode(encoder);
  }

  if (m_networkTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NetworkTypeMapper::GetNameForNetworkType(m_networkType).c_str()));
  }
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws