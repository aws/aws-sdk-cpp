/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/SyncConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeConnections {
namespace Model {

SyncConfiguration::SyncConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SyncConfiguration& SyncConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Branch") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_branch = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_branch = ss.str();
                  }
                }
                m_branchHasBeenSet = true;
              }

              else if (initialKeyStr == "ConfigFile") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_configFile = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_configFile = ss.str();
                  }
                }
                m_configFileHasBeenSet = true;
              }

              else if (initialKeyStr == "OwnerId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ownerId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ownerId = ss.str();
                  }
                }
                m_ownerIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ProviderType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_providerType = ProviderTypeMapper::GetProviderTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_providerTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "RepositoryLinkId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_repositoryLinkId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_repositoryLinkId = ss.str();
                  }
                }
                m_repositoryLinkIdHasBeenSet = true;
              }

              else if (initialKeyStr == "RepositoryName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_repositoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_repositoryName = ss.str();
                  }
                }
                m_repositoryNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceName = ss.str();
                  }
                }
                m_resourceNameHasBeenSet = true;
              }

              else if (initialKeyStr == "RoleArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_roleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_roleArn = ss.str();
                  }
                }
                m_roleArnHasBeenSet = true;
              }

              else if (initialKeyStr == "SyncType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_syncType = SyncConfigurationTypeMapper::GetSyncConfigurationTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_syncTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "PublishDeploymentStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_publishDeploymentStatus = PublishDeploymentStatusMapper::GetPublishDeploymentStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_publishDeploymentStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "TriggerResourceUpdateOn") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_triggerResourceUpdateOn = TriggerResourceUpdateOnMapper::GetTriggerResourceUpdateOnForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_triggerResourceUpdateOnHasBeenSet = true;
              }

              else if (initialKeyStr == "PullRequestComment") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_pullRequestComment = PullRequestCommentMapper::GetPullRequestCommentForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_pullRequestCommentHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SyncConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Branch") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_branch = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_branch = ss.str();
                }
              }
              m_branchHasBeenSet = true;
            }

            else if (initialKeyStr == "ConfigFile") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_configFile = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_configFile = ss.str();
                }
              }
              m_configFileHasBeenSet = true;
            }

            else if (initialKeyStr == "OwnerId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ownerId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ownerId = ss.str();
                }
              }
              m_ownerIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ProviderType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_providerType = ProviderTypeMapper::GetProviderTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_providerTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "RepositoryLinkId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_repositoryLinkId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_repositoryLinkId = ss.str();
                }
              }
              m_repositoryLinkIdHasBeenSet = true;
            }

            else if (initialKeyStr == "RepositoryName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_repositoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_repositoryName = ss.str();
                }
              }
              m_repositoryNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceName = ss.str();
                }
              }
              m_resourceNameHasBeenSet = true;
            }

            else if (initialKeyStr == "RoleArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_roleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_roleArn = ss.str();
                }
              }
              m_roleArnHasBeenSet = true;
            }

            else if (initialKeyStr == "SyncType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_syncType = SyncConfigurationTypeMapper::GetSyncConfigurationTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_syncTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "PublishDeploymentStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_publishDeploymentStatus = PublishDeploymentStatusMapper::GetPublishDeploymentStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_publishDeploymentStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "TriggerResourceUpdateOn") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_triggerResourceUpdateOn = TriggerResourceUpdateOnMapper::GetTriggerResourceUpdateOnForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_triggerResourceUpdateOnHasBeenSet = true;
            }

            else if (initialKeyStr == "PullRequestComment") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_pullRequestComment = PullRequestCommentMapper::GetPullRequestCommentForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_pullRequestCommentHasBeenSet = true;
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

void SyncConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_branchHasBeenSet) {
    mapSize++;
  }
  if (m_configFileHasBeenSet) {
    mapSize++;
  }
  if (m_ownerIdHasBeenSet) {
    mapSize++;
  }
  if (m_providerTypeHasBeenSet) {
    mapSize++;
  }
  if (m_repositoryLinkIdHasBeenSet) {
    mapSize++;
  }
  if (m_repositoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_resourceNameHasBeenSet) {
    mapSize++;
  }
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_syncTypeHasBeenSet) {
    mapSize++;
  }
  if (m_publishDeploymentStatusHasBeenSet) {
    mapSize++;
  }
  if (m_triggerResourceUpdateOnHasBeenSet) {
    mapSize++;
  }
  if (m_pullRequestCommentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_branchHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Branch"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_branch.c_str()));
  }

  if (m_configFileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConfigFile"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_configFile.c_str()));
  }

  if (m_ownerIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerId.c_str()));
  }

  if (m_providerTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProviderType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProviderTypeMapper::GetNameForProviderType(m_providerType).c_str()));
  }

  if (m_repositoryLinkIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RepositoryLinkId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_repositoryLinkId.c_str()));
  }

  if (m_repositoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RepositoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_repositoryName.c_str()));
  }

  if (m_resourceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceName.c_str()));
  }

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_syncTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SyncType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType).c_str()));
  }

  if (m_publishDeploymentStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublishDeploymentStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        PublishDeploymentStatusMapper::GetNameForPublishDeploymentStatus(m_publishDeploymentStatus).c_str()));
  }

  if (m_triggerResourceUpdateOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TriggerResourceUpdateOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        TriggerResourceUpdateOnMapper::GetNameForTriggerResourceUpdateOn(m_triggerResourceUpdateOn).c_str()));
  }

  if (m_pullRequestCommentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PullRequestComment"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PullRequestCommentMapper::GetNameForPullRequestComment(m_pullRequestComment).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeConnections
}  // namespace Aws