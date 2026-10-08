/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/NetworkAclEntrySet.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

NetworkAclEntrySet::NetworkAclEntrySet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

NetworkAclEntrySet& NetworkAclEntrySet::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "FirstEntries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_firstEntries.push_back(NetworkAclEntry(decoder));
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
                      m_firstEntries.push_back(NetworkAclEntry(decoder));
                    }
                  }
                }
                m_firstEntriesHasBeenSet = true;
              }

              else if (initialKeyStr == "ForceRemediateForFirstEntries") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_forceRemediateForFirstEntries = val.value();
                }
                m_forceRemediateForFirstEntriesHasBeenSet = true;
              }

              else if (initialKeyStr == "LastEntries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_lastEntries.push_back(NetworkAclEntry(decoder));
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
                      m_lastEntries.push_back(NetworkAclEntry(decoder));
                    }
                  }
                }
                m_lastEntriesHasBeenSet = true;
              }

              else if (initialKeyStr == "ForceRemediateForLastEntries") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_forceRemediateForLastEntries = val.value();
                }
                m_forceRemediateForLastEntriesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("NetworkAclEntrySet", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "FirstEntries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_firstEntries.push_back(NetworkAclEntry(decoder));
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
                    m_firstEntries.push_back(NetworkAclEntry(decoder));
                  }
                }
              }
              m_firstEntriesHasBeenSet = true;
            }

            else if (initialKeyStr == "ForceRemediateForFirstEntries") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_forceRemediateForFirstEntries = val.value();
              }
              m_forceRemediateForFirstEntriesHasBeenSet = true;
            }

            else if (initialKeyStr == "LastEntries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_lastEntries.push_back(NetworkAclEntry(decoder));
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
                    m_lastEntries.push_back(NetworkAclEntry(decoder));
                  }
                }
              }
              m_lastEntriesHasBeenSet = true;
            }

            else if (initialKeyStr == "ForceRemediateForLastEntries") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_forceRemediateForLastEntries = val.value();
              }
              m_forceRemediateForLastEntriesHasBeenSet = true;
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

void NetworkAclEntrySet::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_firstEntriesHasBeenSet) {
    mapSize++;
  }
  if (m_forceRemediateForFirstEntriesHasBeenSet) {
    mapSize++;
  }
  if (m_lastEntriesHasBeenSet) {
    mapSize++;
  }
  if (m_forceRemediateForLastEntriesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firstEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirstEntries"));
    encoder.WriteArrayStart(m_firstEntries.size());
    for (const auto& item_0 : m_firstEntries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_forceRemediateForFirstEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ForceRemediateForFirstEntries"));
    encoder.WriteBool(m_forceRemediateForFirstEntries);
  }

  if (m_lastEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastEntries"));
    encoder.WriteArrayStart(m_lastEntries.size());
    for (const auto& item_0 : m_lastEntries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_forceRemediateForLastEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ForceRemediateForLastEntries"));
    encoder.WriteBool(m_forceRemediateForLastEntries);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws