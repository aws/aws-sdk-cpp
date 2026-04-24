/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/EC2InstanceCounts.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

EC2InstanceCounts::EC2InstanceCounts(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EC2InstanceCounts& EC2InstanceCounts::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DESIRED") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_dESIRED = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_dESIRED = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_dESIREDHasBeenSet = true;
              }

              else if (initialKeyStr == "MINIMUM") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_mINIMUM = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_mINIMUM = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_mINIMUMHasBeenSet = true;
              }

              else if (initialKeyStr == "MAXIMUM") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_mAXIMUM = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_mAXIMUM = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_mAXIMUMHasBeenSet = true;
              }

              else if (initialKeyStr == "PENDING") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pENDING = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pENDING = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pENDINGHasBeenSet = true;
              }

              else if (initialKeyStr == "ACTIVE") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_aCTIVE = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_aCTIVE = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_aCTIVEHasBeenSet = true;
              }

              else if (initialKeyStr == "IDLE") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_iDLE = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_iDLE = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_iDLEHasBeenSet = true;
              }

              else if (initialKeyStr == "TERMINATING") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_tERMINATING = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_tERMINATING = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_tERMINATINGHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EC2InstanceCounts", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DESIRED") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_dESIRED = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_dESIRED = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_dESIREDHasBeenSet = true;
            }

            else if (initialKeyStr == "MINIMUM") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_mINIMUM = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_mINIMUM = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_mINIMUMHasBeenSet = true;
            }

            else if (initialKeyStr == "MAXIMUM") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_mAXIMUM = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_mAXIMUM = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_mAXIMUMHasBeenSet = true;
            }

            else if (initialKeyStr == "PENDING") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pENDING = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pENDING = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pENDINGHasBeenSet = true;
            }

            else if (initialKeyStr == "ACTIVE") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_aCTIVE = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_aCTIVE = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_aCTIVEHasBeenSet = true;
            }

            else if (initialKeyStr == "IDLE") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_iDLE = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_iDLE = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_iDLEHasBeenSet = true;
            }

            else if (initialKeyStr == "TERMINATING") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_tERMINATING = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_tERMINATING = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_tERMINATINGHasBeenSet = true;
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

void EC2InstanceCounts::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_dESIREDHasBeenSet) {
    mapSize++;
  }
  if (m_mINIMUMHasBeenSet) {
    mapSize++;
  }
  if (m_mAXIMUMHasBeenSet) {
    mapSize++;
  }
  if (m_pENDINGHasBeenSet) {
    mapSize++;
  }
  if (m_aCTIVEHasBeenSet) {
    mapSize++;
  }
  if (m_iDLEHasBeenSet) {
    mapSize++;
  }
  if (m_tERMINATINGHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_dESIREDHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DESIRED"));
    (m_dESIRED >= 0) ? encoder.WriteUInt(m_dESIRED) : encoder.WriteNegInt(m_dESIRED);
  }

  if (m_mINIMUMHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MINIMUM"));
    (m_mINIMUM >= 0) ? encoder.WriteUInt(m_mINIMUM) : encoder.WriteNegInt(m_mINIMUM);
  }

  if (m_mAXIMUMHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MAXIMUM"));
    (m_mAXIMUM >= 0) ? encoder.WriteUInt(m_mAXIMUM) : encoder.WriteNegInt(m_mAXIMUM);
  }

  if (m_pENDINGHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PENDING"));
    (m_pENDING >= 0) ? encoder.WriteUInt(m_pENDING) : encoder.WriteNegInt(m_pENDING);
  }

  if (m_aCTIVEHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ACTIVE"));
    (m_aCTIVE >= 0) ? encoder.WriteUInt(m_aCTIVE) : encoder.WriteNegInt(m_aCTIVE);
  }

  if (m_iDLEHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IDLE"));
    (m_iDLE >= 0) ? encoder.WriteUInt(m_iDLE) : encoder.WriteNegInt(m_iDLE);
  }

  if (m_tERMINATINGHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TERMINATING"));
    (m_tERMINATING >= 0) ? encoder.WriteUInt(m_tERMINATING) : encoder.WriteNegInt(m_tERMINATING);
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws