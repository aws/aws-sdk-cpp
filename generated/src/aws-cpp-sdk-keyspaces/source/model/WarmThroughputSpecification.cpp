/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/WarmThroughputSpecification.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

WarmThroughputSpecification::WarmThroughputSpecification(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WarmThroughputSpecification& WarmThroughputSpecification::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "readUnitsPerSecond") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_readUnitsPerSecond = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_readUnitsPerSecond = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_readUnitsPerSecondHasBeenSet = true;
              }

              else if (initialKeyStr == "writeUnitsPerSecond") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_writeUnitsPerSecond = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_writeUnitsPerSecond = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_writeUnitsPerSecondHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WarmThroughputSpecification", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "readUnitsPerSecond") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_readUnitsPerSecond = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_readUnitsPerSecond = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_readUnitsPerSecondHasBeenSet = true;
            }

            else if (initialKeyStr == "writeUnitsPerSecond") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_writeUnitsPerSecond = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_writeUnitsPerSecond = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_writeUnitsPerSecondHasBeenSet = true;
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

void WarmThroughputSpecification::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_readUnitsPerSecondHasBeenSet) {
    mapSize++;
  }
  if (m_writeUnitsPerSecondHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_readUnitsPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("readUnitsPerSecond"));
    (m_readUnitsPerSecond >= 0) ? encoder.WriteUInt(m_readUnitsPerSecond) : encoder.WriteNegInt(m_readUnitsPerSecond);
  }

  if (m_writeUnitsPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("writeUnitsPerSecond"));
    (m_writeUnitsPerSecond >= 0) ? encoder.WriteUInt(m_writeUnitsPerSecond) : encoder.WriteNegInt(m_writeUnitsPerSecond);
  }
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws