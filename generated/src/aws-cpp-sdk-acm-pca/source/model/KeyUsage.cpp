/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/KeyUsage.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ACMPCA {
namespace Model {

KeyUsage::KeyUsage(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

KeyUsage& KeyUsage::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DigitalSignature") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_digitalSignature = val.value();
                }
                m_digitalSignatureHasBeenSet = true;
              }

              else if (initialKeyStr == "NonRepudiation") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_nonRepudiation = val.value();
                }
                m_nonRepudiationHasBeenSet = true;
              }

              else if (initialKeyStr == "KeyEncipherment") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_keyEncipherment = val.value();
                }
                m_keyEnciphermentHasBeenSet = true;
              }

              else if (initialKeyStr == "DataEncipherment") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_dataEncipherment = val.value();
                }
                m_dataEnciphermentHasBeenSet = true;
              }

              else if (initialKeyStr == "KeyAgreement") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_keyAgreement = val.value();
                }
                m_keyAgreementHasBeenSet = true;
              }

              else if (initialKeyStr == "KeyCertSign") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_keyCertSign = val.value();
                }
                m_keyCertSignHasBeenSet = true;
              }

              else if (initialKeyStr == "CRLSign") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_cRLSign = val.value();
                }
                m_cRLSignHasBeenSet = true;
              }

              else if (initialKeyStr == "EncipherOnly") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_encipherOnly = val.value();
                }
                m_encipherOnlyHasBeenSet = true;
              }

              else if (initialKeyStr == "DecipherOnly") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_decipherOnly = val.value();
                }
                m_decipherOnlyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("KeyUsage", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DigitalSignature") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_digitalSignature = val.value();
              }
              m_digitalSignatureHasBeenSet = true;
            }

            else if (initialKeyStr == "NonRepudiation") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_nonRepudiation = val.value();
              }
              m_nonRepudiationHasBeenSet = true;
            }

            else if (initialKeyStr == "KeyEncipherment") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_keyEncipherment = val.value();
              }
              m_keyEnciphermentHasBeenSet = true;
            }

            else if (initialKeyStr == "DataEncipherment") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_dataEncipherment = val.value();
              }
              m_dataEnciphermentHasBeenSet = true;
            }

            else if (initialKeyStr == "KeyAgreement") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_keyAgreement = val.value();
              }
              m_keyAgreementHasBeenSet = true;
            }

            else if (initialKeyStr == "KeyCertSign") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_keyCertSign = val.value();
              }
              m_keyCertSignHasBeenSet = true;
            }

            else if (initialKeyStr == "CRLSign") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_cRLSign = val.value();
              }
              m_cRLSignHasBeenSet = true;
            }

            else if (initialKeyStr == "EncipherOnly") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_encipherOnly = val.value();
              }
              m_encipherOnlyHasBeenSet = true;
            }

            else if (initialKeyStr == "DecipherOnly") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_decipherOnly = val.value();
              }
              m_decipherOnlyHasBeenSet = true;
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

void KeyUsage::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_digitalSignatureHasBeenSet) {
    mapSize++;
  }
  if (m_nonRepudiationHasBeenSet) {
    mapSize++;
  }
  if (m_keyEnciphermentHasBeenSet) {
    mapSize++;
  }
  if (m_dataEnciphermentHasBeenSet) {
    mapSize++;
  }
  if (m_keyAgreementHasBeenSet) {
    mapSize++;
  }
  if (m_keyCertSignHasBeenSet) {
    mapSize++;
  }
  if (m_cRLSignHasBeenSet) {
    mapSize++;
  }
  if (m_encipherOnlyHasBeenSet) {
    mapSize++;
  }
  if (m_decipherOnlyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_digitalSignatureHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DigitalSignature"));
    encoder.WriteBool(m_digitalSignature);
  }

  if (m_nonRepudiationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NonRepudiation"));
    encoder.WriteBool(m_nonRepudiation);
  }

  if (m_keyEnciphermentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyEncipherment"));
    encoder.WriteBool(m_keyEncipherment);
  }

  if (m_dataEnciphermentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataEncipherment"));
    encoder.WriteBool(m_dataEncipherment);
  }

  if (m_keyAgreementHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyAgreement"));
    encoder.WriteBool(m_keyAgreement);
  }

  if (m_keyCertSignHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyCertSign"));
    encoder.WriteBool(m_keyCertSign);
  }

  if (m_cRLSignHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CRLSign"));
    encoder.WriteBool(m_cRLSign);
  }

  if (m_encipherOnlyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncipherOnly"));
    encoder.WriteBool(m_encipherOnly);
  }

  if (m_decipherOnlyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DecipherOnly"));
    encoder.WriteBool(m_decipherOnly);
  }
}

}  // namespace Model
}  // namespace ACMPCA
}  // namespace Aws