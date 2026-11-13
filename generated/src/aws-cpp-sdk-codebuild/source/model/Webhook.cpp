/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Webhook.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

Webhook::Webhook(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Webhook& Webhook::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "url") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_url = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_url = ss.str();
                  }
                }
                m_urlHasBeenSet = true;
              }

              else if (initialKeyStr == "payloadUrl") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_payloadUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_payloadUrl = ss.str();
                  }
                }
                m_payloadUrlHasBeenSet = true;
              }

              else if (initialKeyStr == "secret") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_secret = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_secret = ss.str();
                  }
                }
                m_secretHasBeenSet = true;
              }

              else if (initialKeyStr == "branchFilter") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_branchFilter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_branchFilter = ss.str();
                  }
                }
                m_branchFilterHasBeenSet = true;
              }

              else if (initialKeyStr == "filterGroups") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto nestedList_1 = Vector<WebhookFilter>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                nestedList_1.push_back(WebhookFilter(decoder));
                              }
                            }
                          } else  // IndefArrayStart
                          {
                            decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              nestedList_1.push_back(WebhookFilter(decoder));
                            }
                          }
                          m_filterGroups.push_back(nestedList_1);
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
                      auto nestedList_1 = Vector<WebhookFilter>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              nestedList_1.push_back(WebhookFilter(decoder));
                            }
                          }
                        } else  // IndefArrayStart
                        {
                          decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            nestedList_1.push_back(WebhookFilter(decoder));
                          }
                        }
                        m_filterGroups.push_back(nestedList_1);
                      }
                    }
                  }
                }
                m_filterGroupsHasBeenSet = true;
              }

              else if (initialKeyStr == "buildType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_buildType = WebhookBuildTypeMapper::GetWebhookBuildTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_buildTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "manualCreation") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_manualCreation = val.value();
                }
                m_manualCreationHasBeenSet = true;
              }

              else if (initialKeyStr == "lastModifiedSecret") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastModifiedSecret = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastModifiedSecret = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastModifiedSecretHasBeenSet = true;
              }

              else if (initialKeyStr == "scopeConfiguration") {
                m_scopeConfiguration = ScopeConfiguration(decoder);
                m_scopeConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = WebhookStatusMapper::GetWebhookStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "statusMessage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_statusMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_statusMessage = ss.str();
                  }
                }
                m_statusMessageHasBeenSet = true;
              }

              else if (initialKeyStr == "pullRequestBuildPolicy") {
                m_pullRequestBuildPolicy = PullRequestBuildPolicy(decoder);
                m_pullRequestBuildPolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Webhook", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "url") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_url = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_url = ss.str();
                }
              }
              m_urlHasBeenSet = true;
            }

            else if (initialKeyStr == "payloadUrl") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_payloadUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_payloadUrl = ss.str();
                }
              }
              m_payloadUrlHasBeenSet = true;
            }

            else if (initialKeyStr == "secret") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_secret = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_secret = ss.str();
                }
              }
              m_secretHasBeenSet = true;
            }

            else if (initialKeyStr == "branchFilter") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_branchFilter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_branchFilter = ss.str();
                }
              }
              m_branchFilterHasBeenSet = true;
            }

            else if (initialKeyStr == "filterGroups") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto nestedList_1 = Vector<WebhookFilter>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              nestedList_1.push_back(WebhookFilter(decoder));
                            }
                          }
                        } else  // IndefArrayStart
                        {
                          decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            nestedList_1.push_back(WebhookFilter(decoder));
                          }
                        }
                        m_filterGroups.push_back(nestedList_1);
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
                    auto nestedList_1 = Vector<WebhookFilter>();
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value() &&
                        (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                      if (peekType_1.value() == CborType::ArrayStart) {
                        auto listSize_1 = decoder->PopNextArrayStart();
                        if (listSize_1.has_value()) {
                          for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                            nestedList_1.push_back(WebhookFilter(decoder));
                          }
                        }
                      } else  // IndefArrayStart
                      {
                        decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          nestedList_1.push_back(WebhookFilter(decoder));
                        }
                      }
                      m_filterGroups.push_back(nestedList_1);
                    }
                  }
                }
              }
              m_filterGroupsHasBeenSet = true;
            }

            else if (initialKeyStr == "buildType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_buildType = WebhookBuildTypeMapper::GetWebhookBuildTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_buildTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "manualCreation") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_manualCreation = val.value();
              }
              m_manualCreationHasBeenSet = true;
            }

            else if (initialKeyStr == "lastModifiedSecret") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastModifiedSecret = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastModifiedSecret = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastModifiedSecretHasBeenSet = true;
            }

            else if (initialKeyStr == "scopeConfiguration") {
              m_scopeConfiguration = ScopeConfiguration(decoder);
              m_scopeConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = WebhookStatusMapper::GetWebhookStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "statusMessage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_statusMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_statusMessage = ss.str();
                }
              }
              m_statusMessageHasBeenSet = true;
            }

            else if (initialKeyStr == "pullRequestBuildPolicy") {
              m_pullRequestBuildPolicy = PullRequestBuildPolicy(decoder);
              m_pullRequestBuildPolicyHasBeenSet = true;
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

void Webhook::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_urlHasBeenSet) {
    mapSize++;
  }
  if (m_payloadUrlHasBeenSet) {
    mapSize++;
  }
  if (m_secretHasBeenSet) {
    mapSize++;
  }
  if (m_branchFilterHasBeenSet) {
    mapSize++;
  }
  if (m_filterGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_buildTypeHasBeenSet) {
    mapSize++;
  }
  if (m_manualCreationHasBeenSet) {
    mapSize++;
  }
  if (m_lastModifiedSecretHasBeenSet) {
    mapSize++;
  }
  if (m_scopeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_statusMessageHasBeenSet) {
    mapSize++;
  }
  if (m_pullRequestBuildPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_urlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("url"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_url.c_str()));
  }

  if (m_payloadUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("payloadUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_payloadUrl.c_str()));
  }

  if (m_secretHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secret"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_secret.c_str()));
  }

  if (m_branchFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branchFilter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_branchFilter.c_str()));
  }

  if (m_filterGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filterGroups"));
    encoder.WriteArrayStart(m_filterGroups.size());
    for (const auto& item_0 : m_filterGroups) {
      encoder.WriteArrayStart(item_0.size());
      for (const auto& item_1 : item_0) {
        item_1.CborEncode(encoder);
      }
    }
  }

  if (m_buildTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WebhookBuildTypeMapper::GetNameForWebhookBuildType(m_buildType).c_str()));
  }

  if (m_manualCreationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("manualCreation"));
    encoder.WriteBool(m_manualCreation);
  }

  if (m_lastModifiedSecretHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastModifiedSecret"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastModifiedSecret.Seconds());
  }

  if (m_scopeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scopeConfiguration"));
    m_scopeConfiguration.CborEncode(encoder);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WebhookStatusMapper::GetNameForWebhookStatus(m_status).c_str()));
  }

  if (m_statusMessageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("statusMessage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_statusMessage.c_str()));
  }

  if (m_pullRequestBuildPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pullRequestBuildPolicy"));
    m_pullRequestBuildPolicy.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws