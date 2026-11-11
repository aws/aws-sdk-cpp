/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/model/ScalarsEvent.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {

ScalarsEvent::ScalarsEvent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ScalarsEvent& ScalarsEvent::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "booleanMember") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_booleanMember = val.value();
                }
                m_booleanMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "byteMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_byteMember = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_byteMember = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_byteMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "shortMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_shortMember = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_shortMember = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_shortMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "integerMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_integerMember = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_integerMember = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_integerMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "longMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_longMember = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_longMember = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_longMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "floatMember") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_floatMember = val.value();
                }
                m_floatMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "doubleMember") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_doubleMember = val.value();
                }
                m_doubleMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "stringMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stringMember = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stringMember = ss.str();
                  }
                }
                m_stringMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "blobMember") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
                    auto val = decoder->PopNextBytesVal();
                    if (val.has_value()) {
                      m_blobMember = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
                    m_blobMember = Aws::Utils::ByteBuffer(ss.str());
                    ss.clear();
                  }
                }
                m_blobMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "timestampMember") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_timestampMember = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_timestampMember = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_timestampMemberHasBeenSet = true;
              }

              else if (initialKeyStr == "stringEnum") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_stringEnum = CorpusStringEnumMapper::GetCorpusStringEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stringEnumHasBeenSet = true;
              }

              else if (initialKeyStr == "intEnum") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_intEnum = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_intEnum = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_intEnumHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ScalarsEvent", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "booleanMember") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_booleanMember = val.value();
              }
              m_booleanMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "byteMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_byteMember = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_byteMember = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_byteMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "shortMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_shortMember = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_shortMember = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_shortMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "integerMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_integerMember = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_integerMember = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_integerMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "longMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_longMember = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_longMember = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_longMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "floatMember") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_floatMember = val.value();
              }
              m_floatMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "doubleMember") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_doubleMember = val.value();
              }
              m_doubleMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "stringMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stringMember = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stringMember = ss.str();
                }
              }
              m_stringMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "blobMember") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Bytes) {
                  auto val = decoder->PopNextBytesVal();
                  if (val.has_value()) {
                    m_blobMember = Aws::Utils::ByteBuffer(val.value().ptr, val.value().len);
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
                  m_blobMember = Aws::Utils::ByteBuffer(ss.str());
                  ss.clear();
                }
              }
              m_blobMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "timestampMember") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_timestampMember = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timestampMember = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_timestampMemberHasBeenSet = true;
            }

            else if (initialKeyStr == "stringEnum") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_stringEnum = CorpusStringEnumMapper::GetCorpusStringEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stringEnumHasBeenSet = true;
            }

            else if (initialKeyStr == "intEnum") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_intEnum = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_intEnum = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_intEnumHasBeenSet = true;
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

void ScalarsEvent::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_booleanMemberHasBeenSet) {
    mapSize++;
  }
  if (m_byteMemberHasBeenSet) {
    mapSize++;
  }
  if (m_shortMemberHasBeenSet) {
    mapSize++;
  }
  if (m_integerMemberHasBeenSet) {
    mapSize++;
  }
  if (m_longMemberHasBeenSet) {
    mapSize++;
  }
  if (m_floatMemberHasBeenSet) {
    mapSize++;
  }
  if (m_doubleMemberHasBeenSet) {
    mapSize++;
  }
  if (m_stringMemberHasBeenSet) {
    mapSize++;
  }
  if (m_blobMemberHasBeenSet) {
    mapSize++;
  }
  if (m_timestampMemberHasBeenSet) {
    mapSize++;
  }
  if (m_stringEnumHasBeenSet) {
    mapSize++;
  }
  if (m_intEnumHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_booleanMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("booleanMember"));
    encoder.WriteBool(m_booleanMember);
  }

  if (m_byteMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("byteMember"));
    (m_byteMember >= 0) ? encoder.WriteUInt(m_byteMember) : encoder.WriteNegInt(m_byteMember);
  }

  if (m_shortMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("shortMember"));
    (m_shortMember >= 0) ? encoder.WriteUInt(m_shortMember) : encoder.WriteNegInt(m_shortMember);
  }

  if (m_integerMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("integerMember"));
    (m_integerMember >= 0) ? encoder.WriteUInt(m_integerMember) : encoder.WriteNegInt(m_integerMember);
  }

  if (m_longMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("longMember"));
    (m_longMember >= 0) ? encoder.WriteUInt(m_longMember) : encoder.WriteNegInt(m_longMember);
  }

  if (m_floatMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("floatMember"));
    encoder.WriteFloat(m_floatMember);
  }

  if (m_doubleMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("doubleMember"));
    encoder.WriteFloat(m_doubleMember);
  }

  if (m_stringMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringMember"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stringMember.c_str()));
  }

  if (m_blobMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blobMember"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_blobMember.GetUnderlyingData(), m_blobMember.GetLength()));
  }

  if (m_timestampMemberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timestampMember"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_timestampMember.Seconds());
  }

  if (m_stringEnumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringEnum"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CorpusStringEnumMapper::GetNameForCorpusStringEnum(m_stringEnum).c_str()));
  }

  if (m_intEnumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intEnum"));
    (m_intEnum >= 0) ? encoder.WriteUInt(m_intEnum) : encoder.WriteNegInt(m_intEnum);
  }
}

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws