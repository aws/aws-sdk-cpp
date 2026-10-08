/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/EntryViolation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

EntryViolation::EntryViolation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EntryViolation& EntryViolation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ExpectedEntry") {
                m_expectedEntry = EntryDescription(decoder);
                m_expectedEntryHasBeenSet = true;
              }

              else if (initialKeyStr == "ExpectedEvaluationOrder") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_expectedEvaluationOrder = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_expectedEvaluationOrder = ss.str();
                  }
                }
                m_expectedEvaluationOrderHasBeenSet = true;
              }

              else if (initialKeyStr == "ActualEvaluationOrder") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_actualEvaluationOrder = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_actualEvaluationOrder = ss.str();
                  }
                }
                m_actualEvaluationOrderHasBeenSet = true;
              }

              else if (initialKeyStr == "EntryAtExpectedEvaluationOrder") {
                m_entryAtExpectedEvaluationOrder = EntryDescription(decoder);
                m_entryAtExpectedEvaluationOrderHasBeenSet = true;
              }

              else if (initialKeyStr == "EntriesWithConflicts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_entriesWithConflicts.push_back(EntryDescription(decoder));
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
                      m_entriesWithConflicts.push_back(EntryDescription(decoder));
                    }
                  }
                }
                m_entriesWithConflictsHasBeenSet = true;
              }

              else if (initialKeyStr == "EntryViolationReasons") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_entryViolationReasons.push_back(EntryViolationReasonMapper::GetEntryViolationReasonForName(
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
                        m_entryViolationReasons.push_back(EntryViolationReasonMapper::GetEntryViolationReasonForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_entryViolationReasonsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EntryViolation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ExpectedEntry") {
              m_expectedEntry = EntryDescription(decoder);
              m_expectedEntryHasBeenSet = true;
            }

            else if (initialKeyStr == "ExpectedEvaluationOrder") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_expectedEvaluationOrder = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_expectedEvaluationOrder = ss.str();
                }
              }
              m_expectedEvaluationOrderHasBeenSet = true;
            }

            else if (initialKeyStr == "ActualEvaluationOrder") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_actualEvaluationOrder = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_actualEvaluationOrder = ss.str();
                }
              }
              m_actualEvaluationOrderHasBeenSet = true;
            }

            else if (initialKeyStr == "EntryAtExpectedEvaluationOrder") {
              m_entryAtExpectedEvaluationOrder = EntryDescription(decoder);
              m_entryAtExpectedEvaluationOrderHasBeenSet = true;
            }

            else if (initialKeyStr == "EntriesWithConflicts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_entriesWithConflicts.push_back(EntryDescription(decoder));
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
                    m_entriesWithConflicts.push_back(EntryDescription(decoder));
                  }
                }
              }
              m_entriesWithConflictsHasBeenSet = true;
            }

            else if (initialKeyStr == "EntryViolationReasons") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_entryViolationReasons.push_back(EntryViolationReasonMapper::GetEntryViolationReasonForName(
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
                      m_entryViolationReasons.push_back(EntryViolationReasonMapper::GetEntryViolationReasonForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_entryViolationReasonsHasBeenSet = true;
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

void EntryViolation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_expectedEntryHasBeenSet) {
    mapSize++;
  }
  if (m_expectedEvaluationOrderHasBeenSet) {
    mapSize++;
  }
  if (m_actualEvaluationOrderHasBeenSet) {
    mapSize++;
  }
  if (m_entryAtExpectedEvaluationOrderHasBeenSet) {
    mapSize++;
  }
  if (m_entriesWithConflictsHasBeenSet) {
    mapSize++;
  }
  if (m_entryViolationReasonsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_expectedEntryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpectedEntry"));
    m_expectedEntry.CborEncode(encoder);
  }

  if (m_expectedEvaluationOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpectedEvaluationOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_expectedEvaluationOrder.c_str()));
  }

  if (m_actualEvaluationOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActualEvaluationOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_actualEvaluationOrder.c_str()));
  }

  if (m_entryAtExpectedEvaluationOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntryAtExpectedEvaluationOrder"));
    m_entryAtExpectedEvaluationOrder.CborEncode(encoder);
  }

  if (m_entriesWithConflictsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntriesWithConflicts"));
    encoder.WriteArrayStart(m_entriesWithConflicts.size());
    for (const auto& item_0 : m_entriesWithConflicts) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_entryViolationReasonsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntryViolationReasons"));
    encoder.WriteArrayStart(m_entryViolationReasons.size());
    for (const auto& item_0 : m_entryViolationReasons) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EntryViolationReasonMapper::GetNameForEntryViolationReason(item_0).c_str()));
    }
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws