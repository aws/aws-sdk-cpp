/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/Node.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

Node::Node(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Node& Node::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "nodeId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_nodeId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_nodeId = ss.str();
                  }
                }
                m_nodeIdHasBeenSet = true;
              }

              else if (initialKeyStr == "nodeType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_nodeType =
                      NodeTypeMapper::GetNodeTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_nodeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "name") {
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

              else if (initialKeyStr == "alternateNames") {
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
                              m_alternateNames.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_alternateNames.push_back(ss_1.str());
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
                            m_alternateNames.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_alternateNames.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_alternateNamesHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
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
                                m_tags[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                              m_tags[keyStr_1] = ss_1.str();
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
                              m_tags[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_tags[keyStr_1] = ss_1.str();
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "nodeProperties") {
                m_nodeProperties = NodeProperties(decoder);
                m_nodePropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "telemetryAttributes") {
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
                                m_telemetryAttributes[keyStr_1] =
                                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                              m_telemetryAttributes[keyStr_1] = ss_1.str();
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
                              m_telemetryAttributes[keyStr_1] =
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_telemetryAttributes[keyStr_1] = ss_1.str();
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  }
                }
                m_telemetryAttributesHasBeenSet = true;
              }

              else if (initialKeyStr == "operationDetails") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto nestedList_1 = Vector<Aws::Map<Aws::String, Aws::String>>();
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value() &&
                              (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                            if (peekType_1.value() == CborType::ArrayStart) {
                              auto listSize_1 = decoder->PopNextArrayStart();
                              if (listSize_1.has_value()) {
                                for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                  auto nestedMap_2 = Map<Aws::String, Aws::String>();
                                  auto peekType_2 = decoder->PeekType();
                                  if (peekType_2.has_value() &&
                                      (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                    if (peekType_2.value() == CborType::MapStart) {
                                      auto mapSize_2 = decoder->PopNextMapStart();
                                      for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                        auto key_3 = decoder->PopNextTextVal();
                                        if (key_3.has_value()) {
                                          Aws::String keyStr_3 =
                                              Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                          auto peekType_3 = decoder->PeekType();
                                          if (peekType_3) {
                                            if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                nestedMap_2[keyStr_3] =
                                                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            } else {
                                              decoder->ConsumeNextSingleElement();
                                              Aws::StringStream ss_3;
                                              while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                                auto nextType_3 = decoder->PeekType();
                                                if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                  if (nextType_3.has_value()) {
                                                    decoder->ConsumeNextSingleElement();  // consume the Break
                                                  }
                                                  break;
                                                }
                                                auto val = decoder->PopNextTextVal();
                                                if (val.has_value()) {
                                                  ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                                }
                                              }
                                              nestedMap_2[keyStr_3] = ss_3.str();
                                              ss_3.clear();
                                            }
                                          }
                                        }
                                      }

                                    } else  // IndefMapStart
                                    {
                                      decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                      while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                        auto nextType_2 = decoder->PeekType();
                                        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                          if (nextType_2.has_value()) {
                                            decoder->ConsumeNextSingleElement();  // consume the Break
                                          }
                                          break;
                                        }
                                        auto key_3 = decoder->PopNextTextVal();
                                        if (key_3.has_value()) {
                                          Aws::String keyStr_3 =
                                              Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                          auto peekType_3 = decoder->PeekType();
                                          if (peekType_3) {
                                            if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                nestedMap_2[keyStr_3] =
                                                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            } else {
                                              decoder->ConsumeNextSingleElement();
                                              Aws::StringStream ss_3;
                                              while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                                auto nextType_3 = decoder->PeekType();
                                                if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                  if (nextType_3.has_value()) {
                                                    decoder->ConsumeNextSingleElement();  // consume the Break
                                                  }
                                                  break;
                                                }
                                                auto val = decoder->PopNextTextVal();
                                                if (val.has_value()) {
                                                  ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                                }
                                              }
                                              nestedMap_2[keyStr_3] = ss_3.str();
                                              ss_3.clear();
                                            }
                                          }
                                        }
                                      }
                                    }
                                    nestedList_1.push_back(nestedMap_2);
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
                                auto nestedMap_2 = Map<Aws::String, Aws::String>();
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value() &&
                                    (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                  if (peekType_2.value() == CborType::MapStart) {
                                    auto mapSize_2 = decoder->PopNextMapStart();
                                    for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }

                                  } else  // IndefMapStart
                                  {
                                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }
                                  }
                                  nestedList_1.push_back(nestedMap_2);
                                }
                              }
                            }
                            m_operationDetails[keyStr_1] = nestedList_1;
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
                        auto nestedList_1 = Vector<Aws::Map<Aws::String, Aws::String>>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto nestedMap_2 = Map<Aws::String, Aws::String>();
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value() &&
                                    (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                  if (peekType_2.value() == CborType::MapStart) {
                                    auto mapSize_2 = decoder->PopNextMapStart();
                                    for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }

                                  } else  // IndefMapStart
                                  {
                                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }
                                  }
                                  nestedList_1.push_back(nestedMap_2);
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
                              auto nestedMap_2 = Map<Aws::String, Aws::String>();
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value() &&
                                  (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                if (peekType_2.value() == CborType::MapStart) {
                                  auto mapSize_2 = decoder->PopNextMapStart();
                                  for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }

                                } else  // IndefMapStart
                                {
                                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }
                                }
                                nestedList_1.push_back(nestedMap_2);
                              }
                            }
                          }
                          m_operationDetails[keyStr_1] = nestedList_1;
                        }
                      }
                    }
                  }
                }
                m_operationDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "signalTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_signalTypes.push_back(
                              SignalMapper::GetSignalForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_signalTypes.push_back(
                            SignalMapper::GetSignalForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_signalTypesHasBeenSet = true;
              }

              else if (initialKeyStr == "sources") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_sources.push_back(
                              SourceMapper::GetSourceForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_sources.push_back(
                            SourceMapper::GetSourceForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_sourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "metadata") {
                m_metadata = Metadata(decoder);
                m_metadataHasBeenSet = true;
              }

              else if (initialKeyStr == "firstObservedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_firstObservedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_firstObservedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_firstObservedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "lastObservedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastObservedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastObservedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastObservedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "edges") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_edges.push_back(Edge(decoder));
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
                      m_edges.push_back(Edge(decoder));
                    }
                  }
                }
                m_edgesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Node", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "nodeId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_nodeId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_nodeId = ss.str();
                }
              }
              m_nodeIdHasBeenSet = true;
            }

            else if (initialKeyStr == "nodeType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_nodeType =
                    NodeTypeMapper::GetNodeTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_nodeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "name") {
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

            else if (initialKeyStr == "alternateNames") {
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
                            m_alternateNames.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_alternateNames.push_back(ss_1.str());
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
                          m_alternateNames.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_alternateNames.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_alternateNamesHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
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
                              m_tags[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_tags[keyStr_1] = ss_1.str();
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
                            m_tags[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                          m_tags[keyStr_1] = ss_1.str();
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "nodeProperties") {
              m_nodeProperties = NodeProperties(decoder);
              m_nodePropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "telemetryAttributes") {
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
                              m_telemetryAttributes[keyStr_1] =
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_telemetryAttributes[keyStr_1] = ss_1.str();
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
                            m_telemetryAttributes[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                          m_telemetryAttributes[keyStr_1] = ss_1.str();
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
              }
              m_telemetryAttributesHasBeenSet = true;
            }

            else if (initialKeyStr == "operationDetails") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto nestedList_1 = Vector<Aws::Map<Aws::String, Aws::String>>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto nestedMap_2 = Map<Aws::String, Aws::String>();
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value() &&
                                    (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                  if (peekType_2.value() == CborType::MapStart) {
                                    auto mapSize_2 = decoder->PopNextMapStart();
                                    for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }

                                  } else  // IndefMapStart
                                  {
                                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto key_3 = decoder->PopNextTextVal();
                                      if (key_3.has_value()) {
                                        Aws::String keyStr_3 =
                                            Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                        auto peekType_3 = decoder->PeekType();
                                        if (peekType_3) {
                                          if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              nestedMap_2[keyStr_3] =
                                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          } else {
                                            decoder->ConsumeNextSingleElement();
                                            Aws::StringStream ss_3;
                                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                              auto nextType_3 = decoder->PeekType();
                                              if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                                if (nextType_3.has_value()) {
                                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                                }
                                                break;
                                              }
                                              auto val = decoder->PopNextTextVal();
                                              if (val.has_value()) {
                                                ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                              }
                                            }
                                            nestedMap_2[keyStr_3] = ss_3.str();
                                            ss_3.clear();
                                          }
                                        }
                                      }
                                    }
                                  }
                                  nestedList_1.push_back(nestedMap_2);
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
                              auto nestedMap_2 = Map<Aws::String, Aws::String>();
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value() &&
                                  (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                if (peekType_2.value() == CborType::MapStart) {
                                  auto mapSize_2 = decoder->PopNextMapStart();
                                  for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }

                                } else  // IndefMapStart
                                {
                                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }
                                }
                                nestedList_1.push_back(nestedMap_2);
                              }
                            }
                          }
                          m_operationDetails[keyStr_1] = nestedList_1;
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
                      auto nestedList_1 = Vector<Aws::Map<Aws::String, Aws::String>>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              auto nestedMap_2 = Map<Aws::String, Aws::String>();
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value() &&
                                  (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                                if (peekType_2.value() == CborType::MapStart) {
                                  auto mapSize_2 = decoder->PopNextMapStart();
                                  for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }

                                } else  // IndefMapStart
                                {
                                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto key_3 = decoder->PopNextTextVal();
                                    if (key_3.has_value()) {
                                      Aws::String keyStr_3 =
                                          Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                      auto peekType_3 = decoder->PeekType();
                                      if (peekType_3) {
                                        if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            nestedMap_2[keyStr_3] =
                                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        } else {
                                          decoder->ConsumeNextSingleElement();
                                          Aws::StringStream ss_3;
                                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                            auto nextType_3 = decoder->PeekType();
                                            if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                              if (nextType_3.has_value()) {
                                                decoder->ConsumeNextSingleElement();  // consume the Break
                                              }
                                              break;
                                            }
                                            auto val = decoder->PopNextTextVal();
                                            if (val.has_value()) {
                                              ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                            }
                                          }
                                          nestedMap_2[keyStr_3] = ss_3.str();
                                          ss_3.clear();
                                        }
                                      }
                                    }
                                  }
                                }
                                nestedList_1.push_back(nestedMap_2);
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
                            auto nestedMap_2 = Map<Aws::String, Aws::String>();
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2.has_value() &&
                                (peekType_2.value() == CborType::MapStart || peekType_2.value() == CborType::IndefMapStart)) {
                              if (peekType_2.value() == CborType::MapStart) {
                                auto mapSize_2 = decoder->PopNextMapStart();
                                for (size_t j_2 = 0; j_2 < mapSize_2.value(); j_2++) {
                                  auto key_3 = decoder->PopNextTextVal();
                                  if (key_3.has_value()) {
                                    Aws::String keyStr_3 = Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                    auto peekType_3 = decoder->PeekType();
                                    if (peekType_3) {
                                      if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                        auto val = decoder->PopNextTextVal();
                                        if (val.has_value()) {
                                          nestedMap_2[keyStr_3] =
                                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                        }
                                      } else {
                                        decoder->ConsumeNextSingleElement();
                                        Aws::StringStream ss_3;
                                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                          auto nextType_3 = decoder->PeekType();
                                          if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                            if (nextType_3.has_value()) {
                                              decoder->ConsumeNextSingleElement();  // consume the Break
                                            }
                                            break;
                                          }
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        }
                                        nestedMap_2[keyStr_3] = ss_3.str();
                                        ss_3.clear();
                                      }
                                    }
                                  }
                                }

                              } else  // IndefMapStart
                              {
                                decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                                while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                  auto nextType_2 = decoder->PeekType();
                                  if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                    if (nextType_2.has_value()) {
                                      decoder->ConsumeNextSingleElement();  // consume the Break
                                    }
                                    break;
                                  }
                                  auto key_3 = decoder->PopNextTextVal();
                                  if (key_3.has_value()) {
                                    Aws::String keyStr_3 = Aws::String(reinterpret_cast<const char*>(key_3.value().ptr), key_3.value().len);
                                    auto peekType_3 = decoder->PeekType();
                                    if (peekType_3) {
                                      if (peekType_3.value() == Aws::Crt::Cbor::CborType::Text) {
                                        auto val = decoder->PopNextTextVal();
                                        if (val.has_value()) {
                                          nestedMap_2[keyStr_3] =
                                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                        }
                                      } else {
                                        decoder->ConsumeNextSingleElement();
                                        Aws::StringStream ss_3;
                                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                          auto nextType_3 = decoder->PeekType();
                                          if (!nextType_3.has_value() || nextType_3.value() == CborType::Break) {
                                            if (nextType_3.has_value()) {
                                              decoder->ConsumeNextSingleElement();  // consume the Break
                                            }
                                            break;
                                          }
                                          auto val = decoder->PopNextTextVal();
                                          if (val.has_value()) {
                                            ss_3 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                          }
                                        }
                                        nestedMap_2[keyStr_3] = ss_3.str();
                                        ss_3.clear();
                                      }
                                    }
                                  }
                                }
                              }
                              nestedList_1.push_back(nestedMap_2);
                            }
                          }
                        }
                        m_operationDetails[keyStr_1] = nestedList_1;
                      }
                    }
                  }
                }
              }
              m_operationDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "signalTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_signalTypes.push_back(
                            SignalMapper::GetSignalForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_signalTypes.push_back(
                          SignalMapper::GetSignalForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_signalTypesHasBeenSet = true;
            }

            else if (initialKeyStr == "sources") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_sources.push_back(
                            SourceMapper::GetSourceForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sources.push_back(
                          SourceMapper::GetSourceForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_sourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "metadata") {
              m_metadata = Metadata(decoder);
              m_metadataHasBeenSet = true;
            }

            else if (initialKeyStr == "firstObservedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_firstObservedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_firstObservedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_firstObservedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "lastObservedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastObservedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastObservedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastObservedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "edges") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_edges.push_back(Edge(decoder));
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
                    m_edges.push_back(Edge(decoder));
                  }
                }
              }
              m_edgesHasBeenSet = true;
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

void Node::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nodeIdHasBeenSet) {
    mapSize++;
  }
  if (m_nodeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_alternateNamesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_nodePropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_telemetryAttributesHasBeenSet) {
    mapSize++;
  }
  if (m_operationDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_signalTypesHasBeenSet) {
    mapSize++;
  }
  if (m_sourcesHasBeenSet) {
    mapSize++;
  }
  if (m_metadataHasBeenSet) {
    mapSize++;
  }
  if (m_firstObservedAtHasBeenSet) {
    mapSize++;
  }
  if (m_lastObservedAtHasBeenSet) {
    mapSize++;
  }
  if (m_edgesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nodeIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nodeId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeId.c_str()));
  }

  if (m_nodeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nodeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NodeTypeMapper::GetNameForNodeType(m_nodeType).c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_alternateNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("alternateNames"));
    encoder.WriteArrayStart(m_alternateNames.size());
    for (const auto& item_0 : m_alternateNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_nodePropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nodeProperties"));
    m_nodeProperties.CborEncode(encoder);
  }

  if (m_telemetryAttributesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("telemetryAttributes"));
    encoder.WriteMapStart(m_telemetryAttributes.size());
    for (const auto& item_0 : m_telemetryAttributes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_operationDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("operationDetails"));
    encoder.WriteMapStart(m_operationDetails.size());
    for (const auto& item_0 : m_operationDetails) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteMapStart(item_1.size());
        for (const auto& item_2 : item_1) {
          encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_2.first.c_str()));
          encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_2.second.c_str()));
        }
      }
    }
  }

  if (m_signalTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("signalTypes"));
    encoder.WriteArrayStart(m_signalTypes.size());
    for (const auto& item_0 : m_signalTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(SignalMapper::GetNameForSignal(item_0).c_str()));
    }
  }

  if (m_sourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sources"));
    encoder.WriteArrayStart(m_sources.size());
    for (const auto& item_0 : m_sources) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(SourceMapper::GetNameForSource(item_0).c_str()));
    }
  }

  if (m_metadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("metadata"));
    m_metadata.CborEncode(encoder);
  }

  if (m_firstObservedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("firstObservedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_firstObservedAt.Seconds());
  }

  if (m_lastObservedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastObservedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastObservedAt.Seconds());
  }

  if (m_edgesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("edges"));
    encoder.WriteArrayStart(m_edges.size());
    for (const auto& item_0 : m_edges) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws