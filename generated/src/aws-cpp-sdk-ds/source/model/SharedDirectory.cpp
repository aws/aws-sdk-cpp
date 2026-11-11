/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/SharedDirectory.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

SharedDirectory::SharedDirectory(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SharedDirectory& SharedDirectory::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "OwnerAccountId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ownerAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ownerAccountId = ss.str();
                  }
                }
                m_ownerAccountIdHasBeenSet = true;
              }

              else if (initialKeyStr == "OwnerDirectoryId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ownerDirectoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ownerDirectoryId = ss.str();
                  }
                }
                m_ownerDirectoryIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareMethod") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_shareMethod = ShareMethodMapper::GetShareMethodForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_shareMethodHasBeenSet = true;
              }

              else if (initialKeyStr == "SharedAccountId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sharedAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sharedAccountId = ss.str();
                  }
                }
                m_sharedAccountIdHasBeenSet = true;
              }

              else if (initialKeyStr == "SharedDirectoryId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sharedDirectoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sharedDirectoryId = ss.str();
                  }
                }
                m_sharedDirectoryIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_shareStatus = ShareStatusMapper::GetShareStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_shareStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareNotes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_shareNotes = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_shareNotes = ss.str();
                  }
                }
                m_shareNotesHasBeenSet = true;
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
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SharedDirectory", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "OwnerAccountId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ownerAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ownerAccountId = ss.str();
                }
              }
              m_ownerAccountIdHasBeenSet = true;
            }

            else if (initialKeyStr == "OwnerDirectoryId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ownerDirectoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ownerDirectoryId = ss.str();
                }
              }
              m_ownerDirectoryIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareMethod") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_shareMethod =
                    ShareMethodMapper::GetShareMethodForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_shareMethodHasBeenSet = true;
            }

            else if (initialKeyStr == "SharedAccountId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sharedAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sharedAccountId = ss.str();
                }
              }
              m_sharedAccountIdHasBeenSet = true;
            }

            else if (initialKeyStr == "SharedDirectoryId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sharedDirectoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sharedDirectoryId = ss.str();
                }
              }
              m_sharedDirectoryIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_shareStatus =
                    ShareStatusMapper::GetShareStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_shareStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareNotes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_shareNotes = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_shareNotes = ss.str();
                }
              }
              m_shareNotesHasBeenSet = true;
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

void SharedDirectory::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ownerAccountIdHasBeenSet) {
    mapSize++;
  }
  if (m_ownerDirectoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_shareMethodHasBeenSet) {
    mapSize++;
  }
  if (m_sharedAccountIdHasBeenSet) {
    mapSize++;
  }
  if (m_sharedDirectoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_shareStatusHasBeenSet) {
    mapSize++;
  }
  if (m_shareNotesHasBeenSet) {
    mapSize++;
  }
  if (m_createdDateTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lastUpdatedDateTimeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ownerAccountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerAccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccountId.c_str()));
  }

  if (m_ownerDirectoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerDirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerDirectoryId.c_str()));
  }

  if (m_shareMethodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareMethod"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShareMethodMapper::GetNameForShareMethod(m_shareMethod).c_str()));
  }

  if (m_sharedAccountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SharedAccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sharedAccountId.c_str()));
  }

  if (m_sharedDirectoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SharedDirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sharedDirectoryId.c_str()));
  }

  if (m_shareStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShareStatusMapper::GetNameForShareStatus(m_shareStatus).c_str()));
  }

  if (m_shareNotesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareNotes"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_shareNotes.c_str()));
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
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws