/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationEventStep.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AutomationEventStep::AutomationEventStep(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AutomationEventStep& AutomationEventStep::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "eventId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_eventId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_eventId = ss.str();
                  }
                }
                m_eventIdHasBeenSet = true;
              }

              else if (initialKeyStr == "stepId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stepId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stepId = ss.str();
                  }
                }
                m_stepIdHasBeenSet = true;
              }

              else if (initialKeyStr == "stepType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_stepType =
                      StepTypeMapper::GetStepTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stepTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "stepStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_stepStatus =
                      StepStatusMapper::GetStepStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stepStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "resourceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceId = ss.str();
                  }
                }
                m_resourceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "startTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_startTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_startTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_startTimestampHasBeenSet = true;
              }

              else if (initialKeyStr == "completedTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_completedTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_completedTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_completedTimestampHasBeenSet = true;
              }

              else if (initialKeyStr == "estimatedMonthlySavings") {
                m_estimatedMonthlySavings = EstimatedMonthlySavings(decoder);
                m_estimatedMonthlySavingsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AutomationEventStep", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "eventId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_eventId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_eventId = ss.str();
                }
              }
              m_eventIdHasBeenSet = true;
            }

            else if (initialKeyStr == "stepId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stepId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stepId = ss.str();
                }
              }
              m_stepIdHasBeenSet = true;
            }

            else if (initialKeyStr == "stepType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_stepType =
                    StepTypeMapper::GetStepTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stepTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "stepStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_stepStatus =
                    StepStatusMapper::GetStepStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stepStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "resourceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceId = ss.str();
                }
              }
              m_resourceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "startTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_startTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_startTimestampHasBeenSet = true;
            }

            else if (initialKeyStr == "completedTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_completedTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_completedTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_completedTimestampHasBeenSet = true;
            }

            else if (initialKeyStr == "estimatedMonthlySavings") {
              m_estimatedMonthlySavings = EstimatedMonthlySavings(decoder);
              m_estimatedMonthlySavingsHasBeenSet = true;
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

void AutomationEventStep::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_eventIdHasBeenSet) {
    mapSize++;
  }
  if (m_stepIdHasBeenSet) {
    mapSize++;
  }
  if (m_stepTypeHasBeenSet) {
    mapSize++;
  }
  if (m_stepStatusHasBeenSet) {
    mapSize++;
  }
  if (m_resourceIdHasBeenSet) {
    mapSize++;
  }
  if (m_startTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_completedTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_estimatedMonthlySavingsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_eventIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("eventId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_eventId.c_str()));
  }

  if (m_stepIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stepId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stepId.c_str()));
  }

  if (m_stepTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stepType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StepTypeMapper::GetNameForStepType(m_stepType).c_str()));
  }

  if (m_stepStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stepStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StepStatusMapper::GetNameForStepStatus(m_stepStatus).c_str()));
  }

  if (m_resourceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceId.c_str()));
  }

  if (m_startTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("startTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTimestamp.Seconds());
  }

  if (m_completedTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("completedTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_completedTimestamp.Seconds());
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("estimatedMonthlySavings"));
    m_estimatedMonthlySavings.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws