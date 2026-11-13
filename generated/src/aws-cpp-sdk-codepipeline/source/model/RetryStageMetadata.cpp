/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RetryStageMetadata.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

RetryStageMetadata::RetryStageMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RetryStageMetadata& RetryStageMetadata::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "autoStageRetryAttempt") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_autoStageRetryAttempt = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_autoStageRetryAttempt = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_autoStageRetryAttemptHasBeenSet = true;
              }

              else if (initialKeyStr == "manualStageRetryAttempt") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_manualStageRetryAttempt = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_manualStageRetryAttempt = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_manualStageRetryAttemptHasBeenSet = true;
              }

              else if (initialKeyStr == "latestRetryTrigger") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_latestRetryTrigger = RetryTriggerMapper::GetRetryTriggerForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_latestRetryTriggerHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RetryStageMetadata", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "autoStageRetryAttempt") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_autoStageRetryAttempt = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_autoStageRetryAttempt = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_autoStageRetryAttemptHasBeenSet = true;
            }

            else if (initialKeyStr == "manualStageRetryAttempt") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_manualStageRetryAttempt = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_manualStageRetryAttempt = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_manualStageRetryAttemptHasBeenSet = true;
            }

            else if (initialKeyStr == "latestRetryTrigger") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_latestRetryTrigger = RetryTriggerMapper::GetRetryTriggerForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_latestRetryTriggerHasBeenSet = true;
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

void RetryStageMetadata::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_autoStageRetryAttemptHasBeenSet) {
    mapSize++;
  }
  if (m_manualStageRetryAttemptHasBeenSet) {
    mapSize++;
  }
  if (m_latestRetryTriggerHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_autoStageRetryAttemptHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoStageRetryAttempt"));
    (m_autoStageRetryAttempt >= 0) ? encoder.WriteUInt(m_autoStageRetryAttempt) : encoder.WriteNegInt(m_autoStageRetryAttempt);
  }

  if (m_manualStageRetryAttemptHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("manualStageRetryAttempt"));
    (m_manualStageRetryAttempt >= 0) ? encoder.WriteUInt(m_manualStageRetryAttempt) : encoder.WriteNegInt(m_manualStageRetryAttempt);
  }

  if (m_latestRetryTriggerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("latestRetryTrigger"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RetryTriggerMapper::GetNameForRetryTrigger(m_latestRetryTrigger).c_str()));
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws