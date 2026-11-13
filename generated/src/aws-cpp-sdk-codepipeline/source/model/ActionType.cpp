/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionType.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

ActionType::ActionType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ActionType& ActionType::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "id") {
                m_id = ActionTypeId(decoder);
                m_idHasBeenSet = true;
              }

              else if (initialKeyStr == "settings") {
                m_settings = ActionTypeSettings(decoder);
                m_settingsHasBeenSet = true;
              }

              else if (initialKeyStr == "actionConfigurationProperties") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_actionConfigurationProperties.push_back(ActionConfigurationProperty(decoder));
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
                      m_actionConfigurationProperties.push_back(ActionConfigurationProperty(decoder));
                    }
                  }
                }
                m_actionConfigurationPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "inputArtifactDetails") {
                m_inputArtifactDetails = ArtifactDetails(decoder);
                m_inputArtifactDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "outputArtifactDetails") {
                m_outputArtifactDetails = ArtifactDetails(decoder);
                m_outputArtifactDetailsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ActionType", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "id") {
              m_id = ActionTypeId(decoder);
              m_idHasBeenSet = true;
            }

            else if (initialKeyStr == "settings") {
              m_settings = ActionTypeSettings(decoder);
              m_settingsHasBeenSet = true;
            }

            else if (initialKeyStr == "actionConfigurationProperties") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_actionConfigurationProperties.push_back(ActionConfigurationProperty(decoder));
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
                    m_actionConfigurationProperties.push_back(ActionConfigurationProperty(decoder));
                  }
                }
              }
              m_actionConfigurationPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "inputArtifactDetails") {
              m_inputArtifactDetails = ArtifactDetails(decoder);
              m_inputArtifactDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "outputArtifactDetails") {
              m_outputArtifactDetails = ArtifactDetails(decoder);
              m_outputArtifactDetailsHasBeenSet = true;
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

void ActionType::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_actionConfigurationPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_inputArtifactDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_outputArtifactDetailsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("id"));
    m_id.CborEncode(encoder);
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("settings"));
    m_settings.CborEncode(encoder);
  }

  if (m_actionConfigurationPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("actionConfigurationProperties"));
    encoder.WriteArrayStart(m_actionConfigurationProperties.size());
    for (const auto& item_0 : m_actionConfigurationProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_inputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inputArtifactDetails"));
    m_inputArtifactDetails.CborEncode(encoder);
  }

  if (m_outputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outputArtifactDetails"));
    m_outputArtifactDetails.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws