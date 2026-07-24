/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationInsights {
namespace Model {

ApplicationComponent::ApplicationComponent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ApplicationComponent& ApplicationComponent::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ComponentName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_componentName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_componentName = ss.str();
                  }
                }
                m_componentNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ComponentRemarks") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_componentRemarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_componentRemarks = ss.str();
                  }
                }
                m_componentRemarksHasBeenSet = true;
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

              else if (initialKeyStr == "OsType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_osType = OsTypeMapper::GetOsTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_osTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Tier") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_tier = TierMapper::GetTierForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_tierHasBeenSet = true;
              }

              else if (initialKeyStr == "Monitor") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_monitor = val.value();
                }
                m_monitorHasBeenSet = true;
              }

              else if (initialKeyStr == "DetectedWorkload") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
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
                                        nestedMap_1[keyStr_2] =
                                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                                        nestedMap_1[keyStr_2] =
                                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_detectedWorkload[TierMapper::GetTierForName(keyStr_1)] = nestedMap_1;
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
                          m_detectedWorkload[TierMapper::GetTierForName(keyStr_1)] = nestedMap_1;
                        }
                      }
                    }
                  }
                }
                m_detectedWorkloadHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ApplicationComponent", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ComponentName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_componentName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_componentName = ss.str();
                }
              }
              m_componentNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ComponentRemarks") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_componentRemarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_componentRemarks = ss.str();
                }
              }
              m_componentRemarksHasBeenSet = true;
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

            else if (initialKeyStr == "OsType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_osType = OsTypeMapper::GetOsTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_osTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Tier") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_tier = TierMapper::GetTierForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_tierHasBeenSet = true;
            }

            else if (initialKeyStr == "Monitor") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_monitor = val.value();
              }
              m_monitorHasBeenSet = true;
            }

            else if (initialKeyStr == "DetectedWorkload") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
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
                          m_detectedWorkload[TierMapper::GetTierForName(keyStr_1)] = nestedMap_1;
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
                        m_detectedWorkload[TierMapper::GetTierForName(keyStr_1)] = nestedMap_1;
                      }
                    }
                  }
                }
              }
              m_detectedWorkloadHasBeenSet = true;
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

void ApplicationComponent::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_componentNameHasBeenSet) {
    mapSize++;
  }
  if (m_componentRemarksHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_osTypeHasBeenSet) {
    mapSize++;
  }
  if (m_tierHasBeenSet) {
    mapSize++;
  }
  if (m_monitorHasBeenSet) {
    mapSize++;
  }
  if (m_detectedWorkloadHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_componentNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentName.c_str()));
  }

  if (m_componentRemarksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentRemarks"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentRemarks.c_str()));
  }

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceType.c_str()));
  }

  if (m_osTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OsType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(OsTypeMapper::GetNameForOsType(m_osType).c_str()));
  }

  if (m_tierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TierMapper::GetNameForTier(m_tier).c_str()));
  }

  if (m_monitorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Monitor"));
    encoder.WriteBool(m_monitor);
  }

  if (m_detectedWorkloadHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DetectedWorkload"));
    encoder.WriteMapStart(m_detectedWorkload.size());
    for (const auto& item_0 : m_detectedWorkload) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(TierMapper::GetNameForTier(item_0.first).c_str()));
      encoder.WriteMapStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.first.c_str()));
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.second.c_str()));
      }
    }
  }
}

}  // namespace Model
}  // namespace ApplicationInsights
}  // namespace Aws