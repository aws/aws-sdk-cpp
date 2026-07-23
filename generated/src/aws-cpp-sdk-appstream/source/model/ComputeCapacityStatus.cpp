/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

ComputeCapacityStatus::ComputeCapacityStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ComputeCapacityStatus& ComputeCapacityStatus::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Desired") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_desired = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_desired = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_desiredHasBeenSet = true;
              }

              else if (initialKeyStr == "Running") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_running = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_running = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_runningHasBeenSet = true;
              }

              else if (initialKeyStr == "InUse") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_inUse = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_inUse = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_inUseHasBeenSet = true;
              }

              else if (initialKeyStr == "Available") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_available = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_available = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_availableHasBeenSet = true;
              }

              else if (initialKeyStr == "DesiredUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_desiredUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_desiredUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_desiredUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "AvailableUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_availableUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_availableUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_availableUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "ActiveUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_activeUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_activeUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_activeUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "ActualUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_actualUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_actualUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_actualUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "Draining") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_draining = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_draining = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_drainingHasBeenSet = true;
              }

              else if (initialKeyStr == "DrainModeActiveUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_drainModeActiveUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_drainModeActiveUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_drainModeActiveUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "DrainModeUnusedUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_drainModeUnusedUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_drainModeUnusedUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_drainModeUnusedUserSessionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ComputeCapacityStatus", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Desired") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_desired = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_desired = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_desiredHasBeenSet = true;
            }

            else if (initialKeyStr == "Running") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_running = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_running = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_runningHasBeenSet = true;
            }

            else if (initialKeyStr == "InUse") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_inUse = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_inUse = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_inUseHasBeenSet = true;
            }

            else if (initialKeyStr == "Available") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_available = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_available = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_availableHasBeenSet = true;
            }

            else if (initialKeyStr == "DesiredUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_desiredUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_desiredUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_desiredUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "AvailableUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_availableUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_availableUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_availableUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "ActiveUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_activeUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_activeUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_activeUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "ActualUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_actualUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_actualUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_actualUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "Draining") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_draining = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_draining = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_drainingHasBeenSet = true;
            }

            else if (initialKeyStr == "DrainModeActiveUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_drainModeActiveUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_drainModeActiveUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_drainModeActiveUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "DrainModeUnusedUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_drainModeUnusedUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_drainModeUnusedUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_drainModeUnusedUserSessionsHasBeenSet = true;
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

void ComputeCapacityStatus::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_desiredHasBeenSet) {
    mapSize++;
  }
  if (m_runningHasBeenSet) {
    mapSize++;
  }
  if (m_inUseHasBeenSet) {
    mapSize++;
  }
  if (m_availableHasBeenSet) {
    mapSize++;
  }
  if (m_desiredUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_availableUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_activeUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_actualUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_drainingHasBeenSet) {
    mapSize++;
  }
  if (m_drainModeActiveUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_drainModeUnusedUserSessionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_desiredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Desired"));
    (m_desired >= 0) ? encoder.WriteUInt(m_desired) : encoder.WriteNegInt(m_desired);
  }

  if (m_runningHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Running"));
    (m_running >= 0) ? encoder.WriteUInt(m_running) : encoder.WriteNegInt(m_running);
  }

  if (m_inUseHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InUse"));
    (m_inUse >= 0) ? encoder.WriteUInt(m_inUse) : encoder.WriteNegInt(m_inUse);
  }

  if (m_availableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Available"));
    (m_available >= 0) ? encoder.WriteUInt(m_available) : encoder.WriteNegInt(m_available);
  }

  if (m_desiredUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredUserSessions"));
    (m_desiredUserSessions >= 0) ? encoder.WriteUInt(m_desiredUserSessions) : encoder.WriteNegInt(m_desiredUserSessions);
  }

  if (m_availableUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailableUserSessions"));
    (m_availableUserSessions >= 0) ? encoder.WriteUInt(m_availableUserSessions) : encoder.WriteNegInt(m_availableUserSessions);
  }

  if (m_activeUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActiveUserSessions"));
    (m_activeUserSessions >= 0) ? encoder.WriteUInt(m_activeUserSessions) : encoder.WriteNegInt(m_activeUserSessions);
  }

  if (m_actualUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActualUserSessions"));
    (m_actualUserSessions >= 0) ? encoder.WriteUInt(m_actualUserSessions) : encoder.WriteNegInt(m_actualUserSessions);
  }

  if (m_drainingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Draining"));
    (m_draining >= 0) ? encoder.WriteUInt(m_draining) : encoder.WriteNegInt(m_draining);
  }

  if (m_drainModeActiveUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DrainModeActiveUserSessions"));
    (m_drainModeActiveUserSessions >= 0) ? encoder.WriteUInt(m_drainModeActiveUserSessions)
                                         : encoder.WriteNegInt(m_drainModeActiveUserSessions);
  }

  if (m_drainModeUnusedUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DrainModeUnusedUserSessions"));
    (m_drainModeUnusedUserSessions >= 0) ? encoder.WriteUInt(m_drainModeUnusedUserSessions)
                                         : encoder.WriteNegInt(m_drainModeUnusedUserSessions);
  }
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws