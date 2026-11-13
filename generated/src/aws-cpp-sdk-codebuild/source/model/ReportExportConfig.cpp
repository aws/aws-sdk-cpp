/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportExportConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ReportExportConfig::ReportExportConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ReportExportConfig& ReportExportConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "exportConfigType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_exportConfigType = ReportExportConfigTypeMapper::GetReportExportConfigTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_exportConfigTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "s3Destination") {
                m_s3Destination = S3ReportExportConfig(decoder);
                m_s3DestinationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ReportExportConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "exportConfigType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_exportConfigType = ReportExportConfigTypeMapper::GetReportExportConfigTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_exportConfigTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "s3Destination") {
              m_s3Destination = S3ReportExportConfig(decoder);
              m_s3DestinationHasBeenSet = true;
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

void ReportExportConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_exportConfigTypeHasBeenSet) {
    mapSize++;
  }
  if (m_s3DestinationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_exportConfigTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("exportConfigType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ReportExportConfigTypeMapper::GetNameForReportExportConfigType(m_exportConfigType).c_str()));
  }

  if (m_s3DestinationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("s3Destination"));
    m_s3Destination.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws