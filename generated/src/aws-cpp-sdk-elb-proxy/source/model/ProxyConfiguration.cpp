/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/model/ProxyConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {

ProxyConfiguration::ProxyConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProxyConfiguration& ProxyConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "configurationFile") {
                m_configurationFile = ConfigurationFile(decoder);
                m_configurationFileHasBeenSet = true;
              }

              else if (initialKeyStr == "configurationArchive") {
                m_configurationArchive = ConfigurationArchive(decoder);
                m_configurationArchiveHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProxyConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "configurationFile") {
              m_configurationFile = ConfigurationFile(decoder);
              m_configurationFileHasBeenSet = true;
            }

            else if (initialKeyStr == "configurationArchive") {
              m_configurationArchive = ConfigurationArchive(decoder);
              m_configurationArchiveHasBeenSet = true;
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

void ProxyConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_configurationFileHasBeenSet) {
    mapSize++;
  }
  if (m_configurationArchiveHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_configurationFileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationFile"));
    m_configurationFile.CborEncode(encoder);
  }

  if (m_configurationArchiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationArchive"));
    m_configurationArchive.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws