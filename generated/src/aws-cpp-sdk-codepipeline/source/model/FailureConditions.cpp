/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/FailureConditions.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

FailureConditions::FailureConditions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

FailureConditions& FailureConditions::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "result") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_result = ResultMapper::GetResultForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_resultHasBeenSet = true;
              }

              else if (initialKeyStr == "retryConfiguration") {
                m_retryConfiguration = RetryConfiguration(decoder);
                m_retryConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "conditions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_conditions.push_back(Condition(decoder));
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
                      m_conditions.push_back(Condition(decoder));
                    }
                  }
                }
                m_conditionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FailureConditions", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "result") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_result = ResultMapper::GetResultForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_resultHasBeenSet = true;
            }

            else if (initialKeyStr == "retryConfiguration") {
              m_retryConfiguration = RetryConfiguration(decoder);
              m_retryConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "conditions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_conditions.push_back(Condition(decoder));
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
                    m_conditions.push_back(Condition(decoder));
                  }
                }
              }
              m_conditionsHasBeenSet = true;
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

void FailureConditions::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_resultHasBeenSet) {
    mapSize++;
  }
  if (m_retryConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_conditionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resultHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("result"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResultMapper::GetNameForResult(m_result).c_str()));
  }

  if (m_retryConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("retryConfiguration"));
    m_retryConfiguration.CborEncode(encoder);
  }

  if (m_conditionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("conditions"));
    encoder.WriteArrayStart(m_conditions.size());
    for (const auto& item_0 : m_conditions) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws