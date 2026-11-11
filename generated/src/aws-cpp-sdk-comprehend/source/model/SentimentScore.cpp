/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/SentimentScore.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

SentimentScore::SentimentScore(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SentimentScore& SentimentScore::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Positive") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_positive = val.value();
                }
                m_positiveHasBeenSet = true;
              }

              else if (initialKeyStr == "Negative") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_negative = val.value();
                }
                m_negativeHasBeenSet = true;
              }

              else if (initialKeyStr == "Neutral") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_neutral = val.value();
                }
                m_neutralHasBeenSet = true;
              }

              else if (initialKeyStr == "Mixed") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_mixed = val.value();
                }
                m_mixedHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SentimentScore", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Positive") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_positive = val.value();
              }
              m_positiveHasBeenSet = true;
            }

            else if (initialKeyStr == "Negative") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_negative = val.value();
              }
              m_negativeHasBeenSet = true;
            }

            else if (initialKeyStr == "Neutral") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_neutral = val.value();
              }
              m_neutralHasBeenSet = true;
            }

            else if (initialKeyStr == "Mixed") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_mixed = val.value();
              }
              m_mixedHasBeenSet = true;
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

void SentimentScore::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_positiveHasBeenSet) {
    mapSize++;
  }
  if (m_negativeHasBeenSet) {
    mapSize++;
  }
  if (m_neutralHasBeenSet) {
    mapSize++;
  }
  if (m_mixedHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_positiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Positive"));
    encoder.WriteFloat(m_positive);
  }

  if (m_negativeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Negative"));
    encoder.WriteFloat(m_negative);
  }

  if (m_neutralHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Neutral"));
    encoder.WriteFloat(m_neutral);
  }

  if (m_mixedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Mixed"));
    encoder.WriteFloat(m_mixed);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws