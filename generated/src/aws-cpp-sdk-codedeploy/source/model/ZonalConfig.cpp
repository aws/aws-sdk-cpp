/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ZonalConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

ZonalConfig::ZonalConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ZonalConfig& ZonalConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "firstZoneMonitorDurationInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_firstZoneMonitorDurationInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_firstZoneMonitorDurationInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_firstZoneMonitorDurationInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "monitorDurationInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_monitorDurationInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_monitorDurationInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_monitorDurationInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "minimumHealthyHostsPerZone") {
                m_minimumHealthyHostsPerZone = MinimumHealthyHostsPerZone(decoder);
                m_minimumHealthyHostsPerZoneHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ZonalConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "firstZoneMonitorDurationInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_firstZoneMonitorDurationInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_firstZoneMonitorDurationInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_firstZoneMonitorDurationInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "monitorDurationInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_monitorDurationInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_monitorDurationInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_monitorDurationInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "minimumHealthyHostsPerZone") {
              m_minimumHealthyHostsPerZone = MinimumHealthyHostsPerZone(decoder);
              m_minimumHealthyHostsPerZoneHasBeenSet = true;
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

void ZonalConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_firstZoneMonitorDurationInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_monitorDurationInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_minimumHealthyHostsPerZoneHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firstZoneMonitorDurationInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("firstZoneMonitorDurationInSeconds"));
    (m_firstZoneMonitorDurationInSeconds >= 0) ? encoder.WriteUInt(m_firstZoneMonitorDurationInSeconds)
                                               : encoder.WriteNegInt(m_firstZoneMonitorDurationInSeconds);
  }

  if (m_monitorDurationInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("monitorDurationInSeconds"));
    (m_monitorDurationInSeconds >= 0) ? encoder.WriteUInt(m_monitorDurationInSeconds) : encoder.WriteNegInt(m_monitorDurationInSeconds);
  }

  if (m_minimumHealthyHostsPerZoneHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("minimumHealthyHostsPerZone"));
    m_minimumHealthyHostsPerZone.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws