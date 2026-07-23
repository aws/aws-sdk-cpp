/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/MaintenanceStartTime.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace BackupGateway {
namespace Model {

MaintenanceStartTime::MaintenanceStartTime(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MaintenanceStartTime& MaintenanceStartTime::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DayOfMonth") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_dayOfMonth = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_dayOfMonth = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_dayOfMonthHasBeenSet = true;
              }

              else if (initialKeyStr == "DayOfWeek") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_dayOfWeek = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_dayOfWeek = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_dayOfWeekHasBeenSet = true;
              }

              else if (initialKeyStr == "HourOfDay") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_hourOfDay = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_hourOfDay = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_hourOfDayHasBeenSet = true;
              }

              else if (initialKeyStr == "MinuteOfHour") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_minuteOfHour = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_minuteOfHour = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_minuteOfHourHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MaintenanceStartTime", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DayOfMonth") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_dayOfMonth = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_dayOfMonth = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_dayOfMonthHasBeenSet = true;
            }

            else if (initialKeyStr == "DayOfWeek") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_dayOfWeek = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_dayOfWeek = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_dayOfWeekHasBeenSet = true;
            }

            else if (initialKeyStr == "HourOfDay") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_hourOfDay = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_hourOfDay = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_hourOfDayHasBeenSet = true;
            }

            else if (initialKeyStr == "MinuteOfHour") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_minuteOfHour = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_minuteOfHour = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_minuteOfHourHasBeenSet = true;
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

void MaintenanceStartTime::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_dayOfMonthHasBeenSet) {
    mapSize++;
  }
  if (m_dayOfWeekHasBeenSet) {
    mapSize++;
  }
  if (m_hourOfDayHasBeenSet) {
    mapSize++;
  }
  if (m_minuteOfHourHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_dayOfMonthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DayOfMonth"));
    (m_dayOfMonth >= 0) ? encoder.WriteUInt(m_dayOfMonth) : encoder.WriteNegInt(m_dayOfMonth);
  }

  if (m_dayOfWeekHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DayOfWeek"));
    (m_dayOfWeek >= 0) ? encoder.WriteUInt(m_dayOfWeek) : encoder.WriteNegInt(m_dayOfWeek);
  }

  if (m_hourOfDayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HourOfDay"));
    (m_hourOfDay >= 0) ? encoder.WriteUInt(m_hourOfDay) : encoder.WriteNegInt(m_hourOfDay);
  }

  if (m_minuteOfHourHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MinuteOfHour"));
    (m_minuteOfHour >= 0) ? encoder.WriteUInt(m_minuteOfHour) : encoder.WriteNegInt(m_minuteOfHour);
  }
}

}  // namespace Model
}  // namespace BackupGateway
}  // namespace Aws