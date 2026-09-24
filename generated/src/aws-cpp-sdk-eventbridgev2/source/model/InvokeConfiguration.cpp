/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/InvokeConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

InvokeConfiguration::InvokeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

InvokeConfiguration& InvokeConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RoleArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_roleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_roleArn = ss.str();
                  }
                }
                m_roleArnHasBeenSet = true;
              }

              else if (initialKeyStr == "LambdaParameters") {
                m_lambdaParameters = LambdaParameters(decoder);
                m_lambdaParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "SqsParameters") {
                m_sqsParameters = SqsParameters(decoder);
                m_sqsParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "SnsParameters") {
                m_snsParameters = SnsParameters(decoder);
                m_snsParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "KinesisParameters") {
                m_kinesisParameters = KinesisParameters(decoder);
                m_kinesisParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "StepFunctionsParameters") {
                m_stepFunctionsParameters = StepFunctionsParameters(decoder);
                m_stepFunctionsParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "HttpParameters") {
                m_httpParameters = HttpParameters(decoder);
                m_httpParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "UniversalTargetParameters") {
                m_universalTargetParameters = UniversalTargetParameters(decoder);
                m_universalTargetParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "EventBusV2Parameters") {
                m_eventBusV2Parameters = EventBusV2Parameters(decoder);
                m_eventBusV2ParametersHasBeenSet = true;
              }

              else if (initialKeyStr == "TargetArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_targetArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_targetArn = ss.str();
                  }
                }
                m_targetArnHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InvokeConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RoleArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_roleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_roleArn = ss.str();
                }
              }
              m_roleArnHasBeenSet = true;
            }

            else if (initialKeyStr == "LambdaParameters") {
              m_lambdaParameters = LambdaParameters(decoder);
              m_lambdaParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "SqsParameters") {
              m_sqsParameters = SqsParameters(decoder);
              m_sqsParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "SnsParameters") {
              m_snsParameters = SnsParameters(decoder);
              m_snsParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "KinesisParameters") {
              m_kinesisParameters = KinesisParameters(decoder);
              m_kinesisParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "StepFunctionsParameters") {
              m_stepFunctionsParameters = StepFunctionsParameters(decoder);
              m_stepFunctionsParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "HttpParameters") {
              m_httpParameters = HttpParameters(decoder);
              m_httpParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "UniversalTargetParameters") {
              m_universalTargetParameters = UniversalTargetParameters(decoder);
              m_universalTargetParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "EventBusV2Parameters") {
              m_eventBusV2Parameters = EventBusV2Parameters(decoder);
              m_eventBusV2ParametersHasBeenSet = true;
            }

            else if (initialKeyStr == "TargetArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_targetArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_targetArn = ss.str();
                }
              }
              m_targetArnHasBeenSet = true;
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

void InvokeConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_lambdaParametersHasBeenSet) {
    mapSize++;
  }
  if (m_sqsParametersHasBeenSet) {
    mapSize++;
  }
  if (m_snsParametersHasBeenSet) {
    mapSize++;
  }
  if (m_kinesisParametersHasBeenSet) {
    mapSize++;
  }
  if (m_stepFunctionsParametersHasBeenSet) {
    mapSize++;
  }
  if (m_httpParametersHasBeenSet) {
    mapSize++;
  }
  if (m_universalTargetParametersHasBeenSet) {
    mapSize++;
  }
  if (m_eventBusV2ParametersHasBeenSet) {
    mapSize++;
  }
  if (m_targetArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_lambdaParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LambdaParameters"));
    m_lambdaParameters.CborEncode(encoder);
  }

  if (m_sqsParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SqsParameters"));
    m_sqsParameters.CborEncode(encoder);
  }

  if (m_snsParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnsParameters"));
    m_snsParameters.CborEncode(encoder);
  }

  if (m_kinesisParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KinesisParameters"));
    m_kinesisParameters.CborEncode(encoder);
  }

  if (m_stepFunctionsParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StepFunctionsParameters"));
    m_stepFunctionsParameters.CborEncode(encoder);
  }

  if (m_httpParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HttpParameters"));
    m_httpParameters.CborEncode(encoder);
  }

  if (m_universalTargetParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UniversalTargetParameters"));
    m_universalTargetParameters.CborEncode(encoder);
  }

  if (m_eventBusV2ParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EventBusV2Parameters"));
    m_eventBusV2Parameters.CborEncode(encoder);
  }

  if (m_targetArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_targetArn.c_str()));
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws