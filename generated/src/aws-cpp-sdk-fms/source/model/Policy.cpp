/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/Policy.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

Policy::Policy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Policy& Policy::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PolicyId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyId = ss.str();
                  }
                }
                m_policyIdHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyName = ss.str();
                  }
                }
                m_policyNameHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyUpdateToken") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyUpdateToken = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyUpdateToken = ss.str();
                  }
                }
                m_policyUpdateTokenHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityServicePolicyData") {
                m_securityServicePolicyData = SecurityServicePolicyData(decoder);
                m_securityServicePolicyDataHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceType = ss.str();
                  }
                }
                m_resourceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceTypeList") {
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
                              m_resourceTypeList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_resourceTypeList.push_back(ss_1.str());
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
                            m_resourceTypeList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_resourceTypeList.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_resourceTypeListHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceTags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_resourceTags.push_back(ResourceTag(decoder));
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
                      m_resourceTags.push_back(ResourceTag(decoder));
                    }
                  }
                }
                m_resourceTagsHasBeenSet = true;
              }

              else if (initialKeyStr == "ExcludeResourceTags") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_excludeResourceTags = val.value();
                }
                m_excludeResourceTagsHasBeenSet = true;
              }

              else if (initialKeyStr == "RemediationEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_remediationEnabled = val.value();
                }
                m_remediationEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "DeleteUnusedFMManagedResources") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_deleteUnusedFMManagedResources = val.value();
                }
                m_deleteUnusedFMManagedResourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "IncludeMap") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto nestedList_1 = Vector<Aws::String>();
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value() &&
                              (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                            if (peekType_1.value() == CborType::ArrayStart) {
                              auto listSize_1 = decoder->PopNextArrayStart();
                              if (listSize_1.has_value()) {
                                for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                  auto peekType_2 = decoder->PeekType();
                                  if (peekType_2.has_value()) {
                                    if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        nestedList_1.push_back(
                                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                      }
                                    } else {
                                      decoder->ConsumeNextSingleElement();
                                      Aws::StringStream ss_2;
                                      while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                        auto nextType_2 = decoder->PeekType();
                                        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                          if (nextType_2.has_value()) {
                                            decoder->ConsumeNextSingleElement();  // consume the Break
                                          }
                                          break;
                                        }
                                        auto val = decoder->PopNextTextVal();
                                        if (val.has_value()) {
                                          ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                        }
                                      }
                                      nestedList_1.push_back(ss_2.str());
                                      ss_2.clear();
                                    }
                                  }
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
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                            m_includeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
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
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
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
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_includeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
                        }
                      }
                    }
                  }
                }
                m_includeMapHasBeenSet = true;
              }

              else if (initialKeyStr == "ExcludeMap") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto nestedList_1 = Vector<Aws::String>();
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value() &&
                              (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                            if (peekType_1.value() == CborType::ArrayStart) {
                              auto listSize_1 = decoder->PopNextArrayStart();
                              if (listSize_1.has_value()) {
                                for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                  auto peekType_2 = decoder->PeekType();
                                  if (peekType_2.has_value()) {
                                    if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        nestedList_1.push_back(
                                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                      }
                                    } else {
                                      decoder->ConsumeNextSingleElement();
                                      Aws::StringStream ss_2;
                                      while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                        auto nextType_2 = decoder->PeekType();
                                        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                          if (nextType_2.has_value()) {
                                            decoder->ConsumeNextSingleElement();  // consume the Break
                                          }
                                          break;
                                        }
                                        auto val = decoder->PopNextTextVal();
                                        if (val.has_value()) {
                                          ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                        }
                                      }
                                      nestedList_1.push_back(ss_2.str());
                                      ss_2.clear();
                                    }
                                  }
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
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                            m_excludeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
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
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
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
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_excludeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
                        }
                      }
                    }
                  }
                }
                m_excludeMapHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceSetIds") {
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
                              m_resourceSetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_resourceSetIds.push_back(ss_1.str());
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
                            m_resourceSetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_resourceSetIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_resourceSetIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyDescription") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyDescription = ss.str();
                  }
                }
                m_policyDescriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_policyStatus = CustomerPolicyStatusMapper::GetCustomerPolicyStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_policyStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceTagLogicalOperator") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_resourceTagLogicalOperator = ResourceTagLogicalOperatorMapper::GetResourceTagLogicalOperatorForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_resourceTagLogicalOperatorHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Policy", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PolicyId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyId = ss.str();
                }
              }
              m_policyIdHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyName = ss.str();
                }
              }
              m_policyNameHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyUpdateToken") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyUpdateToken = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyUpdateToken = ss.str();
                }
              }
              m_policyUpdateTokenHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityServicePolicyData") {
              m_securityServicePolicyData = SecurityServicePolicyData(decoder);
              m_securityServicePolicyDataHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceType = ss.str();
                }
              }
              m_resourceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceTypeList") {
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
                            m_resourceTypeList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_resourceTypeList.push_back(ss_1.str());
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
                          m_resourceTypeList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_resourceTypeList.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_resourceTypeListHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceTags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_resourceTags.push_back(ResourceTag(decoder));
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
                    m_resourceTags.push_back(ResourceTag(decoder));
                  }
                }
              }
              m_resourceTagsHasBeenSet = true;
            }

            else if (initialKeyStr == "ExcludeResourceTags") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_excludeResourceTags = val.value();
              }
              m_excludeResourceTagsHasBeenSet = true;
            }

            else if (initialKeyStr == "RemediationEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_remediationEnabled = val.value();
              }
              m_remediationEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "DeleteUnusedFMManagedResources") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_deleteUnusedFMManagedResources = val.value();
              }
              m_deleteUnusedFMManagedResourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "IncludeMap") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
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
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_includeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
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
                      auto nestedList_1 = Vector<Aws::String>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
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
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2.has_value()) {
                              if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                }
                              } else {
                                decoder->ConsumeNextSingleElement();
                                Aws::StringStream ss_2;
                                while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                  auto nextType_2 = decoder->PeekType();
                                  if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                    if (nextType_2.has_value()) {
                                      decoder->ConsumeNextSingleElement();  // consume the Break
                                    }
                                    break;
                                  }
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                  }
                                }
                                nestedList_1.push_back(ss_2.str());
                                ss_2.clear();
                              }
                            }
                          }
                        }
                        m_includeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
                      }
                    }
                  }
                }
              }
              m_includeMapHasBeenSet = true;
            }

            else if (initialKeyStr == "ExcludeMap") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
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
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_excludeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
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
                      auto nestedList_1 = Vector<Aws::String>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
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
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2.has_value()) {
                              if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                }
                              } else {
                                decoder->ConsumeNextSingleElement();
                                Aws::StringStream ss_2;
                                while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                  auto nextType_2 = decoder->PeekType();
                                  if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                    if (nextType_2.has_value()) {
                                      decoder->ConsumeNextSingleElement();  // consume the Break
                                    }
                                    break;
                                  }
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                  }
                                }
                                nestedList_1.push_back(ss_2.str());
                                ss_2.clear();
                              }
                            }
                          }
                        }
                        m_excludeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(keyStr_1)] = nestedList_1;
                      }
                    }
                  }
                }
              }
              m_excludeMapHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceSetIds") {
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
                            m_resourceSetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_resourceSetIds.push_back(ss_1.str());
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
                          m_resourceSetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_resourceSetIds.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_resourceSetIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyDescription") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyDescription = ss.str();
                }
              }
              m_policyDescriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_policyStatus = CustomerPolicyStatusMapper::GetCustomerPolicyStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_policyStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceTagLogicalOperator") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_resourceTagLogicalOperator = ResourceTagLogicalOperatorMapper::GetResourceTagLogicalOperatorForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_resourceTagLogicalOperatorHasBeenSet = true;
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

void Policy::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_policyIdHasBeenSet) {
    mapSize++;
  }
  if (m_policyNameHasBeenSet) {
    mapSize++;
  }
  if (m_policyUpdateTokenHasBeenSet) {
    mapSize++;
  }
  if (m_securityServicePolicyDataHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeListHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTagsHasBeenSet) {
    mapSize++;
  }
  if (m_excludeResourceTagsHasBeenSet) {
    mapSize++;
  }
  if (m_remediationEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_deleteUnusedFMManagedResourcesHasBeenSet) {
    mapSize++;
  }
  if (m_includeMapHasBeenSet) {
    mapSize++;
  }
  if (m_excludeMapHasBeenSet) {
    mapSize++;
  }
  if (m_resourceSetIdsHasBeenSet) {
    mapSize++;
  }
  if (m_policyDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_policyStatusHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTagLogicalOperatorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_policyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyId.c_str()));
  }

  if (m_policyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyName.c_str()));
  }

  if (m_policyUpdateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyUpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyUpdateToken.c_str()));
  }

  if (m_securityServicePolicyDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityServicePolicyData"));
    m_securityServicePolicyData.CborEncode(encoder);
  }

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceType.c_str()));
  }

  if (m_resourceTypeListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceTypeList"));
    encoder.WriteArrayStart(m_resourceTypeList.size());
    for (const auto& item_0 : m_resourceTypeList) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_resourceTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceTags"));
    encoder.WriteArrayStart(m_resourceTags.size());
    for (const auto& item_0 : m_resourceTags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_excludeResourceTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExcludeResourceTags"));
    encoder.WriteBool(m_excludeResourceTags);
  }

  if (m_remediationEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemediationEnabled"));
    encoder.WriteBool(m_remediationEnabled);
  }

  if (m_deleteUnusedFMManagedResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteUnusedFMManagedResources"));
    encoder.WriteBool(m_deleteUnusedFMManagedResources);
  }

  if (m_includeMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeMap"));
    encoder.WriteMapStart(m_includeMap.size());
    for (const auto& item_0 : m_includeMap) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(CustomerPolicyScopeIdTypeMapper::GetNameForCustomerPolicyScopeIdType(item_0.first).c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_excludeMapHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExcludeMap"));
    encoder.WriteMapStart(m_excludeMap.size());
    for (const auto& item_0 : m_excludeMap) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(CustomerPolicyScopeIdTypeMapper::GetNameForCustomerPolicyScopeIdType(item_0.first).c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_resourceSetIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceSetIds"));
    encoder.WriteArrayStart(m_resourceSetIds.size());
    for (const auto& item_0 : m_resourceSetIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_policyDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyDescription.c_str()));
  }

  if (m_policyStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CustomerPolicyStatusMapper::GetNameForCustomerPolicyStatus(m_policyStatus).c_str()));
  }

  if (m_resourceTagLogicalOperatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceTagLogicalOperator"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ResourceTagLogicalOperatorMapper::GetNameForResourceTagLogicalOperator(m_resourceTagLogicalOperator).c_str()));
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws