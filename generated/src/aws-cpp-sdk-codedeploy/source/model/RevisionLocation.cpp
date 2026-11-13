/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

RevisionLocation::RevisionLocation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RevisionLocation& RevisionLocation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "revisionType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_revisionType = RevisionLocationTypeMapper::GetRevisionLocationTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_revisionTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "s3Location") {
                m_s3Location = S3Location(decoder);
                m_s3LocationHasBeenSet = true;
              }

              else if (initialKeyStr == "gitHubLocation") {
                m_gitHubLocation = GitHubLocation(decoder);
                m_gitHubLocationHasBeenSet = true;
              }

              else if (initialKeyStr == "string") {
                m_string = RawString(decoder);
                m_stringHasBeenSet = true;
              }

              else if (initialKeyStr == "appSpecContent") {
                m_appSpecContent = AppSpecContent(decoder);
                m_appSpecContentHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RevisionLocation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "revisionType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_revisionType = RevisionLocationTypeMapper::GetRevisionLocationTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_revisionTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "s3Location") {
              m_s3Location = S3Location(decoder);
              m_s3LocationHasBeenSet = true;
            }

            else if (initialKeyStr == "gitHubLocation") {
              m_gitHubLocation = GitHubLocation(decoder);
              m_gitHubLocationHasBeenSet = true;
            }

            else if (initialKeyStr == "string") {
              m_string = RawString(decoder);
              m_stringHasBeenSet = true;
            }

            else if (initialKeyStr == "appSpecContent") {
              m_appSpecContent = AppSpecContent(decoder);
              m_appSpecContentHasBeenSet = true;
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

void RevisionLocation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_revisionTypeHasBeenSet) {
    mapSize++;
  }
  if (m_s3LocationHasBeenSet) {
    mapSize++;
  }
  if (m_gitHubLocationHasBeenSet) {
    mapSize++;
  }
  if (m_stringHasBeenSet) {
    mapSize++;
  }
  if (m_appSpecContentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_revisionTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("revisionType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RevisionLocationTypeMapper::GetNameForRevisionLocationType(m_revisionType).c_str()));
  }

  if (m_s3LocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("s3Location"));
    m_s3Location.CborEncode(encoder);
  }

  if (m_gitHubLocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gitHubLocation"));
    m_gitHubLocation.CborEncode(encoder);
  }

  if (m_stringHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("string"));
    m_string.CborEncode(encoder);
  }

  if (m_appSpecContentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("appSpecContent"));
    m_appSpecContent.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws