/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/IntegrationCredential.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

IntegrationCredential::IntegrationCredential(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

IntegrationCredential& IntegrationCredential::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "oauthCodeCredential") {
                m_oauthCodeCredential = OAuthCodeCredential(decoder);
                m_oauthCodeCredentialHasBeenSet = true;
              }

              else if (initialKeyStr == "oauthClientCredential") {
                m_oauthClientCredential = OAuthClientCredential(decoder);
                m_oauthClientCredentialHasBeenSet = true;
              }

              else if (initialKeyStr == "apiKeyCredential") {
                m_apiKeyCredential = ApiKeyCredential(decoder);
                m_apiKeyCredentialHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("IntegrationCredential", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "oauthCodeCredential") {
              m_oauthCodeCredential = OAuthCodeCredential(decoder);
              m_oauthCodeCredentialHasBeenSet = true;
            }

            else if (initialKeyStr == "oauthClientCredential") {
              m_oauthClientCredential = OAuthClientCredential(decoder);
              m_oauthClientCredentialHasBeenSet = true;
            }

            else if (initialKeyStr == "apiKeyCredential") {
              m_apiKeyCredential = ApiKeyCredential(decoder);
              m_apiKeyCredentialHasBeenSet = true;
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

void IntegrationCredential::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_oauthCodeCredentialHasBeenSet) {
    mapSize++;
  }
  if (m_oauthClientCredentialHasBeenSet) {
    mapSize++;
  }
  if (m_apiKeyCredentialHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_oauthCodeCredentialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("oauthCodeCredential"));
    m_oauthCodeCredential.CborEncode(encoder);
  }

  if (m_oauthClientCredentialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("oauthClientCredential"));
    m_oauthClientCredential.CborEncode(encoder);
  }

  if (m_apiKeyCredentialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("apiKeyCredential"));
    m_apiKeyCredential.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws