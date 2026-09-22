/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/EdgeTrafficStats.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

EdgeTrafficStats::EdgeTrafficStats(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EdgeTrafficStats& EdgeTrafficStats::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "bytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_bytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_bytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_bytesHasBeenSet = true;
              }

              else if (initialKeyStr == "packets") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_packets = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_packets = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_packetsHasBeenSet = true;
              }

              else if (initialKeyStr == "flows") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_flows = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_flows = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_flowsHasBeenSet = true;
              }

              else if (initialKeyStr == "sentBytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_sentBytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_sentBytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_sentBytesHasBeenSet = true;
              }

              else if (initialKeyStr == "receivedBytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_receivedBytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_receivedBytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_receivedBytesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EdgeTrafficStats", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "bytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_bytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_bytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_bytesHasBeenSet = true;
            }

            else if (initialKeyStr == "packets") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_packets = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_packets = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_packetsHasBeenSet = true;
            }

            else if (initialKeyStr == "flows") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_flows = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_flows = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_flowsHasBeenSet = true;
            }

            else if (initialKeyStr == "sentBytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_sentBytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_sentBytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_sentBytesHasBeenSet = true;
            }

            else if (initialKeyStr == "receivedBytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_receivedBytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_receivedBytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_receivedBytesHasBeenSet = true;
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

void EdgeTrafficStats::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_bytesHasBeenSet) {
    mapSize++;
  }
  if (m_packetsHasBeenSet) {
    mapSize++;
  }
  if (m_flowsHasBeenSet) {
    mapSize++;
  }
  if (m_sentBytesHasBeenSet) {
    mapSize++;
  }
  if (m_receivedBytesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_bytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bytes"));
    (m_bytes >= 0) ? encoder.WriteUInt(m_bytes) : encoder.WriteNegInt(m_bytes);
  }

  if (m_packetsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("packets"));
    (m_packets >= 0) ? encoder.WriteUInt(m_packets) : encoder.WriteNegInt(m_packets);
  }

  if (m_flowsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("flows"));
    (m_flows >= 0) ? encoder.WriteUInt(m_flows) : encoder.WriteNegInt(m_flows);
  }

  if (m_sentBytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sentBytes"));
    (m_sentBytes >= 0) ? encoder.WriteUInt(m_sentBytes) : encoder.WriteNegInt(m_sentBytes);
  }

  if (m_receivedBytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("receivedBytes"));
    (m_receivedBytes >= 0) ? encoder.WriteUInt(m_receivedBytes) : encoder.WriteNegInt(m_receivedBytes);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws