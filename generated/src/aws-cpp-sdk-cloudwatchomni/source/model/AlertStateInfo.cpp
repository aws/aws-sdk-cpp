/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertStateInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

AlertStateInfo::AlertStateInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AlertStateInfo& AlertStateInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "value") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_value =
                      AlertStateMapper::GetAlertStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_valueHasBeenSet = true;
              }

              else if (initialKeyStr == "transitionedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_transitionedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_transitionedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_transitionedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "contributorSummary") {
                m_contributorSummary = ContributorSummary(decoder);
                m_contributorSummaryHasBeenSet = true;
              }

              else if (initialKeyStr == "data") {
                m_data = AlertStateData(decoder);
                m_dataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AlertStateInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "value") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_value =
                    AlertStateMapper::GetAlertStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_valueHasBeenSet = true;
            }

            else if (initialKeyStr == "transitionedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_transitionedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_transitionedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_transitionedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "contributorSummary") {
              m_contributorSummary = ContributorSummary(decoder);
              m_contributorSummaryHasBeenSet = true;
            }

            else if (initialKeyStr == "data") {
              m_data = AlertStateData(decoder);
              m_dataHasBeenSet = true;
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

void AlertStateInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_valueHasBeenSet) {
    mapSize++;
  }
  if (m_transitionedAtHasBeenSet) {
    mapSize++;
  }
  if (m_contributorSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_dataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_valueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("value"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AlertStateMapper::GetNameForAlertState(m_value).c_str()));
  }

  if (m_transitionedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("transitionedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_transitionedAt.Seconds());
  }

  if (m_contributorSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("contributorSummary"));
    m_contributorSummary.CborEncode(encoder);
  }

  if (m_dataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("data"));
    m_data.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws