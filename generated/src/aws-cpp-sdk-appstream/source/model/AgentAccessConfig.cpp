/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentAccessConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

AgentAccessConfig::AgentAccessConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AgentAccessConfig& AgentAccessConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Settings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_settings.push_back(AgentAccessSetting(decoder));
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
                      m_settings.push_back(AgentAccessSetting(decoder));
                    }
                  }
                }
                m_settingsHasBeenSet = true;
              }

              else if (initialKeyStr == "S3BucketArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_s3BucketArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_s3BucketArn = ss.str();
                  }
                }
                m_s3BucketArnHasBeenSet = true;
              }

              else if (initialKeyStr == "ScreenshotsUploadEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_screenshotsUploadEnabled = val.value();
                }
                m_screenshotsUploadEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "ScreenResolution") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_screenResolution = ScreenResolutionMapper::GetScreenResolutionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_screenResolutionHasBeenSet = true;
              }

              else if (initialKeyStr == "ScreenImageFormat") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_screenImageFormat = ScreenImageFormatMapper::GetScreenImageFormatForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_screenImageFormatHasBeenSet = true;
              }

              else if (initialKeyStr == "UserControlMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_userControlMode = UserControlModeMapper::GetUserControlModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_userControlModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AgentAccessConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Settings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_settings.push_back(AgentAccessSetting(decoder));
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
                    m_settings.push_back(AgentAccessSetting(decoder));
                  }
                }
              }
              m_settingsHasBeenSet = true;
            }

            else if (initialKeyStr == "S3BucketArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_s3BucketArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_s3BucketArn = ss.str();
                }
              }
              m_s3BucketArnHasBeenSet = true;
            }

            else if (initialKeyStr == "ScreenshotsUploadEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_screenshotsUploadEnabled = val.value();
              }
              m_screenshotsUploadEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "ScreenResolution") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_screenResolution = ScreenResolutionMapper::GetScreenResolutionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_screenResolutionHasBeenSet = true;
            }

            else if (initialKeyStr == "ScreenImageFormat") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_screenImageFormat = ScreenImageFormatMapper::GetScreenImageFormatForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_screenImageFormatHasBeenSet = true;
            }

            else if (initialKeyStr == "UserControlMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_userControlMode = UserControlModeMapper::GetUserControlModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_userControlModeHasBeenSet = true;
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

void AgentAccessConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_s3BucketArnHasBeenSet) {
    mapSize++;
  }
  if (m_screenshotsUploadEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_screenResolutionHasBeenSet) {
    mapSize++;
  }
  if (m_screenImageFormatHasBeenSet) {
    mapSize++;
  }
  if (m_userControlModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    encoder.WriteArrayStart(m_settings.size());
    for (const auto& item_0 : m_settings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_s3BucketArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3BucketArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_s3BucketArn.c_str()));
  }

  if (m_screenshotsUploadEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScreenshotsUploadEnabled"));
    encoder.WriteBool(m_screenshotsUploadEnabled);
  }

  if (m_screenResolutionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScreenResolution"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScreenResolutionMapper::GetNameForScreenResolution(m_screenResolution).c_str()));
  }

  if (m_screenImageFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScreenImageFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScreenImageFormatMapper::GetNameForScreenImageFormat(m_screenImageFormat).c_str()));
  }

  if (m_userControlModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserControlMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UserControlModeMapper::GetNameForUserControlMode(m_userControlMode).c_str()));
  }
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws