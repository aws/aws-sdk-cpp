/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeDeclaration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

ActionTypeDeclaration::ActionTypeDeclaration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ActionTypeDeclaration& ActionTypeDeclaration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "executor") {
                m_executor = ActionTypeExecutor(decoder);
                m_executorHasBeenSet = true;
              }

              else if (initialKeyStr == "id") {
                m_id = ActionTypeIdentifier(decoder);
                m_idHasBeenSet = true;
              }

              else if (initialKeyStr == "inputArtifactDetails") {
                m_inputArtifactDetails = ActionTypeArtifactDetails(decoder);
                m_inputArtifactDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "outputArtifactDetails") {
                m_outputArtifactDetails = ActionTypeArtifactDetails(decoder);
                m_outputArtifactDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "permissions") {
                m_permissions = ActionTypePermissions(decoder);
                m_permissionsHasBeenSet = true;
              }

              else if (initialKeyStr == "properties") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_properties.push_back(ActionTypeProperty(decoder));
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
                      m_properties.push_back(ActionTypeProperty(decoder));
                    }
                  }
                }
                m_propertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "urls") {
                m_urls = ActionTypeUrls(decoder);
                m_urlsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ActionTypeDeclaration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "executor") {
              m_executor = ActionTypeExecutor(decoder);
              m_executorHasBeenSet = true;
            }

            else if (initialKeyStr == "id") {
              m_id = ActionTypeIdentifier(decoder);
              m_idHasBeenSet = true;
            }

            else if (initialKeyStr == "inputArtifactDetails") {
              m_inputArtifactDetails = ActionTypeArtifactDetails(decoder);
              m_inputArtifactDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "outputArtifactDetails") {
              m_outputArtifactDetails = ActionTypeArtifactDetails(decoder);
              m_outputArtifactDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "permissions") {
              m_permissions = ActionTypePermissions(decoder);
              m_permissionsHasBeenSet = true;
            }

            else if (initialKeyStr == "properties") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_properties.push_back(ActionTypeProperty(decoder));
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
                    m_properties.push_back(ActionTypeProperty(decoder));
                  }
                }
              }
              m_propertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "urls") {
              m_urls = ActionTypeUrls(decoder);
              m_urlsHasBeenSet = true;
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

void ActionTypeDeclaration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_executorHasBeenSet) {
    mapSize++;
  }
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_inputArtifactDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_outputArtifactDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_permissionsHasBeenSet) {
    mapSize++;
  }
  if (m_propertiesHasBeenSet) {
    mapSize++;
  }
  if (m_urlsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_executorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("executor"));
    m_executor.CborEncode(encoder);
  }

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("id"));
    m_id.CborEncode(encoder);
  }

  if (m_inputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inputArtifactDetails"));
    m_inputArtifactDetails.CborEncode(encoder);
  }

  if (m_outputArtifactDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outputArtifactDetails"));
    m_outputArtifactDetails.CborEncode(encoder);
  }

  if (m_permissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("permissions"));
    m_permissions.CborEncode(encoder);
  }

  if (m_propertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("properties"));
    encoder.WriteArrayStart(m_properties.size());
    for (const auto& item_0 : m_properties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_urlsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("urls"));
    m_urls.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws