/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/TaskConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

TaskConfig::TaskConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TaskConfig& TaskConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "DocumentClassificationConfig") {
                m_documentClassificationConfig = DocumentClassificationConfig(decoder);
                m_documentClassificationConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "EntityRecognitionConfig") {
                m_entityRecognitionConfig = EntityRecognitionConfig(decoder);
                m_entityRecognitionConfigHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TaskConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "DocumentClassificationConfig") {
              m_documentClassificationConfig = DocumentClassificationConfig(decoder);
              m_documentClassificationConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "EntityRecognitionConfig") {
              m_entityRecognitionConfig = EntityRecognitionConfig(decoder);
              m_entityRecognitionConfigHasBeenSet = true;
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

void TaskConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_documentClassificationConfigHasBeenSet) {
    mapSize++;
  }
  if (m_entityRecognitionConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_documentClassificationConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentClassificationConfig"));
    m_documentClassificationConfig.CborEncode(encoder);
  }

  if (m_entityRecognitionConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityRecognitionConfig"));
    m_entityRecognitionConfig.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws