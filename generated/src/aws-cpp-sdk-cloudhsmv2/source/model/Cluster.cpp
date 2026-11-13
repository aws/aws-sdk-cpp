/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/Cluster.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudHSMV2 {
namespace Model {

Cluster::Cluster(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Cluster& Cluster::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BackupPolicy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_backupPolicy = BackupPolicyMapper::GetBackupPolicyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_backupPolicyHasBeenSet = true;
              }

              else if (initialKeyStr == "BackupRetentionPolicy") {
                m_backupRetentionPolicy = BackupRetentionPolicy(decoder);
                m_backupRetentionPolicyHasBeenSet = true;
              }

              else if (initialKeyStr == "ClusterId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_clusterId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_clusterId = ss.str();
                  }
                }
                m_clusterIdHasBeenSet = true;
              }

              else if (initialKeyStr == "CreateTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createTimestampHasBeenSet = true;
              }

              else if (initialKeyStr == "Hsms") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_hsms.push_back(Hsm(decoder));
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
                      m_hsms.push_back(Hsm(decoder));
                    }
                  }
                }
                m_hsmsHasBeenSet = true;
              }

              else if (initialKeyStr == "HsmType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_hsmType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_hsmType = ss.str();
                  }
                }
                m_hsmTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "HsmTypeRollbackExpiration") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_hsmTypeRollbackExpiration = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_hsmTypeRollbackExpiration = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_hsmTypeRollbackExpirationHasBeenSet = true;
              }

              else if (initialKeyStr == "PreCoPassword") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_preCoPassword = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_preCoPassword = ss.str();
                  }
                }
                m_preCoPasswordHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityGroup") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_securityGroup = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_securityGroup = ss.str();
                  }
                }
                m_securityGroupHasBeenSet = true;
              }

              else if (initialKeyStr == "SourceBackupId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourceBackupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourceBackupId = ss.str();
                  }
                }
                m_sourceBackupIdHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = ClusterStateMapper::GetClusterStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "StateMessage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stateMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stateMessage = ss.str();
                  }
                }
                m_stateMessageHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetMapping") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                m_subnetMapping[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                              m_subnetMapping[keyStr_1] = ss_1.str();
                              ss_1.clear();
                            }
                          }
                        }
                      }
                    }
                  } else  // IndefMapStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_subnetMapping[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_subnetMapping[keyStr_1] = ss_1.str();
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  }
                }
                m_subnetMappingHasBeenSet = true;
              }

              else if (initialKeyStr == "VpcId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_vpcId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_vpcId = ss.str();
                  }
                }
                m_vpcIdHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_networkType = NetworkTypeMapper::GetNetworkTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_networkTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Certificates") {
                m_certificates = Certificates(decoder);
                m_certificatesHasBeenSet = true;
              }

              else if (initialKeyStr == "TagList") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tagList.push_back(Tag(decoder));
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
                      m_tagList.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagListHasBeenSet = true;
              }

              else if (initialKeyStr == "Mode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_mode = ClusterModeMapper::GetClusterModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_modeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Cluster", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BackupPolicy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_backupPolicy = BackupPolicyMapper::GetBackupPolicyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_backupPolicyHasBeenSet = true;
            }

            else if (initialKeyStr == "BackupRetentionPolicy") {
              m_backupRetentionPolicy = BackupRetentionPolicy(decoder);
              m_backupRetentionPolicyHasBeenSet = true;
            }

            else if (initialKeyStr == "ClusterId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_clusterId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_clusterId = ss.str();
                }
              }
              m_clusterIdHasBeenSet = true;
            }

            else if (initialKeyStr == "CreateTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createTimestampHasBeenSet = true;
            }

            else if (initialKeyStr == "Hsms") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_hsms.push_back(Hsm(decoder));
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
                    m_hsms.push_back(Hsm(decoder));
                  }
                }
              }
              m_hsmsHasBeenSet = true;
            }

            else if (initialKeyStr == "HsmType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_hsmType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_hsmType = ss.str();
                }
              }
              m_hsmTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "HsmTypeRollbackExpiration") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_hsmTypeRollbackExpiration = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_hsmTypeRollbackExpiration = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_hsmTypeRollbackExpirationHasBeenSet = true;
            }

            else if (initialKeyStr == "PreCoPassword") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_preCoPassword = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_preCoPassword = ss.str();
                }
              }
              m_preCoPasswordHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityGroup") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_securityGroup = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_securityGroup = ss.str();
                }
              }
              m_securityGroupHasBeenSet = true;
            }

            else if (initialKeyStr == "SourceBackupId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourceBackupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourceBackupId = ss.str();
                }
              }
              m_sourceBackupIdHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = ClusterStateMapper::GetClusterStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "StateMessage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stateMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stateMessage = ss.str();
                }
              }
              m_stateMessageHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetMapping") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_subnetMapping[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_subnetMapping[keyStr_1] = ss_1.str();
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  }
                } else  // IndefMapStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto key_1 = decoder->PopNextTextVal();
                    if (key_1.has_value()) {
                      Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_subnetMapping[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                          m_subnetMapping[keyStr_1] = ss_1.str();
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
              }
              m_subnetMappingHasBeenSet = true;
            }

            else if (initialKeyStr == "VpcId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_vpcId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_vpcId = ss.str();
                }
              }
              m_vpcIdHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_networkType =
                    NetworkTypeMapper::GetNetworkTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_networkTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Certificates") {
              m_certificates = Certificates(decoder);
              m_certificatesHasBeenSet = true;
            }

            else if (initialKeyStr == "TagList") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tagList.push_back(Tag(decoder));
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
                    m_tagList.push_back(Tag(decoder));
                  }
                }
              }
              m_tagListHasBeenSet = true;
            }

            else if (initialKeyStr == "Mode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_mode =
                    ClusterModeMapper::GetClusterModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_modeHasBeenSet = true;
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

void Cluster::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_backupPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_backupRetentionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_clusterIdHasBeenSet) {
    mapSize++;
  }
  if (m_createTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_hsmsHasBeenSet) {
    mapSize++;
  }
  if (m_hsmTypeHasBeenSet) {
    mapSize++;
  }
  if (m_hsmTypeRollbackExpirationHasBeenSet) {
    mapSize++;
  }
  if (m_preCoPasswordHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupHasBeenSet) {
    mapSize++;
  }
  if (m_sourceBackupIdHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_stateMessageHasBeenSet) {
    mapSize++;
  }
  if (m_subnetMappingHasBeenSet) {
    mapSize++;
  }
  if (m_vpcIdHasBeenSet) {
    mapSize++;
  }
  if (m_networkTypeHasBeenSet) {
    mapSize++;
  }
  if (m_certificatesHasBeenSet) {
    mapSize++;
  }
  if (m_tagListHasBeenSet) {
    mapSize++;
  }
  if (m_modeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_backupPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BackupPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BackupPolicyMapper::GetNameForBackupPolicy(m_backupPolicy).c_str()));
  }

  if (m_backupRetentionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BackupRetentionPolicy"));
    m_backupRetentionPolicy.CborEncode(encoder);
  }

  if (m_clusterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterId.c_str()));
  }

  if (m_createTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreateTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createTimestamp.Seconds());
  }

  if (m_hsmsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Hsms"));
    encoder.WriteArrayStart(m_hsms.size());
    for (const auto& item_0 : m_hsms) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_hsmTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HsmType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_hsmType.c_str()));
  }

  if (m_hsmTypeRollbackExpirationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HsmTypeRollbackExpiration"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_hsmTypeRollbackExpiration.Seconds());
  }

  if (m_preCoPasswordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreCoPassword"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_preCoPassword.c_str()));
  }

  if (m_securityGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroup"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_securityGroup.c_str()));
  }

  if (m_sourceBackupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceBackupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceBackupId.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ClusterStateMapper::GetNameForClusterState(m_state).c_str()));
  }

  if (m_stateMessageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateMessage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stateMessage.c_str()));
  }

  if (m_subnetMappingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetMapping"));
    encoder.WriteMapStart(m_subnetMapping.size());
    for (const auto& item_0 : m_subnetMapping) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_vpcIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcId.c_str()));
  }

  if (m_networkTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NetworkTypeMapper::GetNameForNetworkType(m_networkType).c_str()));
  }

  if (m_certificatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Certificates"));
    m_certificates.CborEncode(encoder);
  }

  if (m_tagListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagList"));
    encoder.WriteArrayStart(m_tagList.size());
    for (const auto& item_0 : m_tagList) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_modeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Mode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ClusterModeMapper::GetNameForClusterMode(m_mode).c_str()));
  }
}

}  // namespace Model
}  // namespace CloudHSMV2
}  // namespace Aws