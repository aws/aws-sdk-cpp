/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertCondition.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

AlertCondition::AlertCondition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AlertCondition& AlertCondition::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "thresholdMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_thresholdMode = ThresholdModeMapper::GetThresholdModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_thresholdModeHasBeenSet = true;
              }

              else if (initialKeyStr == "thresholdField") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_thresholdField = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_thresholdField = ss.str();
                  }
                }
                m_thresholdFieldHasBeenSet = true;
              }

              else if (initialKeyStr == "comparator") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_comparator =
                      ComparatorMapper::GetComparatorForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_comparatorHasBeenSet = true;
              }

              else if (initialKeyStr == "warningThreshold") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_warningThreshold = val.value();
                }
                m_warningThresholdHasBeenSet = true;
              }

              else if (initialKeyStr == "criticalThreshold") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_criticalThreshold = val.value();
                }
                m_criticalThresholdHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AlertCondition", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "thresholdMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_thresholdMode = ThresholdModeMapper::GetThresholdModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_thresholdModeHasBeenSet = true;
            }

            else if (initialKeyStr == "thresholdField") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_thresholdField = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_thresholdField = ss.str();
                }
              }
              m_thresholdFieldHasBeenSet = true;
            }

            else if (initialKeyStr == "comparator") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_comparator =
                    ComparatorMapper::GetComparatorForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_comparatorHasBeenSet = true;
            }

            else if (initialKeyStr == "warningThreshold") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_warningThreshold = val.value();
              }
              m_warningThresholdHasBeenSet = true;
            }

            else if (initialKeyStr == "criticalThreshold") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_criticalThreshold = val.value();
              }
              m_criticalThresholdHasBeenSet = true;
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

void AlertCondition::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_thresholdModeHasBeenSet) {
    mapSize++;
  }
  if (m_thresholdFieldHasBeenSet) {
    mapSize++;
  }
  if (m_comparatorHasBeenSet) {
    mapSize++;
  }
  if (m_warningThresholdHasBeenSet) {
    mapSize++;
  }
  if (m_criticalThresholdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_thresholdModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("thresholdMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThresholdModeMapper::GetNameForThresholdMode(m_thresholdMode).c_str()));
  }

  if (m_thresholdFieldHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("thresholdField"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_thresholdField.c_str()));
  }

  if (m_comparatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("comparator"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComparatorMapper::GetNameForComparator(m_comparator).c_str()));
  }

  if (m_warningThresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("warningThreshold"));
    encoder.WriteFloat(m_warningThreshold);
  }

  if (m_criticalThresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("criticalThreshold"));
    encoder.WriteFloat(m_criticalThreshold);
  }
}

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws