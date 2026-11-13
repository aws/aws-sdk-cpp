/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/SnapshotLimits.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

SnapshotLimits::SnapshotLimits(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SnapshotLimits& SnapshotLimits::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ManualSnapshotsLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_manualSnapshotsLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_manualSnapshotsLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_manualSnapshotsLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "ManualSnapshotsCurrentCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_manualSnapshotsCurrentCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_manualSnapshotsCurrentCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_manualSnapshotsCurrentCountHasBeenSet = true;
              }

              else if (initialKeyStr == "ManualSnapshotsLimitReached") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_manualSnapshotsLimitReached = val.value();
                }
                m_manualSnapshotsLimitReachedHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SnapshotLimits", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ManualSnapshotsLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_manualSnapshotsLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_manualSnapshotsLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_manualSnapshotsLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "ManualSnapshotsCurrentCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_manualSnapshotsCurrentCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_manualSnapshotsCurrentCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_manualSnapshotsCurrentCountHasBeenSet = true;
            }

            else if (initialKeyStr == "ManualSnapshotsLimitReached") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_manualSnapshotsLimitReached = val.value();
              }
              m_manualSnapshotsLimitReachedHasBeenSet = true;
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

void SnapshotLimits::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_manualSnapshotsLimitHasBeenSet) {
    mapSize++;
  }
  if (m_manualSnapshotsCurrentCountHasBeenSet) {
    mapSize++;
  }
  if (m_manualSnapshotsLimitReachedHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_manualSnapshotsLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManualSnapshotsLimit"));
    (m_manualSnapshotsLimit >= 0) ? encoder.WriteUInt(m_manualSnapshotsLimit) : encoder.WriteNegInt(m_manualSnapshotsLimit);
  }

  if (m_manualSnapshotsCurrentCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManualSnapshotsCurrentCount"));
    (m_manualSnapshotsCurrentCount >= 0) ? encoder.WriteUInt(m_manualSnapshotsCurrentCount)
                                         : encoder.WriteNegInt(m_manualSnapshotsCurrentCount);
  }

  if (m_manualSnapshotsLimitReachedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManualSnapshotsLimitReached"));
    encoder.WriteBool(m_manualSnapshotsLimitReached);
  }
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws