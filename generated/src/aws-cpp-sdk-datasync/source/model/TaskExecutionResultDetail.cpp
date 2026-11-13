/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/TaskExecutionResultDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

TaskExecutionResultDetail::TaskExecutionResultDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TaskExecutionResultDetail& TaskExecutionResultDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PrepareDuration") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prepareDuration = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prepareDuration = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prepareDurationHasBeenSet = true;
              }

              else if (initialKeyStr == "PrepareStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_prepareStatus = PhaseStatusMapper::GetPhaseStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_prepareStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "TotalDuration") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_totalDuration = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_totalDuration = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_totalDurationHasBeenSet = true;
              }

              else if (initialKeyStr == "TransferDuration") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_transferDuration = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_transferDuration = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_transferDurationHasBeenSet = true;
              }

              else if (initialKeyStr == "TransferStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transferStatus = PhaseStatusMapper::GetPhaseStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transferStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "VerifyDuration") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_verifyDuration = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_verifyDuration = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_verifyDurationHasBeenSet = true;
              }

              else if (initialKeyStr == "VerifyStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_verifyStatus = PhaseStatusMapper::GetPhaseStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_verifyStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "ErrorCode") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_errorCode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_errorCode = ss.str();
                  }
                }
                m_errorCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "ErrorDetail") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_errorDetail = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_errorDetail = ss.str();
                  }
                }
                m_errorDetailHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TaskExecutionResultDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PrepareDuration") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prepareDuration = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prepareDuration = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prepareDurationHasBeenSet = true;
            }

            else if (initialKeyStr == "PrepareStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_prepareStatus =
                    PhaseStatusMapper::GetPhaseStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_prepareStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "TotalDuration") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_totalDuration = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_totalDuration = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_totalDurationHasBeenSet = true;
            }

            else if (initialKeyStr == "TransferDuration") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_transferDuration = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_transferDuration = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_transferDurationHasBeenSet = true;
            }

            else if (initialKeyStr == "TransferStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transferStatus =
                    PhaseStatusMapper::GetPhaseStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transferStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "VerifyDuration") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_verifyDuration = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_verifyDuration = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_verifyDurationHasBeenSet = true;
            }

            else if (initialKeyStr == "VerifyStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_verifyStatus =
                    PhaseStatusMapper::GetPhaseStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_verifyStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "ErrorCode") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_errorCode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_errorCode = ss.str();
                }
              }
              m_errorCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "ErrorDetail") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_errorDetail = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_errorDetail = ss.str();
                }
              }
              m_errorDetailHasBeenSet = true;
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

void TaskExecutionResultDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_prepareDurationHasBeenSet) {
    mapSize++;
  }
  if (m_prepareStatusHasBeenSet) {
    mapSize++;
  }
  if (m_totalDurationHasBeenSet) {
    mapSize++;
  }
  if (m_transferDurationHasBeenSet) {
    mapSize++;
  }
  if (m_transferStatusHasBeenSet) {
    mapSize++;
  }
  if (m_verifyDurationHasBeenSet) {
    mapSize++;
  }
  if (m_verifyStatusHasBeenSet) {
    mapSize++;
  }
  if (m_errorCodeHasBeenSet) {
    mapSize++;
  }
  if (m_errorDetailHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_prepareDurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrepareDuration"));
    (m_prepareDuration >= 0) ? encoder.WriteUInt(m_prepareDuration) : encoder.WriteNegInt(m_prepareDuration);
  }

  if (m_prepareStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrepareStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PhaseStatusMapper::GetNameForPhaseStatus(m_prepareStatus).c_str()));
  }

  if (m_totalDurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalDuration"));
    (m_totalDuration >= 0) ? encoder.WriteUInt(m_totalDuration) : encoder.WriteNegInt(m_totalDuration);
  }

  if (m_transferDurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransferDuration"));
    (m_transferDuration >= 0) ? encoder.WriteUInt(m_transferDuration) : encoder.WriteNegInt(m_transferDuration);
  }

  if (m_transferStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransferStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PhaseStatusMapper::GetNameForPhaseStatus(m_transferStatus).c_str()));
  }

  if (m_verifyDurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VerifyDuration"));
    (m_verifyDuration >= 0) ? encoder.WriteUInt(m_verifyDuration) : encoder.WriteNegInt(m_verifyDuration);
  }

  if (m_verifyStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VerifyStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PhaseStatusMapper::GetNameForPhaseStatus(m_verifyStatus).c_str()));
  }

  if (m_errorCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ErrorCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_errorCode.c_str()));
  }

  if (m_errorDetailHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ErrorDetail"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_errorDetail.c_str()));
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws