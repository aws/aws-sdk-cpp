/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/QueryStatistics.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

QueryStatistics::QueryStatistics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

QueryStatistics& QueryStatistics::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "bytesScanned") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_bytesScanned = val.value();
                }
                m_bytesScannedHasBeenSet = true;
              }

              else if (initialKeyStr == "percentComplete") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_percentComplete = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_percentComplete = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_percentCompleteHasBeenSet = true;
              }

              else if (initialKeyStr == "recordsScanned") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recordsScanned = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recordsScanned = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recordsScannedHasBeenSet = true;
              }

              else if (initialKeyStr == "recordsMatched") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recordsMatched = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recordsMatched = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recordsMatchedHasBeenSet = true;
              }

              else if (initialKeyStr == "partialResults") {
                m_partialResults = PartialResults(decoder);
                m_partialResultsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("QueryStatistics", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "bytesScanned") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_bytesScanned = val.value();
              }
              m_bytesScannedHasBeenSet = true;
            }

            else if (initialKeyStr == "percentComplete") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_percentComplete = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_percentComplete = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_percentCompleteHasBeenSet = true;
            }

            else if (initialKeyStr == "recordsScanned") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recordsScanned = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recordsScanned = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recordsScannedHasBeenSet = true;
            }

            else if (initialKeyStr == "recordsMatched") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recordsMatched = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recordsMatched = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recordsMatchedHasBeenSet = true;
            }

            else if (initialKeyStr == "partialResults") {
              m_partialResults = PartialResults(decoder);
              m_partialResultsHasBeenSet = true;
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

void QueryStatistics::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_bytesScannedHasBeenSet) {
    mapSize++;
  }
  if (m_percentCompleteHasBeenSet) {
    mapSize++;
  }
  if (m_recordsScannedHasBeenSet) {
    mapSize++;
  }
  if (m_recordsMatchedHasBeenSet) {
    mapSize++;
  }
  if (m_partialResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_bytesScannedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bytesScanned"));
    encoder.WriteFloat(m_bytesScanned);
  }

  if (m_percentCompleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("percentComplete"));
    (m_percentComplete >= 0) ? encoder.WriteUInt(m_percentComplete) : encoder.WriteNegInt(m_percentComplete);
  }

  if (m_recordsScannedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recordsScanned"));
    (m_recordsScanned >= 0) ? encoder.WriteUInt(m_recordsScanned) : encoder.WriteNegInt(m_recordsScanned);
  }

  if (m_recordsMatchedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recordsMatched"));
    (m_recordsMatched >= 0) ? encoder.WriteUInt(m_recordsMatched) : encoder.WriteNegInt(m_recordsMatched);
  }

  if (m_partialResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("partialResults"));
    m_partialResults.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws