/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/SparseNullsOperationResult.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

SparseNullsOperationResult::SparseNullsOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  *this = result;
}

SparseNullsOperationResult& SparseNullsOperationResult::operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
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

              if (initialKeyStr == "sparseStringList") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        {
                          auto nullPeek_1 = decoder->PeekType();
                          if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                            decoder->ConsumeNextSingleElement();
                            m_sparseStringList.emplace_back();
                          } else {
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1.has_value()) {
                              if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  m_sparseStringList.push_back(
                                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                                m_sparseStringList.push_back(ss_1.str());
                                ss_1.clear();
                              }
                            }
                          }  // end else (non-null sparse element)
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
                      {
                        auto nullPeek_1 = decoder->PeekType();
                        if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                          decoder->ConsumeNextSingleElement();
                          m_sparseStringList.emplace_back();
                        } else {
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value()) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                m_sparseStringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                              m_sparseStringList.push_back(ss_1.str());
                              ss_1.clear();
                            }
                          }
                        }  // end else (non-null sparse element)
                      }
                    }
                  }
                }
                m_sparseStringListHasBeenSet = true;
              }

              else if (initialKeyStr == "sparseStringMap") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          {
                            auto nullPeek_1 = decoder->PeekType();
                            if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                              decoder->ConsumeNextSingleElement();
                              m_sparseStringMap[keyStr_1];
                            } else {
                              auto peekType_1 = decoder->PeekType();
                              if (peekType_1) {
                                if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    m_sparseStringMap[keyStr_1] =
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
                                  m_sparseStringMap[keyStr_1] = ss_1.str();
                                  ss_1.clear();
                                }
                              }
                            }  // end else (non-null sparse value)
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
                        {
                          auto nullPeek_1 = decoder->PeekType();
                          if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                            decoder->ConsumeNextSingleElement();
                            m_sparseStringMap[keyStr_1];
                          } else {
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1) {
                              if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  m_sparseStringMap[keyStr_1] =
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
                                m_sparseStringMap[keyStr_1] = ss_1.str();
                                ss_1.clear();
                              }
                            }
                          }  // end else (non-null sparse value)
                        }
                      }
                    }
                  }
                }
                m_sparseStringMapHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SparseNullsOperationResult", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "sparseStringList") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      {
                        auto nullPeek_1 = decoder->PeekType();
                        if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                          decoder->ConsumeNextSingleElement();
                          m_sparseStringList.emplace_back();
                        } else {
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value()) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                m_sparseStringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                              m_sparseStringList.push_back(ss_1.str());
                              ss_1.clear();
                            }
                          }
                        }  // end else (non-null sparse element)
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
                    {
                      auto nullPeek_1 = decoder->PeekType();
                      if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                        decoder->ConsumeNextSingleElement();
                        m_sparseStringList.emplace_back();
                      } else {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_sparseStringList.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_sparseStringList.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
                      }  // end else (non-null sparse element)
                    }
                  }
                }
              }
              m_sparseStringListHasBeenSet = true;
            }

            else if (initialKeyStr == "sparseStringMap") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        {
                          auto nullPeek_1 = decoder->PeekType();
                          if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                            decoder->ConsumeNextSingleElement();
                            m_sparseStringMap[keyStr_1];
                          } else {
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1) {
                              if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  m_sparseStringMap[keyStr_1] =
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
                                m_sparseStringMap[keyStr_1] = ss_1.str();
                                ss_1.clear();
                              }
                            }
                          }  // end else (non-null sparse value)
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
                      {
                        auto nullPeek_1 = decoder->PeekType();
                        if (nullPeek_1.has_value() && nullPeek_1.value() == Aws::Crt::Cbor::CborType::Null) {
                          decoder->ConsumeNextSingleElement();
                          m_sparseStringMap[keyStr_1];
                        } else {
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                m_sparseStringMap[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                              m_sparseStringMap[keyStr_1] = ss_1.str();
                              ss_1.clear();
                            }
                          }
                        }  // end else (non-null sparse value)
                      }
                    }
                  }
                }
              }
              m_sparseStringMapHasBeenSet = true;
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
