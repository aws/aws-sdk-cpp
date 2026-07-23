/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImagePermissions.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

ImagePermissions::ImagePermissions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ImagePermissions& ImagePermissions::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "allowFleet") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_allowFleet = val.value();
                }
                m_allowFleetHasBeenSet = true;
              }

              else if (initialKeyStr == "allowImageBuilder") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_allowImageBuilder = val.value();
                }
                m_allowImageBuilderHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ImagePermissions", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "allowFleet") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_allowFleet = val.value();
              }
              m_allowFleetHasBeenSet = true;
            }

            else if (initialKeyStr == "allowImageBuilder") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_allowImageBuilder = val.value();
              }
              m_allowImageBuilderHasBeenSet = true;
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

void ImagePermissions::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_allowFleetHasBeenSet) {
    mapSize++;
  }
  if (m_allowImageBuilderHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_allowFleetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("allowFleet"));
    encoder.WriteBool(m_allowFleet);
  }

  if (m_allowImageBuilderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("allowImageBuilder"));
    encoder.WriteBool(m_allowImageBuilder);
  }
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws