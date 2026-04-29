/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/ContainerPortMapping.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

ContainerPortMapping::ContainerPortMapping(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ContainerPortMapping& ContainerPortMapping::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ContainerPort") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_containerPort = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_containerPort = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_containerPortHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectionPort") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_connectionPort = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_connectionPort = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_connectionPortHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocol") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_protocol =
                      IpProtocolMapper::GetIpProtocolForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_protocolHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ContainerPortMapping", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ContainerPort") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_containerPort = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_containerPort = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_containerPortHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectionPort") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_connectionPort = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_connectionPort = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_connectionPortHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocol") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_protocol =
                    IpProtocolMapper::GetIpProtocolForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_protocolHasBeenSet = true;
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

void ContainerPortMapping::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_containerPortHasBeenSet) {
    mapSize++;
  }
  if (m_connectionPortHasBeenSet) {
    mapSize++;
  }
  if (m_protocolHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_containerPortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerPort"));
    (m_containerPort >= 0) ? encoder.WriteUInt(m_containerPort) : encoder.WriteNegInt(m_containerPort);
  }

  if (m_connectionPortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionPort"));
    (m_connectionPort >= 0) ? encoder.WriteUInt(m_connectionPort) : encoder.WriteNegInt(m_connectionPort);
  }

  if (m_protocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IpProtocolMapper::GetNameForIpProtocol(m_protocol).c_str()));
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws