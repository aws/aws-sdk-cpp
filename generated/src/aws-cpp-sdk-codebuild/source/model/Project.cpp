/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Project.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

Project::Project(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Project& Project::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "name") {
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

              else if (initialKeyStr == "arn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_arn = ss.str();
                  }
                }
                m_arnHasBeenSet = true;
              }

              else if (initialKeyStr == "description") {
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

              else if (initialKeyStr == "source") {
                m_source = ProjectSource(decoder);
                m_sourceHasBeenSet = true;
              }

              else if (initialKeyStr == "secondarySources") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_secondarySources.push_back(ProjectSource(decoder));
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
                      m_secondarySources.push_back(ProjectSource(decoder));
                    }
                  }
                }
                m_secondarySourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "sourceVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourceVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourceVersion = ss.str();
                  }
                }
                m_sourceVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "secondarySourceVersions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_secondarySourceVersions.push_back(ProjectSourceVersion(decoder));
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
                      m_secondarySourceVersions.push_back(ProjectSourceVersion(decoder));
                    }
                  }
                }
                m_secondarySourceVersionsHasBeenSet = true;
              }

              else if (initialKeyStr == "artifacts") {
                m_artifacts = ProjectArtifacts(decoder);
                m_artifactsHasBeenSet = true;
              }

              else if (initialKeyStr == "secondaryArtifacts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_secondaryArtifacts.push_back(ProjectArtifacts(decoder));
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
                      m_secondaryArtifacts.push_back(ProjectArtifacts(decoder));
                    }
                  }
                }
                m_secondaryArtifactsHasBeenSet = true;
              }

              else if (initialKeyStr == "cache") {
                m_cache = ProjectCache(decoder);
                m_cacheHasBeenSet = true;
              }

              else if (initialKeyStr == "environment") {
                m_environment = ProjectEnvironment(decoder);
                m_environmentHasBeenSet = true;
              }

              else if (initialKeyStr == "serviceRole") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_serviceRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_serviceRole = ss.str();
                  }
                }
                m_serviceRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "timeoutInMinutes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timeoutInMinutes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_timeoutInMinutes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_timeoutInMinutesHasBeenSet = true;
              }

              else if (initialKeyStr == "queuedTimeoutInMinutes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_queuedTimeoutInMinutes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_queuedTimeoutInMinutes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_queuedTimeoutInMinutesHasBeenSet = true;
              }

              else if (initialKeyStr == "encryptionKey") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_encryptionKey = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_encryptionKey = ss.str();
                  }
                }
                m_encryptionKeyHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tags.push_back(Tag(decoder));
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
                      m_tags.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "created") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_created = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_created = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdHasBeenSet = true;
              }

              else if (initialKeyStr == "lastModified") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastModified = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastModified = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastModifiedHasBeenSet = true;
              }

              else if (initialKeyStr == "webhook") {
                m_webhook = Webhook(decoder);
                m_webhookHasBeenSet = true;
              }

              else if (initialKeyStr == "vpcConfig") {
                m_vpcConfig = VpcConfig(decoder);
                m_vpcConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "badge") {
                m_badge = ProjectBadge(decoder);
                m_badgeHasBeenSet = true;
              }

              else if (initialKeyStr == "logsConfig") {
                m_logsConfig = LogsConfig(decoder);
                m_logsConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "fileSystemLocations") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_fileSystemLocations.push_back(ProjectFileSystemLocation(decoder));
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
                      m_fileSystemLocations.push_back(ProjectFileSystemLocation(decoder));
                    }
                  }
                }
                m_fileSystemLocationsHasBeenSet = true;
              }

              else if (initialKeyStr == "buildBatchConfig") {
                m_buildBatchConfig = ProjectBuildBatchConfig(decoder);
                m_buildBatchConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "concurrentBuildLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_concurrentBuildLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_concurrentBuildLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_concurrentBuildLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "projectVisibility") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_projectVisibility = ProjectVisibilityTypeMapper::GetProjectVisibilityTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_projectVisibilityHasBeenSet = true;
              }

              else if (initialKeyStr == "publicProjectAlias") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_publicProjectAlias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_publicProjectAlias = ss.str();
                  }
                }
                m_publicProjectAliasHasBeenSet = true;
              }

              else if (initialKeyStr == "resourceAccessRole") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceAccessRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceAccessRole = ss.str();
                  }
                }
                m_resourceAccessRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "autoRetryLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_autoRetryLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_autoRetryLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_autoRetryLimitHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Project", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "name") {
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

            else if (initialKeyStr == "arn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_arn = ss.str();
                }
              }
              m_arnHasBeenSet = true;
            }

            else if (initialKeyStr == "description") {
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

            else if (initialKeyStr == "source") {
              m_source = ProjectSource(decoder);
              m_sourceHasBeenSet = true;
            }

            else if (initialKeyStr == "secondarySources") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_secondarySources.push_back(ProjectSource(decoder));
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
                    m_secondarySources.push_back(ProjectSource(decoder));
                  }
                }
              }
              m_secondarySourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "sourceVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourceVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourceVersion = ss.str();
                }
              }
              m_sourceVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "secondarySourceVersions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_secondarySourceVersions.push_back(ProjectSourceVersion(decoder));
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
                    m_secondarySourceVersions.push_back(ProjectSourceVersion(decoder));
                  }
                }
              }
              m_secondarySourceVersionsHasBeenSet = true;
            }

            else if (initialKeyStr == "artifacts") {
              m_artifacts = ProjectArtifacts(decoder);
              m_artifactsHasBeenSet = true;
            }

            else if (initialKeyStr == "secondaryArtifacts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_secondaryArtifacts.push_back(ProjectArtifacts(decoder));
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
                    m_secondaryArtifacts.push_back(ProjectArtifacts(decoder));
                  }
                }
              }
              m_secondaryArtifactsHasBeenSet = true;
            }

            else if (initialKeyStr == "cache") {
              m_cache = ProjectCache(decoder);
              m_cacheHasBeenSet = true;
            }

            else if (initialKeyStr == "environment") {
              m_environment = ProjectEnvironment(decoder);
              m_environmentHasBeenSet = true;
            }

            else if (initialKeyStr == "serviceRole") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_serviceRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_serviceRole = ss.str();
                }
              }
              m_serviceRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "timeoutInMinutes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_timeoutInMinutes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_timeoutInMinutes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_timeoutInMinutesHasBeenSet = true;
            }

            else if (initialKeyStr == "queuedTimeoutInMinutes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_queuedTimeoutInMinutes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_queuedTimeoutInMinutes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_queuedTimeoutInMinutesHasBeenSet = true;
            }

            else if (initialKeyStr == "encryptionKey") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_encryptionKey = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_encryptionKey = ss.str();
                }
              }
              m_encryptionKeyHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tags.push_back(Tag(decoder));
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
                    m_tags.push_back(Tag(decoder));
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "created") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_created = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_created = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdHasBeenSet = true;
            }

            else if (initialKeyStr == "lastModified") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastModified = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastModified = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastModifiedHasBeenSet = true;
            }

            else if (initialKeyStr == "webhook") {
              m_webhook = Webhook(decoder);
              m_webhookHasBeenSet = true;
            }

            else if (initialKeyStr == "vpcConfig") {
              m_vpcConfig = VpcConfig(decoder);
              m_vpcConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "badge") {
              m_badge = ProjectBadge(decoder);
              m_badgeHasBeenSet = true;
            }

            else if (initialKeyStr == "logsConfig") {
              m_logsConfig = LogsConfig(decoder);
              m_logsConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "fileSystemLocations") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_fileSystemLocations.push_back(ProjectFileSystemLocation(decoder));
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
                    m_fileSystemLocations.push_back(ProjectFileSystemLocation(decoder));
                  }
                }
              }
              m_fileSystemLocationsHasBeenSet = true;
            }

            else if (initialKeyStr == "buildBatchConfig") {
              m_buildBatchConfig = ProjectBuildBatchConfig(decoder);
              m_buildBatchConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "concurrentBuildLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_concurrentBuildLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_concurrentBuildLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_concurrentBuildLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "projectVisibility") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_projectVisibility = ProjectVisibilityTypeMapper::GetProjectVisibilityTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_projectVisibilityHasBeenSet = true;
            }

            else if (initialKeyStr == "publicProjectAlias") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_publicProjectAlias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_publicProjectAlias = ss.str();
                }
              }
              m_publicProjectAliasHasBeenSet = true;
            }

            else if (initialKeyStr == "resourceAccessRole") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceAccessRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceAccessRole = ss.str();
                }
              }
              m_resourceAccessRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "autoRetryLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_autoRetryLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_autoRetryLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_autoRetryLimitHasBeenSet = true;
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

void Project::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_arnHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_sourceHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourcesHasBeenSet) {
    mapSize++;
  }
  if (m_sourceVersionHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourceVersionsHasBeenSet) {
    mapSize++;
  }
  if (m_artifactsHasBeenSet) {
    mapSize++;
  }
  if (m_secondaryArtifactsHasBeenSet) {
    mapSize++;
  }
  if (m_cacheHasBeenSet) {
    mapSize++;
  }
  if (m_environmentHasBeenSet) {
    mapSize++;
  }
  if (m_serviceRoleHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutInMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_queuedTimeoutInMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionKeyHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_createdHasBeenSet) {
    mapSize++;
  }
  if (m_lastModifiedHasBeenSet) {
    mapSize++;
  }
  if (m_webhookHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_badgeHasBeenSet) {
    mapSize++;
  }
  if (m_logsConfigHasBeenSet) {
    mapSize++;
  }
  if (m_fileSystemLocationsHasBeenSet) {
    mapSize++;
  }
  if (m_buildBatchConfigHasBeenSet) {
    mapSize++;
  }
  if (m_concurrentBuildLimitHasBeenSet) {
    mapSize++;
  }
  if (m_projectVisibilityHasBeenSet) {
    mapSize++;
  }
  if (m_publicProjectAliasHasBeenSet) {
    mapSize++;
  }
  if (m_resourceAccessRoleHasBeenSet) {
    mapSize++;
  }
  if (m_autoRetryLimitHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_arnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_arn.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_sourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("source"));
    m_source.CborEncode(encoder);
  }

  if (m_secondarySourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySources"));
    encoder.WriteArrayStart(m_secondarySources.size());
    for (const auto& item_0 : m_secondarySources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceVersion.c_str()));
  }

  if (m_secondarySourceVersionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySourceVersions"));
    encoder.WriteArrayStart(m_secondarySourceVersions.size());
    for (const auto& item_0 : m_secondarySourceVersions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_artifactsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("artifacts"));
    m_artifacts.CborEncode(encoder);
  }

  if (m_secondaryArtifactsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondaryArtifacts"));
    encoder.WriteArrayStart(m_secondaryArtifacts.size());
    for (const auto& item_0 : m_secondaryArtifacts) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_cacheHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cache"));
    m_cache.CborEncode(encoder);
  }

  if (m_environmentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environment"));
    m_environment.CborEncode(encoder);
  }

  if (m_serviceRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRole.c_str()));
  }

  if (m_timeoutInMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timeoutInMinutes"));
    (m_timeoutInMinutes >= 0) ? encoder.WriteUInt(m_timeoutInMinutes) : encoder.WriteNegInt(m_timeoutInMinutes);
  }

  if (m_queuedTimeoutInMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("queuedTimeoutInMinutes"));
    (m_queuedTimeoutInMinutes >= 0) ? encoder.WriteUInt(m_queuedTimeoutInMinutes) : encoder.WriteNegInt(m_queuedTimeoutInMinutes);
  }

  if (m_encryptionKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_encryptionKey.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_createdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("created"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_created.Seconds());
  }

  if (m_lastModifiedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastModified"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastModified.Seconds());
  }

  if (m_webhookHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("webhook"));
    m_webhook.CborEncode(encoder);
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_badgeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("badge"));
    m_badge.CborEncode(encoder);
  }

  if (m_logsConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("logsConfig"));
    m_logsConfig.CborEncode(encoder);
  }

  if (m_fileSystemLocationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fileSystemLocations"));
    encoder.WriteArrayStart(m_fileSystemLocations.size());
    for (const auto& item_0 : m_fileSystemLocations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_buildBatchConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildBatchConfig"));
    m_buildBatchConfig.CborEncode(encoder);
  }

  if (m_concurrentBuildLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("concurrentBuildLimit"));
    (m_concurrentBuildLimit >= 0) ? encoder.WriteUInt(m_concurrentBuildLimit) : encoder.WriteNegInt(m_concurrentBuildLimit);
  }

  if (m_projectVisibilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectVisibility"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProjectVisibilityTypeMapper::GetNameForProjectVisibilityType(m_projectVisibility).c_str()));
  }

  if (m_publicProjectAliasHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("publicProjectAlias"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_publicProjectAlias.c_str()));
  }

  if (m_resourceAccessRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceAccessRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceAccessRole.c_str()));
  }

  if (m_autoRetryLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRetryLimit"));
    (m_autoRetryLimit >= 0) ? encoder.WriteUInt(m_autoRetryLimit) : encoder.WriteNegInt(m_autoRetryLimit);
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws