/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/RetryPolicy.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

RetryPolicy::RetryPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RetryPolicy& RetryPolicy::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MaxRetryAttempts") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxRetryAttempts = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxRetryAttempts = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxRetryAttemptsHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxEventAgeInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxEventAgeInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxEventAgeInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxEventAgeInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "RetryStrategy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_retryStrategy = RetryStrategyMapper::GetRetryStrategyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_retryStrategyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RetryPolicy", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MaxRetryAttempts") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxRetryAttempts = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxRetryAttempts = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxRetryAttemptsHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxEventAgeInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxEventAgeInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxEventAgeInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxEventAgeInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "RetryStrategy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_retryStrategy = RetryStrategyMapper::GetRetryStrategyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_retryStrategyHasBeenSet = true;
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

void RetryPolicy::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_maxRetryAttemptsHasBeenSet) {
    mapSize++;
  }
  if (m_maxEventAgeInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_retryStrategyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_maxRetryAttemptsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxRetryAttempts"));
    (m_maxRetryAttempts >= 0) ? encoder.WriteUInt(m_maxRetryAttempts) : encoder.WriteNegInt(m_maxRetryAttempts);
  }

  if (m_maxEventAgeInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxEventAgeInSeconds"));
    (m_maxEventAgeInSeconds >= 0) ? encoder.WriteUInt(m_maxEventAgeInSeconds) : encoder.WriteNegInt(m_maxEventAgeInSeconds);
  }

  if (m_retryStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RetryStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RetryStrategyMapper::GetNameForRetryStrategy(m_retryStrategy).c_str()));
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws