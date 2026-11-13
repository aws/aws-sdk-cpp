/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PartOfSpeechTag.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Comprehend {
namespace Model {

PartOfSpeechTag::PartOfSpeechTag(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PartOfSpeechTag& PartOfSpeechTag::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Tag") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_tag = PartOfSpeechTagTypeMapper::GetPartOfSpeechTagTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_tagHasBeenSet = true;
              }

              else if (initialKeyStr == "Score") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_score = val.value();
                }
                m_scoreHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PartOfSpeechTag", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Tag") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_tag = PartOfSpeechTagTypeMapper::GetPartOfSpeechTagTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_tagHasBeenSet = true;
            }

            else if (initialKeyStr == "Score") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_score = val.value();
              }
              m_scoreHasBeenSet = true;
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

void PartOfSpeechTag::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_tagHasBeenSet) {
    mapSize++;
  }
  if (m_scoreHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_tagHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tag"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PartOfSpeechTagTypeMapper::GetNameForPartOfSpeechTagType(m_tag).c_str()));
  }

  if (m_scoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Score"));
    encoder.WriteFloat(m_score);
  }
}

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws