/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/DnsRuleGroupPriorityConflictViolation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

DnsRuleGroupPriorityConflictViolation::DnsRuleGroupPriorityConflictViolation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

DnsRuleGroupPriorityConflictViolation& DnsRuleGroupPriorityConflictViolation::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ViolationTarget") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_violationTarget = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_violationTarget = ss.str();
                  }
                }
                m_violationTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "ViolationTargetDescription") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_violationTargetDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_violationTargetDescription = ss.str();
                  }
                }
                m_violationTargetDescriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "ConflictingPriority") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_conflictingPriority = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_conflictingPriority = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_conflictingPriorityHasBeenSet = true;
              }

              else if (initialKeyStr == "ConflictingPolicyId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_conflictingPolicyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_conflictingPolicyId = ss.str();
                  }
                }
                m_conflictingPolicyIdHasBeenSet = true;
              }

              else if (initialKeyStr == "UnavailablePriorities") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_unavailablePriorities.push_back(static_cast<int64_t>(val.value()));
                            }
                          } else {
                            auto val = decoder->PopNextNegativeIntVal();
                            if (val.has_value()) {
                              m_unavailablePriorities.push_back(static_cast<int64_t>(1 - val.value()));
                            }
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
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_unavailablePriorities.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_unavailablePriorities.push_back(static_cast<int64_t>(1 - val.value()));
                          }
                        }
                      }
                    }
                  }
                }
                m_unavailablePrioritiesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DnsRuleGroupPriorityConflictViolation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ViolationTarget") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_violationTarget = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_violationTarget = ss.str();
                }
              }
              m_violationTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "ViolationTargetDescription") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_violationTargetDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_violationTargetDescription = ss.str();
                }
              }
              m_violationTargetDescriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "ConflictingPriority") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_conflictingPriority = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_conflictingPriority = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_conflictingPriorityHasBeenSet = true;
            }

            else if (initialKeyStr == "ConflictingPolicyId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_conflictingPolicyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_conflictingPolicyId = ss.str();
                }
              }
              m_conflictingPolicyIdHasBeenSet = true;
            }

            else if (initialKeyStr == "UnavailablePriorities") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_unavailablePriorities.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_unavailablePriorities.push_back(static_cast<int64_t>(1 - val.value()));
                          }
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
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                        auto val = decoder->PopNextUnsignedIntVal();
                        if (val.has_value()) {
                          m_unavailablePriorities.push_back(static_cast<int64_t>(val.value()));
                        }
                      } else {
                        auto val = decoder->PopNextNegativeIntVal();
                        if (val.has_value()) {
                          m_unavailablePriorities.push_back(static_cast<int64_t>(1 - val.value()));
                        }
                      }
                    }
                  }
                }
              }
              m_unavailablePrioritiesHasBeenSet = true;
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

void DnsRuleGroupPriorityConflictViolation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_violationTargetHasBeenSet) {
    mapSize++;
  }
  if (m_violationTargetDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_conflictingPriorityHasBeenSet) {
    mapSize++;
  }
  if (m_conflictingPolicyIdHasBeenSet) {
    mapSize++;
  }
  if (m_unavailablePrioritiesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_violationTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ViolationTarget"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_violationTarget.c_str()));
  }

  if (m_violationTargetDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ViolationTargetDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_violationTargetDescription.c_str()));
  }

  if (m_conflictingPriorityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConflictingPriority"));
    (m_conflictingPriority >= 0) ? encoder.WriteUInt(m_conflictingPriority) : encoder.WriteNegInt(m_conflictingPriority);
  }

  if (m_conflictingPolicyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConflictingPolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_conflictingPolicyId.c_str()));
  }

  if (m_unavailablePrioritiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UnavailablePriorities"));
    encoder.WriteArrayStart(m_unavailablePriorities.size());
    for (const auto& item_0 : m_unavailablePriorities) {
      (item_0 >= 0) ? encoder.WriteUInt(item_0) : encoder.WriteNegInt(item_0);
    }
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws