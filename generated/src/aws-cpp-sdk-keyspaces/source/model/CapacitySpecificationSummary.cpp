/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/keyspaces/model/CapacitySpecificationSummary.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

CapacitySpecificationSummary::CapacitySpecificationSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CapacitySpecificationSummary& CapacitySpecificationSummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "throughputMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_throughputMode = ThroughputModeMapper::GetThroughputModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_throughputModeHasBeenSet = true;
              }

              else if (initialKeyStr == "readCapacityUnits") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_readCapacityUnits = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_readCapacityUnits = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_readCapacityUnitsHasBeenSet = true;
              }

              else if (initialKeyStr == "writeCapacityUnits") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_writeCapacityUnits = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_writeCapacityUnits = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_writeCapacityUnitsHasBeenSet = true;
              }

              else if (initialKeyStr == "lastUpdateToPayPerRequestTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastUpdateToPayPerRequestTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastUpdateToPayPerRequestTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastUpdateToPayPerRequestTimestampHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CapacitySpecificationSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "throughputMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_throughputMode = ThroughputModeMapper::GetThroughputModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_throughputModeHasBeenSet = true;
            }

            else if (initialKeyStr == "readCapacityUnits") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_readCapacityUnits = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_readCapacityUnits = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_readCapacityUnitsHasBeenSet = true;
            }

            else if (initialKeyStr == "writeCapacityUnits") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_writeCapacityUnits = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_writeCapacityUnits = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_writeCapacityUnitsHasBeenSet = true;
            }

            else if (initialKeyStr == "lastUpdateToPayPerRequestTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastUpdateToPayPerRequestTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastUpdateToPayPerRequestTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastUpdateToPayPerRequestTimestampHasBeenSet = true;
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

void CapacitySpecificationSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_throughputModeHasBeenSet) {
    mapSize++;
  }
  if (m_readCapacityUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_writeCapacityUnitsHasBeenSet) {
    mapSize++;
  }
  if (m_lastUpdateToPayPerRequestTimestampHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_throughputModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("throughputMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThroughputModeMapper::GetNameForThroughputMode(m_throughputMode).c_str()));
  }

  if (m_readCapacityUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("readCapacityUnits"));
    (m_readCapacityUnits >= 0) ? encoder.WriteUInt(m_readCapacityUnits) : encoder.WriteNegInt(m_readCapacityUnits);
  }

  if (m_writeCapacityUnitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("writeCapacityUnits"));
    (m_writeCapacityUnits >= 0) ? encoder.WriteUInt(m_writeCapacityUnits) : encoder.WriteNegInt(m_writeCapacityUnits);
  }

  if (m_lastUpdateToPayPerRequestTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastUpdateToPayPerRequestTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastUpdateToPayPerRequestTimestamp.Seconds());
  }
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws