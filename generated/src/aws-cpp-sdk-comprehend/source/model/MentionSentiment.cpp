/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/MentionSentiment.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

MentionSentiment::MentionSentiment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MentionSentiment& MentionSentiment::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Sentiment") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_sentiment = SentimentTypeMapper::GetSentimentTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_sentimentHasBeenSet = true;
              }

              else if (initialKeyStr == "SentimentScore") {
                m_sentimentScore = SentimentScore(decoder);
                m_sentimentScoreHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MentionSentiment", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Sentiment") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_sentiment = SentimentTypeMapper::GetSentimentTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_sentimentHasBeenSet = true;
            }

            else if (initialKeyStr == "SentimentScore") {
              m_sentimentScore = SentimentScore(decoder);
              m_sentimentScoreHasBeenSet = true;
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

void MentionSentiment::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_sentimentHasBeenSet) {
    mapSize++;
  }
  if (m_sentimentScoreHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sentimentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Sentiment"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SentimentTypeMapper::GetNameForSentimentType(m_sentiment).c_str()));
  }

  if (m_sentimentScoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SentimentScore"));
    m_sentimentScore.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws