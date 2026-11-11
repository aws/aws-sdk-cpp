/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/Trust.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

Trust::Trust(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Trust& Trust::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DirectoryId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directoryId = ss.str();
                  }
                }
                m_directoryIdHasBeenSet = true;
              }

              else if (initialKeyStr == "TrustId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_trustId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_trustId = ss.str();
                  }
                }
                m_trustIdHasBeenSet = true;
              }

              else if (initialKeyStr == "RemoteDomainName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_remoteDomainName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_remoteDomainName = ss.str();
                  }
                }
                m_remoteDomainNameHasBeenSet = true;
              }

              else if (initialKeyStr == "TrustType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_trustType =
                      TrustTypeMapper::GetTrustTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_trustTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "TrustDirection") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_trustDirection = TrustDirectionMapper::GetTrustDirectionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_trustDirectionHasBeenSet = true;
              }

              else if (initialKeyStr == "TrustState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_trustState =
                      TrustStateMapper::GetTrustStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_trustStateHasBeenSet = true;
              }

              else if (initialKeyStr == "CreatedDateTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createdDateTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createdDateTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdDateTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "LastUpdatedDateTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastUpdatedDateTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "StateLastUpdatedDateTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_stateLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_stateLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_stateLastUpdatedDateTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "TrustStateReason") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_trustStateReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_trustStateReason = ss.str();
                  }
                }
                m_trustStateReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "SelectiveAuth") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_selectiveAuth = SelectiveAuthMapper::GetSelectiveAuthForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_selectiveAuthHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Trust", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DirectoryId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directoryId = ss.str();
                }
              }
              m_directoryIdHasBeenSet = true;
            }

            else if (initialKeyStr == "TrustId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_trustId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_trustId = ss.str();
                }
              }
              m_trustIdHasBeenSet = true;
            }

            else if (initialKeyStr == "RemoteDomainName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_remoteDomainName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_remoteDomainName = ss.str();
                }
              }
              m_remoteDomainNameHasBeenSet = true;
            }

            else if (initialKeyStr == "TrustType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_trustType =
                    TrustTypeMapper::GetTrustTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_trustTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "TrustDirection") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_trustDirection = TrustDirectionMapper::GetTrustDirectionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_trustDirectionHasBeenSet = true;
            }

            else if (initialKeyStr == "TrustState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_trustState =
                    TrustStateMapper::GetTrustStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_trustStateHasBeenSet = true;
            }

            else if (initialKeyStr == "CreatedDateTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createdDateTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createdDateTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdDateTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "LastUpdatedDateTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastUpdatedDateTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "StateLastUpdatedDateTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_stateLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_stateLastUpdatedDateTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_stateLastUpdatedDateTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "TrustStateReason") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_trustStateReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_trustStateReason = ss.str();
                }
              }
              m_trustStateReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "SelectiveAuth") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_selectiveAuth = SelectiveAuthMapper::GetSelectiveAuthForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_selectiveAuthHasBeenSet = true;
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

void Trust::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_trustIdHasBeenSet) {
    mapSize++;
  }
  if (m_remoteDomainNameHasBeenSet) {
    mapSize++;
  }
  if (m_trustTypeHasBeenSet) {
    mapSize++;
  }
  if (m_trustDirectionHasBeenSet) {
    mapSize++;
  }
  if (m_trustStateHasBeenSet) {
    mapSize++;
  }
  if (m_createdDateTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lastUpdatedDateTimeHasBeenSet) {
    mapSize++;
  }
  if (m_stateLastUpdatedDateTimeHasBeenSet) {
    mapSize++;
  }
  if (m_trustStateReasonHasBeenSet) {
    mapSize++;
  }
  if (m_selectiveAuthHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_trustIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trustId.c_str()));
  }

  if (m_remoteDomainNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoteDomainName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_remoteDomainName.c_str()));
  }

  if (m_trustTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TrustTypeMapper::GetNameForTrustType(m_trustType).c_str()));
  }

  if (m_trustDirectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustDirection"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TrustDirectionMapper::GetNameForTrustDirection(m_trustDirection).c_str()));
  }

  if (m_trustStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TrustStateMapper::GetNameForTrustState(m_trustState).c_str()));
  }

  if (m_createdDateTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedDateTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdDateTime.Seconds());
  }

  if (m_lastUpdatedDateTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastUpdatedDateTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastUpdatedDateTime.Seconds());
  }

  if (m_stateLastUpdatedDateTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateLastUpdatedDateTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_stateLastUpdatedDateTime.Seconds());
  }

  if (m_trustStateReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TrustStateReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_trustStateReason.c_str()));
  }

  if (m_selectiveAuthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SelectiveAuth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth).c_str()));
  }
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws