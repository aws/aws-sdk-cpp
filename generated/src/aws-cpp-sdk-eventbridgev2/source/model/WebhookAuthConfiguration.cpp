/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/WebhookAuthConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

WebhookAuthConfiguration::WebhookAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WebhookAuthConfiguration& WebhookAuthConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StaticTokenAuthConfiguration") {
                m_staticTokenAuthConfiguration = WebhookStaticTokenAuthConfiguration(decoder);
                m_staticTokenAuthConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "BasicHttpAuthConfiguration") {
                m_basicHttpAuthConfiguration = WebhookBasicHttpAuthConfiguration(decoder);
                m_basicHttpAuthConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "HmacAuthConfiguration") {
                m_hmacAuthConfiguration = WebhookHmacAuthConfiguration(decoder);
                m_hmacAuthConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WebhookAuthConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StaticTokenAuthConfiguration") {
              m_staticTokenAuthConfiguration = WebhookStaticTokenAuthConfiguration(decoder);
              m_staticTokenAuthConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "BasicHttpAuthConfiguration") {
              m_basicHttpAuthConfiguration = WebhookBasicHttpAuthConfiguration(decoder);
              m_basicHttpAuthConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "HmacAuthConfiguration") {
              m_hmacAuthConfiguration = WebhookHmacAuthConfiguration(decoder);
              m_hmacAuthConfigurationHasBeenSet = true;
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

void WebhookAuthConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_staticTokenAuthConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_basicHttpAuthConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_hmacAuthConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_staticTokenAuthConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StaticTokenAuthConfiguration"));
    m_staticTokenAuthConfiguration.CborEncode(encoder);
  }

  if (m_basicHttpAuthConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BasicHttpAuthConfiguration"));
    m_basicHttpAuthConfiguration.CborEncode(encoder);
  }

  if (m_hmacAuthConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HmacAuthConfiguration"));
    m_hmacAuthConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws