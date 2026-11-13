/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/ManifestConfig.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

ManifestConfig::ManifestConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ManifestConfig& ManifestConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Action") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_action = ManifestActionMapper::GetManifestActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_actionHasBeenSet = true;
              }

              else if (initialKeyStr == "Format") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_format = ManifestFormatMapper::GetManifestFormatForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_formatHasBeenSet = true;
              }

              else if (initialKeyStr == "Source") {
                m_source = SourceManifestConfig(decoder);
                m_sourceHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ManifestConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Action") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_action = ManifestActionMapper::GetManifestActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_actionHasBeenSet = true;
            }

            else if (initialKeyStr == "Format") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_format = ManifestFormatMapper::GetManifestFormatForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_formatHasBeenSet = true;
            }

            else if (initialKeyStr == "Source") {
              m_source = SourceManifestConfig(decoder);
              m_sourceHasBeenSet = true;
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

void ManifestConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_actionHasBeenSet) {
    mapSize++;
  }
  if (m_formatHasBeenSet) {
    mapSize++;
  }
  if (m_sourceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_actionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Action"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ManifestActionMapper::GetNameForManifestAction(m_action).c_str()));
  }

  if (m_formatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Format"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ManifestFormatMapper::GetNameForManifestFormat(m_format).c_str()));
  }

  if (m_sourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Source"));
    m_source.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws