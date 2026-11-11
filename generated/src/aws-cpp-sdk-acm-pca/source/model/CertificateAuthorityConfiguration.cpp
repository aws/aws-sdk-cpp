/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ACMPCA {
namespace Model {

CertificateAuthorityConfiguration::CertificateAuthorityConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

CertificateAuthorityConfiguration& CertificateAuthorityConfiguration::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "KeyAlgorithm") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_keyAlgorithmHasBeenSet = true;
              }

              else if (initialKeyStr == "SigningAlgorithm") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_signingAlgorithm = SigningAlgorithmMapper::GetSigningAlgorithmForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_signingAlgorithmHasBeenSet = true;
              }

              else if (initialKeyStr == "Subject") {
                m_subject = ASN1Subject(decoder);
                m_subjectHasBeenSet = true;
              }

              else if (initialKeyStr == "CsrExtensions") {
                m_csrExtensions = CsrExtensions(decoder);
                m_csrExtensionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CertificateAuthorityConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "KeyAlgorithm") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_keyAlgorithmHasBeenSet = true;
            }

            else if (initialKeyStr == "SigningAlgorithm") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_signingAlgorithm = SigningAlgorithmMapper::GetSigningAlgorithmForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_signingAlgorithmHasBeenSet = true;
            }

            else if (initialKeyStr == "Subject") {
              m_subject = ASN1Subject(decoder);
              m_subjectHasBeenSet = true;
            }

            else if (initialKeyStr == "CsrExtensions") {
              m_csrExtensions = CsrExtensions(decoder);
              m_csrExtensionsHasBeenSet = true;
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

void CertificateAuthorityConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_keyAlgorithmHasBeenSet) {
    mapSize++;
  }
  if (m_signingAlgorithmHasBeenSet) {
    mapSize++;
  }
  if (m_subjectHasBeenSet) {
    mapSize++;
  }
  if (m_csrExtensionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_keyAlgorithmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyAlgorithm"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm).c_str()));
  }

  if (m_signingAlgorithmHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SigningAlgorithm"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SigningAlgorithmMapper::GetNameForSigningAlgorithm(m_signingAlgorithm).c_str()));
  }

  if (m_subjectHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subject"));
    m_subject.CborEncode(encoder);
  }

  if (m_csrExtensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CsrExtensions"));
    m_csrExtensions.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ACMPCA
}  // namespace Aws