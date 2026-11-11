/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetInputDataConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

DatasetInputDataConfig::DatasetInputDataConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DatasetInputDataConfig& DatasetInputDataConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AugmentedManifests") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_augmentedManifests.push_back(DatasetAugmentedManifestsListItem(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_augmentedManifests.push_back(DatasetAugmentedManifestsListItem(decoder));
                    }
                  }
                }
                m_augmentedManifestsHasBeenSet = true;
              }

              else if (initialKeyStr == "DataFormat") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_dataFormat = DatasetDataFormatMapper::GetDatasetDataFormatForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_dataFormatHasBeenSet = true;
              }

              else if (initialKeyStr == "DocumentClassifierInputDataConfig") {
                m_documentClassifierInputDataConfig = DatasetDocumentClassifierInputDataConfig(decoder);
                m_documentClassifierInputDataConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "EntityRecognizerInputDataConfig") {
                m_entityRecognizerInputDataConfig = DatasetEntityRecognizerInputDataConfig(decoder);
                m_entityRecognizerInputDataConfigHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DatasetInputDataConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AugmentedManifests") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_augmentedManifests.push_back(DatasetAugmentedManifestsListItem(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_augmentedManifests.push_back(DatasetAugmentedManifestsListItem(decoder));
                  }
                }
              }
              m_augmentedManifestsHasBeenSet = true;
            }

            else if (initialKeyStr == "DataFormat") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_dataFormat = DatasetDataFormatMapper::GetDatasetDataFormatForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_dataFormatHasBeenSet = true;
            }

            else if (initialKeyStr == "DocumentClassifierInputDataConfig") {
              m_documentClassifierInputDataConfig = DatasetDocumentClassifierInputDataConfig(decoder);
              m_documentClassifierInputDataConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "EntityRecognizerInputDataConfig") {
              m_entityRecognizerInputDataConfig = DatasetEntityRecognizerInputDataConfig(decoder);
              m_entityRecognizerInputDataConfigHasBeenSet = true;
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

void DatasetInputDataConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_augmentedManifestsHasBeenSet) {
    mapSize++;
  }
  if (m_dataFormatHasBeenSet) {
    mapSize++;
  }
  if (m_documentClassifierInputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_entityRecognizerInputDataConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_augmentedManifestsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AugmentedManifests"));
    encoder.WriteArrayStart(m_augmentedManifests.size());
    for (const auto& item_0 : m_augmentedManifests) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_dataFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DatasetDataFormatMapper::GetNameForDatasetDataFormat(m_dataFormat).c_str()));
  }

  if (m_documentClassifierInputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentClassifierInputDataConfig"));
    m_documentClassifierInputDataConfig.CborEncode(encoder);
  }

  if (m_entityRecognizerInputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityRecognizerInputDataConfig"));
    m_entityRecognizerInputDataConfig.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws