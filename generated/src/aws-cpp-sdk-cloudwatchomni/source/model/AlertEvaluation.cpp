/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertEvaluation.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

AlertEvaluation::AlertEvaluation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AlertEvaluation& AlertEvaluation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "intervalSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_intervalSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_intervalSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_intervalSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "pendingDurationSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pendingDurationSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pendingDurationSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pendingDurationSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "recoveryDurationSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recoveryDurationSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recoveryDurationSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recoveryDurationSecondsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AlertEvaluation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "intervalSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_intervalSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_intervalSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_intervalSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "pendingDurationSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pendingDurationSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pendingDurationSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pendingDurationSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "recoveryDurationSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recoveryDurationSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recoveryDurationSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recoveryDurationSecondsHasBeenSet = true;
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

void AlertEvaluation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_intervalSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_pendingDurationSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_recoveryDurationSecondsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_intervalSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intervalSeconds"));
    (m_intervalSeconds >= 0) ? encoder.WriteUInt(m_intervalSeconds) : encoder.WriteNegInt(m_intervalSeconds);
  }

  if (m_pendingDurationSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pendingDurationSeconds"));
    (m_pendingDurationSeconds >= 0) ? encoder.WriteUInt(m_pendingDurationSeconds) : encoder.WriteNegInt(m_pendingDurationSeconds);
  }

  if (m_recoveryDurationSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recoveryDurationSeconds"));
    (m_recoveryDurationSeconds >= 0) ? encoder.WriteUInt(m_recoveryDurationSeconds) : encoder.WriteNegInt(m_recoveryDurationSeconds);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws