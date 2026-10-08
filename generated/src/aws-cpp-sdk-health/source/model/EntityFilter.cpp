/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/model/EntityFilter.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {

EntityFilter::EntityFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EntityFilter& EntityFilter::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "eventArns") {
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
                              m_eventArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_eventArns.push_back(ss_1.str());
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
                            m_eventArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_eventArns.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_eventArnsHasBeenSet = true;
              }

              else if (initialKeyStr == "entityArns") {
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
                              m_entityArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_entityArns.push_back(ss_1.str());
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
                            m_entityArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_entityArns.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_entityArnsHasBeenSet = true;
              }

              else if (initialKeyStr == "entityValues") {
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
                              m_entityValues.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_entityValues.push_back(ss_1.str());
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
                            m_entityValues.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_entityValues.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_entityValuesHasBeenSet = true;
              }

              else if (initialKeyStr == "lastUpdatedTimes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_lastUpdatedTimes.push_back(DateTimeRange(decoder));
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
                      m_lastUpdatedTimes.push_back(DateTimeRange(decoder));
                    }
                  }
                }
                m_lastUpdatedTimesHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto nestedMap_1 = Map<Aws::String, Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::MapStart || peekType_1.value() == CborType::IndefMapStart)) {
                          if (peekType_1.value() == CborType::MapStart) {
                            auto mapSize_1 = decoder->PopNextMapStart();
                            for (size_t j_1 = 0; j_1 < mapSize_1.value(); j_1++) {
                              auto key_2 = decoder->PopNextTextVal();
                              if (key_2.has_value()) {
                                Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                    nestedMap_1[keyStr_2] = ss_2.str();
                                    ss_2.clear();
                                  }
                                }
                              }
                            }

                          } else  // IndefMapStart
                          {
                            decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto key_2 = decoder->PopNextTextVal();
                              if (key_2.has_value()) {
                                Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                    nestedMap_1[keyStr_2] = ss_2.str();
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                          }
                          m_tags.push_back(nestedMap_1);
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
                      auto nestedMap_1 = Map<Aws::String, Aws::String>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::MapStart || peekType_1.value() == CborType::IndefMapStart)) {
                        if (peekType_1.value() == CborType::MapStart) {
                          auto mapSize_1 = decoder->PopNextMapStart();
                          for (size_t j_1 = 0; j_1 < mapSize_1.value(); j_1++) {
                            auto key_2 = decoder->PopNextTextVal();
                            if (key_2.has_value()) {
                              Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                  nestedMap_1[keyStr_2] = ss_2.str();
                                  ss_2.clear();
                                }
                              }
                            }
                          }

                        } else  // IndefMapStart
                        {
                          decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto key_2 = decoder->PopNextTextVal();
                            if (key_2.has_value()) {
                              Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                  nestedMap_1[keyStr_2] = ss_2.str();
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                        }
                        m_tags.push_back(nestedMap_1);
                      }
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "statusCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                        m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_statusCodesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EntityFilter", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "eventArns") {
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
                            m_eventArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_eventArns.push_back(ss_1.str());
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
                          m_eventArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_eventArns.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_eventArnsHasBeenSet = true;
            }

            else if (initialKeyStr == "entityArns") {
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
                            m_entityArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_entityArns.push_back(ss_1.str());
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
                          m_entityArns.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_entityArns.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_entityArnsHasBeenSet = true;
            }

            else if (initialKeyStr == "entityValues") {
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
                            m_entityValues.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_entityValues.push_back(ss_1.str());
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
                          m_entityValues.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_entityValues.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_entityValuesHasBeenSet = true;
            }

            else if (initialKeyStr == "lastUpdatedTimes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_lastUpdatedTimes.push_back(DateTimeRange(decoder));
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
                    m_lastUpdatedTimes.push_back(DateTimeRange(decoder));
                  }
                }
              }
              m_lastUpdatedTimesHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto nestedMap_1 = Map<Aws::String, Aws::String>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::MapStart || peekType_1.value() == CborType::IndefMapStart)) {
                        if (peekType_1.value() == CborType::MapStart) {
                          auto mapSize_1 = decoder->PopNextMapStart();
                          for (size_t j_1 = 0; j_1 < mapSize_1.value(); j_1++) {
                            auto key_2 = decoder->PopNextTextVal();
                            if (key_2.has_value()) {
                              Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                  nestedMap_1[keyStr_2] = ss_2.str();
                                  ss_2.clear();
                                }
                              }
                            }
                          }

                        } else  // IndefMapStart
                        {
                          decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto key_2 = decoder->PopNextTextVal();
                            if (key_2.has_value()) {
                              Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                  nestedMap_1[keyStr_2] = ss_2.str();
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                        }
                        m_tags.push_back(nestedMap_1);
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
                    auto nestedMap_1 = Map<Aws::String, Aws::String>();
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value() &&
                        (peekType_1.value() == CborType::MapStart || peekType_1.value() == CborType::IndefMapStart)) {
                      if (peekType_1.value() == CborType::MapStart) {
                        auto mapSize_1 = decoder->PopNextMapStart();
                        for (size_t j_1 = 0; j_1 < mapSize_1.value(); j_1++) {
                          auto key_2 = decoder->PopNextTextVal();
                          if (key_2.has_value()) {
                            Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2) {
                              if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                nestedMap_1[keyStr_2] = ss_2.str();
                                ss_2.clear();
                              }
                            }
                          }
                        }

                      } else  // IndefMapStart
                      {
                        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto key_2 = decoder->PopNextTextVal();
                          if (key_2.has_value()) {
                            Aws::String keyStr_2 = Aws::String(reinterpret_cast<const char*>(key_2.value().ptr), key_2.value().len);
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2) {
                              if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  nestedMap_1[keyStr_2] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                nestedMap_1[keyStr_2] = ss_2.str();
                                ss_2.clear();
                              }
                            }
                          }
                        }
                      }
                      m_tags.push_back(nestedMap_1);
                    }
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "statusCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                      m_statusCodes.push_back(EntityStatusCodeMapper::GetEntityStatusCodeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_statusCodesHasBeenSet = true;
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

void EntityFilter::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_eventArnsHasBeenSet) {
    mapSize++;
  }
  if (m_entityArnsHasBeenSet) {
    mapSize++;
  }
  if (m_entityValuesHasBeenSet) {
    mapSize++;
  }
  if (m_lastUpdatedTimesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_statusCodesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_eventArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("eventArns"));
    encoder.WriteArrayStart(m_eventArns.size());
    for (const auto& item_0 : m_eventArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_entityArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("entityArns"));
    encoder.WriteArrayStart(m_entityArns.size());
    for (const auto& item_0 : m_entityArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_entityValuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("entityValues"));
    encoder.WriteArrayStart(m_entityValues.size());
    for (const auto& item_0 : m_entityValues) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_lastUpdatedTimesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastUpdatedTimes"));
    encoder.WriteArrayStart(m_lastUpdatedTimes.size());
    for (const auto& item_0 : m_lastUpdatedTimes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteMapStart(item_0.size());
      for (const auto& item_1 : item_0) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.first.c_str()));
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.second.c_str()));
      }
    }
  }

  if (m_statusCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("statusCodes"));
    encoder.WriteArrayStart(m_statusCodes.size());
    for (const auto& item_0 : m_statusCodes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EntityStatusCodeMapper::GetNameForEntityStatusCode(item_0).c_str()));
    }
  }
}

}  // namespace Model
}  // namespace Health
}  // namespace Aws