/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/NetworkConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

NetworkConfiguration::NetworkConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

NetworkConfiguration& NetworkConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PublicNetworkConfiguration") {
                m_publicNetworkConfiguration = PublicNetworkConfiguration(decoder);
                m_publicNetworkConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "PrivateNetworkConfiguration") {
                m_privateNetworkConfiguration = PrivateNetworkConfiguration(decoder);
                m_privateNetworkConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("NetworkConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PublicNetworkConfiguration") {
              m_publicNetworkConfiguration = PublicNetworkConfiguration(decoder);
              m_publicNetworkConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "PrivateNetworkConfiguration") {
              m_privateNetworkConfiguration = PrivateNetworkConfiguration(decoder);
              m_privateNetworkConfigurationHasBeenSet = true;
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

void NetworkConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_publicNetworkConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_privateNetworkConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_publicNetworkConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublicNetworkConfiguration"));
    m_publicNetworkConfiguration.CborEncode(encoder);
  }

  if (m_privateNetworkConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivateNetworkConfiguration"));
    m_privateNetworkConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws