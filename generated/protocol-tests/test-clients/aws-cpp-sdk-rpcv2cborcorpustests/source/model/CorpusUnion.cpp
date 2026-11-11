/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/model/CorpusUnion.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {

CorpusUnion::CorpusUnion(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CorpusUnion& CorpusUnion::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "booleanValue") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_booleanValue = val.value();
                }
                m_booleanValueHasBeenSet = true;
              }

              else if (initialKeyStr == "byteValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_byteValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_byteValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_byteValueHasBeenSet = true;
              }

              else if (initialKeyStr == "shortValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_shortValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_shortValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_shortValueHasBeenSet = true;
              }

              else if (initialKeyStr == "integerValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_integerValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_integerValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_integerValueHasBeenSet = true;
              }

              else if (initialKeyStr == "longValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_longValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_longValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_longValueHasBeenSet = true;
              }

              else if (initialKeyStr == "floatValue") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_floatValue = val.value();
                }
                m_floatValueHasBeenSet = true;
              }

              else if (initialKeyStr == "doubleValue") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_doubleValue = val.value();
                }
                m_doubleValueHasBeenSet = true;
              }

              else if (initialKeyStr == "stringValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stringValue = ss.str();
                  }
                }
                m_stringValueHasBeenSet = true;
              }

              else if (initialKeyStr == "blobValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
                    auto val = decoder->PopNextBytesVal();
                    if (val.has_value()) {
                      m_blobValue = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
                      auto val = decoder->PopNextBytesVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_blobValue = Aws::Utils::ByteBuffer(ss.str());
                    ss.clear();
                  }
                }
                m_blobValueHasBeenSet = true;
              }

              else if (initialKeyStr == "timestampValue") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_timestampValue = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_timestampValue = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_timestampValueHasBeenSet = true;
              }

              else if (initialKeyStr == "enumValue") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_enumValue = CorpusStringEnumMapper::GetCorpusStringEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_enumValueHasBeenSet = true;
              }

              else if (initialKeyStr == "intEnumValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_intEnumValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_intEnumValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_intEnumValueHasBeenSet = true;
              }

              else if (initialKeyStr == "listValue") {
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
                              m_listValue.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_listValue.push_back(ss_1.str());
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
                            m_listValue.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_listValue.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_listValueHasBeenSet = true;
              }

              else if (initialKeyStr == "mapValue") {
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
                                m_mapValue[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                              m_mapValue[keyStr_1] = ss_1.str();
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
                              m_mapValue[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_mapValue[keyStr_1] = ss_1.str();
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  }
                }
                m_mapValueHasBeenSet = true;
              }

              else if (initialKeyStr == "structValue") {
                m_structValue = SimpleStruct(decoder);
                m_structValueHasBeenSet = true;
              }

              else if (initialKeyStr == "unionValue") {
                m_unionValue = CorpusSubUnion(decoder);
                m_unionValueHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CorpusUnion", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "booleanValue") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_booleanValue = val.value();
              }
              m_booleanValueHasBeenSet = true;
            }

            else if (initialKeyStr == "byteValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_byteValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_byteValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_byteValueHasBeenSet = true;
            }

            else if (initialKeyStr == "shortValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_shortValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_shortValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_shortValueHasBeenSet = true;
            }

            else if (initialKeyStr == "integerValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_integerValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_integerValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_integerValueHasBeenSet = true;
            }

            else if (initialKeyStr == "longValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_longValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_longValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_longValueHasBeenSet = true;
            }

            else if (initialKeyStr == "floatValue") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_floatValue = val.value();
              }
              m_floatValueHasBeenSet = true;
            }

            else if (initialKeyStr == "doubleValue") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_doubleValue = val.value();
              }
              m_doubleValueHasBeenSet = true;
            }

            else if (initialKeyStr == "stringValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stringValue = ss.str();
                }
              }
              m_stringValueHasBeenSet = true;
            }

            else if (initialKeyStr == "blobValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
                  auto val = decoder->PopNextBytesVal();
                  if (val.has_value()) {
                    m_blobValue = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
                    auto val = decoder->PopNextBytesVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_blobValue = Aws::Utils::ByteBuffer(ss.str());
                  ss.clear();
                }
              }
              m_blobValueHasBeenSet = true;
            }

            else if (initialKeyStr == "timestampValue") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_timestampValue = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timestampValue = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_timestampValueHasBeenSet = true;
            }

            else if (initialKeyStr == "enumValue") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_enumValue = CorpusStringEnumMapper::GetCorpusStringEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_enumValueHasBeenSet = true;
            }

            else if (initialKeyStr == "intEnumValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_intEnumValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_intEnumValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_intEnumValueHasBeenSet = true;
            }

            else if (initialKeyStr == "listValue") {
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
                            m_listValue.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_listValue.push_back(ss_1.str());
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
                          m_listValue.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_listValue.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_listValueHasBeenSet = true;
            }

            else if (initialKeyStr == "mapValue") {
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
                              m_mapValue[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                            m_mapValue[keyStr_1] = ss_1.str();
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
                            m_mapValue[keyStr_1] = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                          m_mapValue[keyStr_1] = ss_1.str();
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
              }
              m_mapValueHasBeenSet = true;
            }

            else if (initialKeyStr == "structValue") {
              m_structValue = SimpleStruct(decoder);
              m_structValueHasBeenSet = true;
            }

            else if (initialKeyStr == "unionValue") {
              m_unionValue = CorpusSubUnion(decoder);
              m_unionValueHasBeenSet = true;
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

void CorpusUnion::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_booleanValueHasBeenSet) {
    mapSize++;
  }
  if (m_byteValueHasBeenSet) {
    mapSize++;
  }
  if (m_shortValueHasBeenSet) {
    mapSize++;
  }
  if (m_integerValueHasBeenSet) {
    mapSize++;
  }
  if (m_longValueHasBeenSet) {
    mapSize++;
  }
  if (m_floatValueHasBeenSet) {
    mapSize++;
  }
  if (m_doubleValueHasBeenSet) {
    mapSize++;
  }
  if (m_stringValueHasBeenSet) {
    mapSize++;
  }
  if (m_blobValueHasBeenSet) {
    mapSize++;
  }
  if (m_timestampValueHasBeenSet) {
    mapSize++;
  }
  if (m_enumValueHasBeenSet) {
    mapSize++;
  }
  if (m_intEnumValueHasBeenSet) {
    mapSize++;
  }
  if (m_listValueHasBeenSet) {
    mapSize++;
  }
  if (m_mapValueHasBeenSet) {
    mapSize++;
  }
  if (m_structValueHasBeenSet) {
    mapSize++;
  }
  if (m_unionValueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_booleanValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("booleanValue"));
    encoder.WriteBool(m_booleanValue);
  }

  if (m_byteValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("byteValue"));
    (m_byteValue >= 0) ? encoder.WriteUInt(m_byteValue) : encoder.WriteNegInt(m_byteValue);
  }

  if (m_shortValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("shortValue"));
    (m_shortValue >= 0) ? encoder.WriteUInt(m_shortValue) : encoder.WriteNegInt(m_shortValue);
  }

  if (m_integerValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("integerValue"));
    (m_integerValue >= 0) ? encoder.WriteUInt(m_integerValue) : encoder.WriteNegInt(m_integerValue);
  }

  if (m_longValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("longValue"));
    (m_longValue >= 0) ? encoder.WriteUInt(m_longValue) : encoder.WriteNegInt(m_longValue);
  }

  if (m_floatValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("floatValue"));
    encoder.WriteFloat(m_floatValue);
  }

  if (m_doubleValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("doubleValue"));
    encoder.WriteFloat(m_doubleValue);
  }

  if (m_stringValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stringValue.c_str()));
  }

  if (m_blobValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blobValue"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_blobValue.GetUnderlyingData(), m_blobValue.GetLength()));
  }

  if (m_timestampValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timestampValue"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_timestampValue.Seconds());
  }

  if (m_enumValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("enumValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CorpusStringEnumMapper::GetNameForCorpusStringEnum(m_enumValue).c_str()));
  }

  if (m_intEnumValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intEnumValue"));
    (m_intEnumValue >= 0) ? encoder.WriteUInt(m_intEnumValue) : encoder.WriteNegInt(m_intEnumValue);
  }

  if (m_listValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("listValue"));
    encoder.WriteArrayStart(m_listValue.size());
    for (const auto& item_0 : m_listValue) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_mapValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("mapValue"));
    encoder.WriteMapStart(m_mapValue.size());
    for (const auto& item_0 : m_mapValue) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_structValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("structValue"));
    m_structValue.CborEncode(encoder);
  }

  if (m_unionValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("unionValue"));
    m_unionValue.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws