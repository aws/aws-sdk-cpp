/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/TaskReportConfig.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

TaskReportConfig::TaskReportConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TaskReportConfig& TaskReportConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Destination") {
                m_destination = ReportDestination(decoder);
                m_destinationHasBeenSet = true;
              }

              else if (initialKeyStr == "OutputType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_outputType = ReportOutputTypeMapper::GetReportOutputTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_outputTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "ReportLevel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_reportLevel = ReportLevelMapper::GetReportLevelForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_reportLevelHasBeenSet = true;
              }

              else if (initialKeyStr == "ObjectVersionIds") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_objectVersionIds = ObjectVersionIdsMapper::GetObjectVersionIdsForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_objectVersionIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "Overrides") {
                m_overrides = ReportOverrides(decoder);
                m_overridesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TaskReportConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Destination") {
              m_destination = ReportDestination(decoder);
              m_destinationHasBeenSet = true;
            }

            else if (initialKeyStr == "OutputType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_outputType = ReportOutputTypeMapper::GetReportOutputTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_outputTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "ReportLevel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_reportLevel =
                    ReportLevelMapper::GetReportLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_reportLevelHasBeenSet = true;
            }

            else if (initialKeyStr == "ObjectVersionIds") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_objectVersionIds = ObjectVersionIdsMapper::GetObjectVersionIdsForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_objectVersionIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "Overrides") {
              m_overrides = ReportOverrides(decoder);
              m_overridesHasBeenSet = true;
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

void TaskReportConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_destinationHasBeenSet) {
    mapSize++;
  }
  if (m_outputTypeHasBeenSet) {
    mapSize++;
  }
  if (m_reportLevelHasBeenSet) {
    mapSize++;
  }
  if (m_objectVersionIdsHasBeenSet) {
    mapSize++;
  }
  if (m_overridesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_destinationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Destination"));
    m_destination.CborEncode(encoder);
  }

  if (m_outputTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReportOutputTypeMapper::GetNameForReportOutputType(m_outputType).c_str()));
  }

  if (m_reportLevelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReportLevel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReportLevelMapper::GetNameForReportLevel(m_reportLevel).c_str()));
  }

  if (m_objectVersionIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ObjectVersionIds"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ObjectVersionIdsMapper::GetNameForObjectVersionIds(m_objectVersionIds).c_str()));
  }

  if (m_overridesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Overrides"));
    m_overrides.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws