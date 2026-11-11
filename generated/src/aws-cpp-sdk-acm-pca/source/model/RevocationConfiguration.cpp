/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ACMPCA {
namespace Model {

RevocationConfiguration::RevocationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RevocationConfiguration& RevocationConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "CrlConfiguration") {
                m_crlConfiguration = CrlConfiguration(decoder);
                m_crlConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "OcspConfiguration") {
                m_ocspConfiguration = OcspConfiguration(decoder);
                m_ocspConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RevocationConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "CrlConfiguration") {
              m_crlConfiguration = CrlConfiguration(decoder);
              m_crlConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "OcspConfiguration") {
              m_ocspConfiguration = OcspConfiguration(decoder);
              m_ocspConfigurationHasBeenSet = true;
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

void RevocationConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_crlConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_ocspConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_crlConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CrlConfiguration"));
    m_crlConfiguration.CborEncode(encoder);
  }

  if (m_ocspConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OcspConfiguration"));
    m_ocspConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ACMPCA
}  // namespace Aws