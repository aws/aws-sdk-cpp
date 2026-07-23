/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace BackupGateway {
namespace Model {

BandwidthRateLimitInterval::BandwidthRateLimitInterval(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

BandwidthRateLimitInterval& BandwidthRateLimitInterval::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AverageUploadRateLimitInBitsPerSec") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_averageUploadRateLimitInBitsPerSec = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_averageUploadRateLimitInBitsPerSec = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_averageUploadRateLimitInBitsPerSecHasBeenSet = true;
              }

              else if (initialKeyStr == "StartHourOfDay") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startHourOfDay = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_startHourOfDay = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_startHourOfDayHasBeenSet = true;
              }

              else if (initialKeyStr == "EndHourOfDay") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_endHourOfDay = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_endHourOfDay = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_endHourOfDayHasBeenSet = true;
              }

              else if (initialKeyStr == "StartMinuteOfHour") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startMinuteOfHour = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_startMinuteOfHour = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_startMinuteOfHourHasBeenSet = true;
              }

              else if (initialKeyStr == "EndMinuteOfHour") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_endMinuteOfHour = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_endMinuteOfHour = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_endMinuteOfHourHasBeenSet = true;
              }

              else if (initialKeyStr == "DaysOfWeek") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_daysOfWeek.push_back(static_cast<int64_t>(val.value()));
                            }
                          } else {
                            auto val = decoder->PopNextNegativeIntVal();
                            if (val.has_value()) {
                              m_daysOfWeek.push_back(static_cast<int64_t>(1 - val.value()));
                            }
                          }
                        }
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_daysOfWeek.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_daysOfWeek.push_back(static_cast<int64_t>(1 - val.value()));
                          }
                        }
                      }
                    }
                  }
                }
                m_daysOfWeekHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("BandwidthRateLimitInterval", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AverageUploadRateLimitInBitsPerSec") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_averageUploadRateLimitInBitsPerSec = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_averageUploadRateLimitInBitsPerSec = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_averageUploadRateLimitInBitsPerSecHasBeenSet = true;
            }

            else if (initialKeyStr == "StartHourOfDay") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_startHourOfDay = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_startHourOfDay = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_startHourOfDayHasBeenSet = true;
            }

            else if (initialKeyStr == "EndHourOfDay") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_endHourOfDay = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_endHourOfDay = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_endHourOfDayHasBeenSet = true;
            }

            else if (initialKeyStr == "StartMinuteOfHour") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_startMinuteOfHour = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_startMinuteOfHour = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_startMinuteOfHourHasBeenSet = true;
            }

            else if (initialKeyStr == "EndMinuteOfHour") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_endMinuteOfHour = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_endMinuteOfHour = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_endMinuteOfHourHasBeenSet = true;
            }

            else if (initialKeyStr == "DaysOfWeek") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_daysOfWeek.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_daysOfWeek.push_back(static_cast<int64_t>(1 - val.value()));
                          }
                        }
                      }
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                        auto val = decoder->PopNextUnsignedIntVal();
                        if (val.has_value()) {
                          m_daysOfWeek.push_back(static_cast<int64_t>(val.value()));
                        }
                      } else {
                        auto val = decoder->PopNextNegativeIntVal();
                        if (val.has_value()) {
                          m_daysOfWeek.push_back(static_cast<int64_t>(1 - val.value()));
                        }
                      }
                    }
                  }
                }
              }
              m_daysOfWeekHasBeenSet = true;
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

void BandwidthRateLimitInterval::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_averageUploadRateLimitInBitsPerSecHasBeenSet) {
    mapSize++;
  }
  if (m_startHourOfDayHasBeenSet) {
    mapSize++;
  }
  if (m_endHourOfDayHasBeenSet) {
    mapSize++;
  }
  if (m_startMinuteOfHourHasBeenSet) {
    mapSize++;
  }
  if (m_endMinuteOfHourHasBeenSet) {
    mapSize++;
  }
  if (m_daysOfWeekHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_averageUploadRateLimitInBitsPerSecHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AverageUploadRateLimitInBitsPerSec"));
    (m_averageUploadRateLimitInBitsPerSec >= 0) ? encoder.WriteUInt(m_averageUploadRateLimitInBitsPerSec)
                                                : encoder.WriteNegInt(m_averageUploadRateLimitInBitsPerSec);
  }

  if (m_startHourOfDayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartHourOfDay"));
    (m_startHourOfDay >= 0) ? encoder.WriteUInt(m_startHourOfDay) : encoder.WriteNegInt(m_startHourOfDay);
  }

  if (m_endHourOfDayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndHourOfDay"));
    (m_endHourOfDay >= 0) ? encoder.WriteUInt(m_endHourOfDay) : encoder.WriteNegInt(m_endHourOfDay);
  }

  if (m_startMinuteOfHourHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartMinuteOfHour"));
    (m_startMinuteOfHour >= 0) ? encoder.WriteUInt(m_startMinuteOfHour) : encoder.WriteNegInt(m_startMinuteOfHour);
  }

  if (m_endMinuteOfHourHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndMinuteOfHour"));
    (m_endMinuteOfHour >= 0) ? encoder.WriteUInt(m_endMinuteOfHour) : encoder.WriteNegInt(m_endMinuteOfHour);
  }

  if (m_daysOfWeekHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DaysOfWeek"));
    encoder.WriteArrayStart(m_daysOfWeek.size());
    for (const auto& item_0 : m_daysOfWeek) {
      (item_0 >= 0) ? encoder.WriteUInt(item_0) : encoder.WriteNegInt(item_0);
    }
  }
}

}  // namespace Model
}  // namespace BackupGateway
}  // namespace Aws