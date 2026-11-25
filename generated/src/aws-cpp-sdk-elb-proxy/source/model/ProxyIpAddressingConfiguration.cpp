/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/model/ProxyIpAddressingConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {

ProxyIpAddressingConfiguration::ProxyIpAddressingConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

ProxyIpAddressingConfiguration& ProxyIpAddressingConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ipv4Addressability") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_ipv4Addressability = ProxyIpv4AddressabilityMapper::GetProxyIpv4AddressabilityForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_ipv4AddressabilityHasBeenSet = true;
              }

              else if (initialKeyStr == "ipv6Addressability") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_ipv6Addressability = ProxyIpv6AddressabilityMapper::GetProxyIpv6AddressabilityForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_ipv6AddressabilityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProxyIpAddressingConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ipv4Addressability") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_ipv4Addressability = ProxyIpv4AddressabilityMapper::GetProxyIpv4AddressabilityForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_ipv4AddressabilityHasBeenSet = true;
            }

            else if (initialKeyStr == "ipv6Addressability") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_ipv6Addressability = ProxyIpv6AddressabilityMapper::GetProxyIpv6AddressabilityForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_ipv6AddressabilityHasBeenSet = true;
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

void ProxyIpAddressingConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ipv4AddressabilityHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6AddressabilityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ipv4AddressabilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ipv4Addressability"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProxyIpv4AddressabilityMapper::GetNameForProxyIpv4Addressability(m_ipv4Addressability).c_str()));
  }

  if (m_ipv6AddressabilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ipv6Addressability"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProxyIpv6AddressabilityMapper::GetNameForProxyIpv6Addressability(m_ipv6Addressability).c_str()));
  }
}

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws