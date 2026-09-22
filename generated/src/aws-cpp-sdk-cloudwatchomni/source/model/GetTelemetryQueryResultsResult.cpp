/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/GetTelemetryQueryResultsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

GetTelemetryQueryResultsResult::GetTelemetryQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  *this = result;
}

GetTelemetryQueryResultsResult& GetTelemetryQueryResultsResult::operator=(
    const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();

  const auto& cborValue = result.GetPayload();
  const auto decoder = cborValue.GetDecoder();
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

              if (initialKeyStr == "status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = QueryStatusMapper::GetQueryStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "rows") {
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
                          m_rows.push_back(nestedMap_1);
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
                        m_rows.push_back(nestedMap_1);
                      }
                    }
                  }
                }
                m_rowsHasBeenSet = true;
              }

              else if (initialKeyStr == "nextToken") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_nextToken = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_nextToken = ss.str();
                  }
                }
                m_nextTokenHasBeenSet = true;
              }

              else if (initialKeyStr == "statistics") {
                m_statistics = QueryStatistics(decoder);
                m_statisticsHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("GetTelemetryQueryResultsResult", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status =
                    QueryStatusMapper::GetQueryStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "rows") {
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
                        m_rows.push_back(nestedMap_1);
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
                      m_rows.push_back(nestedMap_1);
                    }
                  }
                }
              }
              m_rowsHasBeenSet = true;
            }

            else if (initialKeyStr == "nextToken") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_nextToken = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_nextToken = ss.str();
                }
              }
              m_nextTokenHasBeenSet = true;
            }

            else if (initialKeyStr == "statistics") {
              m_statistics = QueryStatistics(decoder);
              m_statisticsHasBeenSet = true;
            }

            else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
