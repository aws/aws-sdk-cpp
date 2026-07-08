/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/IngressPointAuthConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

IngressPointAuthConfiguration::IngressPointAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

IngressPointAuthConfiguration& IngressPointAuthConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "IngressPointPasswordConfiguration") {
                m_ingressPointPasswordConfiguration = IngressPointPasswordConfiguration(decoder);
                m_ingressPointPasswordConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "SecretArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_secretArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_secretArn = ss.str();
                  }
                }
                m_secretArnHasBeenSet = true;
              }

              else if (initialKeyStr == "TlsAuthConfiguration") {
                m_tlsAuthConfiguration = TlsAuthConfiguration(decoder);
                m_tlsAuthConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("IngressPointAuthConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "IngressPointPasswordConfiguration") {
              m_ingressPointPasswordConfiguration = IngressPointPasswordConfiguration(decoder);
              m_ingressPointPasswordConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "SecretArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_secretArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_secretArn = ss.str();
                }
              }
              m_secretArnHasBeenSet = true;
            }

            else if (initialKeyStr == "TlsAuthConfiguration") {
              m_tlsAuthConfiguration = TlsAuthConfiguration(decoder);
              m_tlsAuthConfigurationHasBeenSet = true;
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

void IngressPointAuthConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ingressPointPasswordConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_secretArnHasBeenSet) {
    mapSize++;
  }
  if (m_tlsAuthConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ingressPointPasswordConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IngressPointPasswordConfiguration"));
    m_ingressPointPasswordConfiguration.CborEncode(encoder);
  }

  if (m_secretArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecretArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_secretArn.c_str()));
  }

  if (m_tlsAuthConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsAuthConfiguration"));
    m_tlsAuthConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws