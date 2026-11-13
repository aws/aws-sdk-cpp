/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetEntityRecognizerInputDataConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

DatasetEntityRecognizerInputDataConfig::DatasetEntityRecognizerInputDataConfig(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

DatasetEntityRecognizerInputDataConfig& DatasetEntityRecognizerInputDataConfig::operator=(
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

              if (initialKeyStr == "Annotations") {
                m_annotations = DatasetEntityRecognizerAnnotations(decoder);
                m_annotationsHasBeenSet = true;
              }

              else if (initialKeyStr == "Documents") {
                m_documents = DatasetEntityRecognizerDocuments(decoder);
                m_documentsHasBeenSet = true;
              }

              else if (initialKeyStr == "EntityList") {
                m_entityList = DatasetEntityRecognizerEntityList(decoder);
                m_entityListHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DatasetEntityRecognizerInputDataConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Annotations") {
              m_annotations = DatasetEntityRecognizerAnnotations(decoder);
              m_annotationsHasBeenSet = true;
            }

            else if (initialKeyStr == "Documents") {
              m_documents = DatasetEntityRecognizerDocuments(decoder);
              m_documentsHasBeenSet = true;
            }

            else if (initialKeyStr == "EntityList") {
              m_entityList = DatasetEntityRecognizerEntityList(decoder);
              m_entityListHasBeenSet = true;
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

void DatasetEntityRecognizerInputDataConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_annotationsHasBeenSet) {
    mapSize++;
  }
  if (m_documentsHasBeenSet) {
    mapSize++;
  }
  if (m_entityListHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_annotationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Annotations"));
    m_annotations.CborEncode(encoder);
  }

  if (m_documentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Documents"));
    m_documents.CborEncode(encoder);
  }

  if (m_entityListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityList"));
    m_entityList.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws