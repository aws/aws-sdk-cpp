/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/LogConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

LogConfiguration::LogConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

LogConfiguration& LogConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Level") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_level =
                      LogLevelMapper::GetLogLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_levelHasBeenSet = true;
              }

              else if (initialKeyStr == "IncludePayload") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_includePayload = IncludePayloadMapper::GetIncludePayloadForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_includePayloadHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("LogConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Level") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_level = LogLevelMapper::GetLogLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_levelHasBeenSet = true;
            }

            else if (initialKeyStr == "IncludePayload") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_includePayload = IncludePayloadMapper::GetIncludePayloadForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_includePayloadHasBeenSet = true;
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

void LogConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_levelHasBeenSet) {
    mapSize++;
  }
  if (m_includePayloadHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_levelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Level"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LogLevelMapper::GetNameForLogLevel(m_level).c_str()));
  }

  if (m_includePayloadHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludePayload"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IncludePayloadMapper::GetNameForIncludePayload(m_includePayload).c_str()));
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws