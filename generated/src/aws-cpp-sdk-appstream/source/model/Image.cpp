/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/Image.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

Image::Image(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Image& Image::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "Arn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_arn = ss.str();
                  }
                }
                m_arnHasBeenSet = true;
              }

              else if (initialKeyStr == "BaseImageArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_baseImageArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_baseImageArn = ss.str();
                  }
                }
                m_baseImageArnHasBeenSet = true;
              }

              else if (initialKeyStr == "DisplayName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_displayName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_displayName = ss.str();
                  }
                }
                m_displayNameHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state =
                      ImageStateMapper::GetImageStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "Visibility") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_visibility = VisibilityTypeMapper::GetVisibilityTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_visibilityHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageBuilderSupported") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_imageBuilderSupported = val.value();
                }
                m_imageBuilderSupportedHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageBuilderName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_imageBuilderName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_imageBuilderName = ss.str();
                  }
                }
                m_imageBuilderNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Platform") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_platform = PlatformTypeMapper::GetPlatformTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_platformHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
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

              else if (initialKeyStr == "StateChangeReason") {
                m_stateChangeReason = ImageStateChangeReason(decoder);
                m_stateChangeReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "Applications") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_applications.push_back(Application(decoder));
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
                      m_applications.push_back(Application(decoder));
                    }
                  }
                }
                m_applicationsHasBeenSet = true;
              }

              else if (initialKeyStr == "CreatedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createdTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createdTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "PublicBaseImageReleasedDate") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_publicBaseImageReleasedDate = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_publicBaseImageReleasedDate = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_publicBaseImageReleasedDateHasBeenSet = true;
              }

              else if (initialKeyStr == "AppstreamAgentVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_appstreamAgentVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_appstreamAgentVersion = ss.str();
                  }
                }
                m_appstreamAgentVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "ImagePermissions") {
                m_imagePermissions = ImagePermissions(decoder);
                m_imagePermissionsHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageErrors") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_imageErrors.push_back(ResourceError(decoder));
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
                      m_imageErrors.push_back(ResourceError(decoder));
                    }
                  }
                }
                m_imageErrorsHasBeenSet = true;
              }

              else if (initialKeyStr == "LatestAppstreamAgentVersion") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_latestAppstreamAgentVersion = LatestAppstreamAgentVersionMapper::GetLatestAppstreamAgentVersionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_latestAppstreamAgentVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "SupportedInstanceFamilies") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_supportedInstanceFamilies.push_back(
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_supportedInstanceFamilies.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
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
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_supportedInstanceFamilies.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_supportedInstanceFamilies.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_supportedInstanceFamiliesHasBeenSet = true;
              }

              else if (initialKeyStr == "DynamicAppProvidersEnabled") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_dynamicAppProvidersEnabled = DynamicAppProvidersEnabledMapper::GetDynamicAppProvidersEnabledForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_dynamicAppProvidersEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageSharedWithOthers") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_imageSharedWithOthers = ImageSharedWithOthersMapper::GetImageSharedWithOthersForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_imageSharedWithOthersHasBeenSet = true;
              }

              else if (initialKeyStr == "ManagedSoftwareIncluded") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_managedSoftwareIncluded = val.value();
                }
                m_managedSoftwareIncludedHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_imageType =
                      ImageTypeMapper::GetImageTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_imageTypeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Image", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "Arn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_arn = ss.str();
                }
              }
              m_arnHasBeenSet = true;
            }

            else if (initialKeyStr == "BaseImageArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_baseImageArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_baseImageArn = ss.str();
                }
              }
              m_baseImageArnHasBeenSet = true;
            }

            else if (initialKeyStr == "DisplayName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_displayName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_displayName = ss.str();
                }
              }
              m_displayNameHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state =
                    ImageStateMapper::GetImageStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "Visibility") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_visibility = VisibilityTypeMapper::GetVisibilityTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_visibilityHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageBuilderSupported") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_imageBuilderSupported = val.value();
              }
              m_imageBuilderSupportedHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageBuilderName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_imageBuilderName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_imageBuilderName = ss.str();
                }
              }
              m_imageBuilderNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Platform") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_platform = PlatformTypeMapper::GetPlatformTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_platformHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
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

            else if (initialKeyStr == "StateChangeReason") {
              m_stateChangeReason = ImageStateChangeReason(decoder);
              m_stateChangeReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "Applications") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_applications.push_back(Application(decoder));
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
                    m_applications.push_back(Application(decoder));
                  }
                }
              }
              m_applicationsHasBeenSet = true;
            }

            else if (initialKeyStr == "CreatedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createdTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createdTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "PublicBaseImageReleasedDate") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_publicBaseImageReleasedDate = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_publicBaseImageReleasedDate = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_publicBaseImageReleasedDateHasBeenSet = true;
            }

            else if (initialKeyStr == "AppstreamAgentVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_appstreamAgentVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_appstreamAgentVersion = ss.str();
                }
              }
              m_appstreamAgentVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "ImagePermissions") {
              m_imagePermissions = ImagePermissions(decoder);
              m_imagePermissionsHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageErrors") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_imageErrors.push_back(ResourceError(decoder));
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
                    m_imageErrors.push_back(ResourceError(decoder));
                  }
                }
              }
              m_imageErrorsHasBeenSet = true;
            }

            else if (initialKeyStr == "LatestAppstreamAgentVersion") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_latestAppstreamAgentVersion = LatestAppstreamAgentVersionMapper::GetLatestAppstreamAgentVersionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_latestAppstreamAgentVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "SupportedInstanceFamilies") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_supportedInstanceFamilies.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_supportedInstanceFamilies.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
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
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_supportedInstanceFamilies.push_back(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_supportedInstanceFamilies.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_supportedInstanceFamiliesHasBeenSet = true;
            }

            else if (initialKeyStr == "DynamicAppProvidersEnabled") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_dynamicAppProvidersEnabled = DynamicAppProvidersEnabledMapper::GetDynamicAppProvidersEnabledForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_dynamicAppProvidersEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageSharedWithOthers") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_imageSharedWithOthers = ImageSharedWithOthersMapper::GetImageSharedWithOthersForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_imageSharedWithOthersHasBeenSet = true;
            }

            else if (initialKeyStr == "ManagedSoftwareIncluded") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_managedSoftwareIncluded = val.value();
              }
              m_managedSoftwareIncludedHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_imageType =
                    ImageTypeMapper::GetImageTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_imageTypeHasBeenSet = true;
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

void Image::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_arnHasBeenSet) {
    mapSize++;
  }
  if (m_baseImageArnHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_visibilityHasBeenSet) {
    mapSize++;
  }
  if (m_imageBuilderSupportedHasBeenSet) {
    mapSize++;
  }
  if (m_imageBuilderNameHasBeenSet) {
    mapSize++;
  }
  if (m_platformHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_stateChangeReasonHasBeenSet) {
    mapSize++;
  }
  if (m_applicationsHasBeenSet) {
    mapSize++;
  }
  if (m_createdTimeHasBeenSet) {
    mapSize++;
  }
  if (m_publicBaseImageReleasedDateHasBeenSet) {
    mapSize++;
  }
  if (m_appstreamAgentVersionHasBeenSet) {
    mapSize++;
  }
  if (m_imagePermissionsHasBeenSet) {
    mapSize++;
  }
  if (m_imageErrorsHasBeenSet) {
    mapSize++;
  }
  if (m_latestAppstreamAgentVersionHasBeenSet) {
    mapSize++;
  }
  if (m_supportedInstanceFamiliesHasBeenSet) {
    mapSize++;
  }
  if (m_dynamicAppProvidersEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_imageSharedWithOthersHasBeenSet) {
    mapSize++;
  }
  if (m_managedSoftwareIncludedHasBeenSet) {
    mapSize++;
  }
  if (m_imageTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_arnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_arn.c_str()));
  }

  if (m_baseImageArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BaseImageArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_baseImageArn.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImageStateMapper::GetNameForImageState(m_state).c_str()));
  }

  if (m_visibilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Visibility"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VisibilityTypeMapper::GetNameForVisibilityType(m_visibility).c_str()));
  }

  if (m_imageBuilderSupportedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageBuilderSupported"));
    encoder.WriteBool(m_imageBuilderSupported);
  }

  if (m_imageBuilderNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageBuilderName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageBuilderName.c_str()));
  }

  if (m_platformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Platform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformTypeMapper::GetNameForPlatformType(m_platform).c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_stateChangeReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateChangeReason"));
    m_stateChangeReason.CborEncode(encoder);
  }

  if (m_applicationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Applications"));
    encoder.WriteArrayStart(m_applications.size());
    for (const auto& item_0 : m_applications) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_createdTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdTime.Seconds());
  }

  if (m_publicBaseImageReleasedDateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublicBaseImageReleasedDate"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_publicBaseImageReleasedDate.Seconds());
  }

  if (m_appstreamAgentVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AppstreamAgentVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_appstreamAgentVersion.c_str()));
  }

  if (m_imagePermissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImagePermissions"));
    m_imagePermissions.CborEncode(encoder);
  }

  if (m_imageErrorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageErrors"));
    encoder.WriteArrayStart(m_imageErrors.size());
    for (const auto& item_0 : m_imageErrors) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_latestAppstreamAgentVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LatestAppstreamAgentVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        LatestAppstreamAgentVersionMapper::GetNameForLatestAppstreamAgentVersion(m_latestAppstreamAgentVersion).c_str()));
  }

  if (m_supportedInstanceFamiliesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SupportedInstanceFamilies"));
    encoder.WriteArrayStart(m_supportedInstanceFamilies.size());
    for (const auto& item_0 : m_supportedInstanceFamilies) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_dynamicAppProvidersEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DynamicAppProvidersEnabled"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DynamicAppProvidersEnabledMapper::GetNameForDynamicAppProvidersEnabled(m_dynamicAppProvidersEnabled).c_str()));
  }

  if (m_imageSharedWithOthersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageSharedWithOthers"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ImageSharedWithOthersMapper::GetNameForImageSharedWithOthers(m_imageSharedWithOthers).c_str()));
  }

  if (m_managedSoftwareIncludedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManagedSoftwareIncluded"));
    encoder.WriteBool(m_managedSoftwareIncluded);
  }

  if (m_imageTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImageTypeMapper::GetNameForImageType(m_imageType).c_str()));
  }
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws