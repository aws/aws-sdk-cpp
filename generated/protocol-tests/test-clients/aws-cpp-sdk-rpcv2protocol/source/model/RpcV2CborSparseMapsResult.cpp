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
#include <aws/rpcv2protocol/model/RpcV2CborSparseMapsResult.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;
using namespace Aws::Utils::Cbor;
using namespace Aws;

RpcV2CborSparseMapsResult::RpcV2CborSparseMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
  *this = result;
}

RpcV2CborSparseMapsResult& RpcV2CborSparseMapsResult::operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result) {
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

              if (initialKeyStr == "sparseStructMap") {
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
                              m_sparseStructMap[keyStr_1];
                            } else {
                              m_sparseStructMap[keyStr_1] = GreetingStruct(decoder);
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
                            m_sparseStructMap[keyStr_1];
                          } else {
                            m_sparseStructMap[keyStr_1] = GreetingStruct(decoder);
                          }  // end else (non-null sparse value)
                        }
                      }
                    }
                  }
                }
                m_sparseStructMapHasBeenSet = true;
              }

              else if (initialKeyStr == "sparseNumberMap") {
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
                              m_sparseNumberMap[keyStr_1];
                            } else {
                              auto peekType_1 = decoder->PeekType();
                              if (peekType_1) {
                                if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                                  auto val = decoder->PopNextUnsignedIntVal();
                                  if (val.has_value()) {
                                    m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(val.value());
                                  }
                                } else {
                                  auto val = decoder->PopNextNegativeIntVal();
                                  if (val.has_value()) {
                                    m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(1 - val.value());
                                  }
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
                            m_sparseNumberMap[keyStr_1];
                          } else {
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1) {
                              if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                                auto val = decoder->PopNextUnsignedIntVal();
                                if (val.has_value()) {
                                  m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(val.value());
                                }
                              } else {
                                auto val = decoder->PopNextNegativeIntVal();
                                if (val.has_value()) {
                                  m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(1 - val.value());
                                }
                              }
                            }
                          }  // end else (non-null sparse value)
                        }
                      }
                    }
                  }
                }
                m_sparseNumberMapHasBeenSet = true;
              }

              else if (initialKeyStr == "sparseBooleanMap") {
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
                              m_sparseBooleanMap[keyStr_1];
                            } else {
                              auto val = decoder->PopNextBooleanVal();
                              if (val.has_value()) {
                                m_sparseBooleanMap[keyStr_1] = val.value();
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
                            m_sparseBooleanMap[keyStr_1];
                          } else {
                            auto val = decoder->PopNextBooleanVal();
                            if (val.has_value()) {
                              m_sparseBooleanMap[keyStr_1] = val.value();
                            }
                          }  // end else (non-null sparse value)
                        }
                      }
                    }
                  }
                }
                m_sparseBooleanMapHasBeenSet = true;
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

              else if (initialKeyStr == "sparseSetMap") {
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
                              m_sparseSetMap[keyStr_1];
                            } else {
                              auto nestedList_1 = Vector<Aws::String>();
                              auto peekType_1 = decoder->PeekType();
                              if (peekType_1.has_value() &&
                                  (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                                if (peekType_1.value() == CborType::ArrayStart) {
                                  auto listSize_1 = decoder->PopNextArrayStart();
                                  if (listSize_1.has_value()) {
                                    for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                      {
                                        auto nullPeek_2 = decoder->PeekType();
                                        if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                          decoder->ConsumeNextSingleElement();
                                          nestedList_1.emplace_back();
                                        } else {
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
                                        }  // end else (non-null sparse element)
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
                                    {
                                      auto nullPeek_2 = decoder->PeekType();
                                      if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                        decoder->ConsumeNextSingleElement();
                                        nestedList_1.emplace_back();
                                      } else {
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
                                      }  // end else (non-null sparse element)
                                    }
                                  }
                                }
                                m_sparseSetMap[keyStr_1] = nestedList_1;
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
                            m_sparseSetMap[keyStr_1];
                          } else {
                            auto nestedList_1 = Vector<Aws::String>();
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1.has_value() &&
                                (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                              if (peekType_1.value() == CborType::ArrayStart) {
                                auto listSize_1 = decoder->PopNextArrayStart();
                                if (listSize_1.has_value()) {
                                  for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                    {
                                      auto nullPeek_2 = decoder->PeekType();
                                      if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                        decoder->ConsumeNextSingleElement();
                                        nestedList_1.emplace_back();
                                      } else {
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
                                      }  // end else (non-null sparse element)
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
                                  {
                                    auto nullPeek_2 = decoder->PeekType();
                                    if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                      decoder->ConsumeNextSingleElement();
                                      nestedList_1.emplace_back();
                                    } else {
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
                                    }  // end else (non-null sparse element)
                                  }
                                }
                              }
                              m_sparseSetMap[keyStr_1] = nestedList_1;
                            }
                          }  // end else (non-null sparse value)
                        }
                      }
                    }
                  }
                }
                m_sparseSetMapHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RpcV2CborSparseMapsResult", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "sparseStructMap") {
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
                            m_sparseStructMap[keyStr_1];
                          } else {
                            m_sparseStructMap[keyStr_1] = GreetingStruct(decoder);
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
                          m_sparseStructMap[keyStr_1];
                        } else {
                          m_sparseStructMap[keyStr_1] = GreetingStruct(decoder);
                        }  // end else (non-null sparse value)
                      }
                    }
                  }
                }
              }
              m_sparseStructMapHasBeenSet = true;
            }

            else if (initialKeyStr == "sparseNumberMap") {
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
                            m_sparseNumberMap[keyStr_1];
                          } else {
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1) {
                              if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                                auto val = decoder->PopNextUnsignedIntVal();
                                if (val.has_value()) {
                                  m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(val.value());
                                }
                              } else {
                                auto val = decoder->PopNextNegativeIntVal();
                                if (val.has_value()) {
                                  m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(1 - val.value());
                                }
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
                          m_sparseNumberMap[keyStr_1];
                        } else {
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                              auto val = decoder->PopNextUnsignedIntVal();
                              if (val.has_value()) {
                                m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(val.value());
                              }
                            } else {
                              auto val = decoder->PopNextNegativeIntVal();
                              if (val.has_value()) {
                                m_sparseNumberMap[keyStr_1] = static_cast<int64_t>(1 - val.value());
                              }
                            }
                          }
                        }  // end else (non-null sparse value)
                      }
                    }
                  }
                }
              }
              m_sparseNumberMapHasBeenSet = true;
            }

            else if (initialKeyStr == "sparseBooleanMap") {
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
                            m_sparseBooleanMap[keyStr_1];
                          } else {
                            auto val = decoder->PopNextBooleanVal();
                            if (val.has_value()) {
                              m_sparseBooleanMap[keyStr_1] = val.value();
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
                          m_sparseBooleanMap[keyStr_1];
                        } else {
                          auto val = decoder->PopNextBooleanVal();
                          if (val.has_value()) {
                            m_sparseBooleanMap[keyStr_1] = val.value();
                          }
                        }  // end else (non-null sparse value)
                      }
                    }
                  }
                }
              }
              m_sparseBooleanMapHasBeenSet = true;
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

            else if (initialKeyStr == "sparseSetMap") {
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
                            m_sparseSetMap[keyStr_1];
                          } else {
                            auto nestedList_1 = Vector<Aws::String>();
                            auto peekType_1 = decoder->PeekType();
                            if (peekType_1.has_value() &&
                                (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                              if (peekType_1.value() == CborType::ArrayStart) {
                                auto listSize_1 = decoder->PopNextArrayStart();
                                if (listSize_1.has_value()) {
                                  for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                    {
                                      auto nullPeek_2 = decoder->PeekType();
                                      if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                        decoder->ConsumeNextSingleElement();
                                        nestedList_1.emplace_back();
                                      } else {
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
                                      }  // end else (non-null sparse element)
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
                                  {
                                    auto nullPeek_2 = decoder->PeekType();
                                    if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                      decoder->ConsumeNextSingleElement();
                                      nestedList_1.emplace_back();
                                    } else {
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
                                    }  // end else (non-null sparse element)
                                  }
                                }
                              }
                              m_sparseSetMap[keyStr_1] = nestedList_1;
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
                          m_sparseSetMap[keyStr_1];
                        } else {
                          auto nestedList_1 = Vector<Aws::String>();
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value() &&
                              (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                            if (peekType_1.value() == CborType::ArrayStart) {
                              auto listSize_1 = decoder->PopNextArrayStart();
                              if (listSize_1.has_value()) {
                                for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                  {
                                    auto nullPeek_2 = decoder->PeekType();
                                    if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                      decoder->ConsumeNextSingleElement();
                                      nestedList_1.emplace_back();
                                    } else {
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
                                    }  // end else (non-null sparse element)
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
                                {
                                  auto nullPeek_2 = decoder->PeekType();
                                  if (nullPeek_2.has_value() && nullPeek_2.value() == Aws::Crt::Cbor::CborType::Null) {
                                    decoder->ConsumeNextSingleElement();
                                    nestedList_1.emplace_back();
                                  } else {
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
                                  }  // end else (non-null sparse element)
                                }
                              }
                            }
                            m_sparseSetMap[keyStr_1] = nestedList_1;
                          }
                        }  // end else (non-null sparse value)
                      }
                    }
                  }
                }
              }
              m_sparseSetMapHasBeenSet = true;
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
