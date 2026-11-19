/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/WebhookHmacAuthConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

WebhookHmacAuthConfiguration::WebhookHmacAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WebhookHmacAuthConfiguration& WebhookHmacAuthConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Algorithm") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_algorithm = WebhookHmacAlgorithmMapper::GetWebhookHmacAlgorithmForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_algorithmHasBeenSet = true;
              }

              else if (initialKeyStr == "Encoding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_encoding = WebhookHmacEncodingMapper::GetWebhookHmacEncodingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_encodingHasBeenSet = true;
              }

              else if (initialKeyStr == "SignatureHttpHeader") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_signatureHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_signatureHttpHeader = ss.str();
                  }
                }
                m_signatureHttpHeaderHasBeenSet = true;
              }

              else if (initialKeyStr == "SignaturePrefix") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_signaturePrefix = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_signaturePrefix = ss.str();
                  }
                }
                m_signaturePrefixHasBeenSet = true;
              }

              else if (initialKeyStr == "Delimiter") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_delimiter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_delimiter = ss.str();
                  }
                }
                m_delimiterHasBeenSet = true;
              }

              else if (initialKeyStr == "TimestampHttpHeader") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_timestampHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_timestampHttpHeader = ss.str();
                  }
                }
                m_timestampHttpHeaderHasBeenSet = true;
              }

              else if (initialKeyStr == "TimestampPrefix") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_timestampPrefix = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_timestampPrefix = ss.str();
                  }
                }
                m_timestampPrefixHasBeenSet = true;
              }

              else if (initialKeyStr == "TimestampToleranceInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timestampToleranceInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_timestampToleranceInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_timestampToleranceInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "MessageIdHttpHeader") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_messageIdHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_messageIdHttpHeader = ss.str();
                  }
                }
                m_messageIdHttpHeaderHasBeenSet = true;
              }

              else if (initialKeyStr == "SignedMessageComposition") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_signedMessageComposition = WebhookSignedMessageCompositionMapper::GetWebhookSignedMessageCompositionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_signedMessageCompositionHasBeenSet = true;
              }

              else if (initialKeyStr == "SecretValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_secretValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_secretValue = ss.str();
                  }
                }
                m_secretValueHasBeenSet = true;
              }

              else if (initialKeyStr == "SecretEncoding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_secretEncoding = WebhookSecretEncodingMapper::GetWebhookSecretEncodingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_secretEncodingHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WebhookHmacAuthConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Algorithm") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_algorithm = WebhookHmacAlgorithmMapper::GetWebhookHmacAlgorithmForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_algorithmHasBeenSet = true;
            }

            else if (initialKeyStr == "Encoding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_encoding = WebhookHmacEncodingMapper::GetWebhookHmacEncodingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_encodingHasBeenSet = true;
            }

            else if (initialKeyStr == "SignatureHttpHeader") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_signatureHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_signatureHttpHeader = ss.str();
                }
              }
              m_signatureHttpHeaderHasBeenSet = true;
            }

            else if (initialKeyStr == "SignaturePrefix") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_signaturePrefix = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_signaturePrefix = ss.str();
                }
              }
              m_signaturePrefixHasBeenSet = true;
            }

            else if (initialKeyStr == "Delimiter") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_delimiter = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_delimiter = ss.str();
                }
              }
              m_delimiterHasBeenSet = true;
            }

            else if (initialKeyStr == "TimestampHttpHeader") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_timestampHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_timestampHttpHeader = ss.str();
                }
              }
              m_timestampHttpHeaderHasBeenSet = true;
            }

            else if (initialKeyStr == "TimestampPrefix") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_timestampPrefix = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_timestampPrefix = ss.str();
                }
              }
              m_timestampPrefixHasBeenSet = true;
            }

            else if (initialKeyStr == "TimestampToleranceInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_timestampToleranceInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_timestampToleranceInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_timestampToleranceInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "MessageIdHttpHeader") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_messageIdHttpHeader = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_messageIdHttpHeader = ss.str();
                }
              }
              m_messageIdHttpHeaderHasBeenSet = true;
            }

            else if (initialKeyStr == "SignedMessageComposition") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_signedMessageComposition = WebhookSignedMessageCompositionMapper::GetWebhookSignedMessageCompositionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_signedMessageCompositionHasBeenSet = true;
            }

            else if (initialKeyStr == "SecretValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_secretValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_secretValue = ss.str();
                }
              }
              m_secretValueHasBeenSet = true;
            }

            else if (initialKeyStr == "SecretEncoding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_secretEncoding = WebhookSecretEncodingMapper::GetWebhookSecretEncodingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_secretEncodingHasBeenSet = true;
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

void WebhookHmacAuthConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_algorithmHasBeenSet) {
    mapSize++;
  }
  if (m_encodingHasBeenSet) {
    mapSize++;
  }
  if (m_signatureHttpHeaderHasBeenSet) {
    mapSize++;
  }
  if (m_signaturePrefixHasBeenSet) {
    mapSize++;
  }
  if (m_delimiterHasBeenSet) {
    mapSize++;
  }
  if (m_timestampHttpHeaderHasBeenSet) {
    mapSize++;
  }
  if (m_timestampPrefixHasBeenSet) {
    mapSize++;
  }
  if (m_timestampToleranceInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_messageIdHttpHeaderHasBeenSet) {
    mapSize++;
  }
  if (m_signedMessageCompositionHasBeenSet) {
    mapSize++;
  }
  if (m_secretValueHasBeenSet) {
    mapSize++;
  }
  if (m_secretEncodingHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_algorithmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Algorithm"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WebhookHmacAlgorithmMapper::GetNameForWebhookHmacAlgorithm(m_algorithm).c_str()));
  }

  if (m_encodingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Encoding"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WebhookHmacEncodingMapper::GetNameForWebhookHmacEncoding(m_encoding).c_str()));
  }

  if (m_signatureHttpHeaderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SignatureHttpHeader"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_signatureHttpHeader.c_str()));
  }

  if (m_signaturePrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SignaturePrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_signaturePrefix.c_str()));
  }

  if (m_delimiterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Delimiter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_delimiter.c_str()));
  }

  if (m_timestampHttpHeaderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimestampHttpHeader"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_timestampHttpHeader.c_str()));
  }

  if (m_timestampPrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimestampPrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_timestampPrefix.c_str()));
  }

  if (m_timestampToleranceInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimestampToleranceInSeconds"));
    (m_timestampToleranceInSeconds >= 0) ? encoder.WriteUInt(m_timestampToleranceInSeconds)
                                         : encoder.WriteNegInt(m_timestampToleranceInSeconds);
  }

  if (m_messageIdHttpHeaderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MessageIdHttpHeader"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_messageIdHttpHeader.c_str()));
  }

  if (m_signedMessageCompositionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SignedMessageComposition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        WebhookSignedMessageCompositionMapper::GetNameForWebhookSignedMessageComposition(m_signedMessageComposition).c_str()));
  }

  if (m_secretValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecretValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_secretValue.c_str()));
  }

  if (m_secretEncodingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecretEncoding"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(WebhookSecretEncodingMapper::GetNameForWebhookSecretEncoding(m_secretEncoding).c_str()));
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws