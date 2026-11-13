/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageState.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

StageState::StageState(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

StageState& StageState::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "stageName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stageName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stageName = ss.str();
                  }
                }
                m_stageNameHasBeenSet = true;
              }

              else if (initialKeyStr == "inboundExecution") {
                m_inboundExecution = StageExecution(decoder);
                m_inboundExecutionHasBeenSet = true;
              }

              else if (initialKeyStr == "inboundExecutions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_inboundExecutions.push_back(StageExecution(decoder));
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
                      m_inboundExecutions.push_back(StageExecution(decoder));
                    }
                  }
                }
                m_inboundExecutionsHasBeenSet = true;
              }

              else if (initialKeyStr == "inboundTransitionState") {
                m_inboundTransitionState = TransitionState(decoder);
                m_inboundTransitionStateHasBeenSet = true;
              }

              else if (initialKeyStr == "actionStates") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_actionStates.push_back(ActionState(decoder));
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
                      m_actionStates.push_back(ActionState(decoder));
                    }
                  }
                }
                m_actionStatesHasBeenSet = true;
              }

              else if (initialKeyStr == "latestExecution") {
                m_latestExecution = StageExecution(decoder);
                m_latestExecutionHasBeenSet = true;
              }

              else if (initialKeyStr == "beforeEntryConditionState") {
                m_beforeEntryConditionState = StageConditionState(decoder);
                m_beforeEntryConditionStateHasBeenSet = true;
              }

              else if (initialKeyStr == "onSuccessConditionState") {
                m_onSuccessConditionState = StageConditionState(decoder);
                m_onSuccessConditionStateHasBeenSet = true;
              }

              else if (initialKeyStr == "onFailureConditionState") {
                m_onFailureConditionState = StageConditionState(decoder);
                m_onFailureConditionStateHasBeenSet = true;
              }

              else if (initialKeyStr == "retryStageMetadata") {
                m_retryStageMetadata = RetryStageMetadata(decoder);
                m_retryStageMetadataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("StageState", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "stageName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stageName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stageName = ss.str();
                }
              }
              m_stageNameHasBeenSet = true;
            }

            else if (initialKeyStr == "inboundExecution") {
              m_inboundExecution = StageExecution(decoder);
              m_inboundExecutionHasBeenSet = true;
            }

            else if (initialKeyStr == "inboundExecutions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_inboundExecutions.push_back(StageExecution(decoder));
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
                    m_inboundExecutions.push_back(StageExecution(decoder));
                  }
                }
              }
              m_inboundExecutionsHasBeenSet = true;
            }

            else if (initialKeyStr == "inboundTransitionState") {
              m_inboundTransitionState = TransitionState(decoder);
              m_inboundTransitionStateHasBeenSet = true;
            }

            else if (initialKeyStr == "actionStates") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_actionStates.push_back(ActionState(decoder));
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
                    m_actionStates.push_back(ActionState(decoder));
                  }
                }
              }
              m_actionStatesHasBeenSet = true;
            }

            else if (initialKeyStr == "latestExecution") {
              m_latestExecution = StageExecution(decoder);
              m_latestExecutionHasBeenSet = true;
            }

            else if (initialKeyStr == "beforeEntryConditionState") {
              m_beforeEntryConditionState = StageConditionState(decoder);
              m_beforeEntryConditionStateHasBeenSet = true;
            }

            else if (initialKeyStr == "onSuccessConditionState") {
              m_onSuccessConditionState = StageConditionState(decoder);
              m_onSuccessConditionStateHasBeenSet = true;
            }

            else if (initialKeyStr == "onFailureConditionState") {
              m_onFailureConditionState = StageConditionState(decoder);
              m_onFailureConditionStateHasBeenSet = true;
            }

            else if (initialKeyStr == "retryStageMetadata") {
              m_retryStageMetadata = RetryStageMetadata(decoder);
              m_retryStageMetadataHasBeenSet = true;
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

void StageState::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_stageNameHasBeenSet) {
    mapSize++;
  }
  if (m_inboundExecutionHasBeenSet) {
    mapSize++;
  }
  if (m_inboundExecutionsHasBeenSet) {
    mapSize++;
  }
  if (m_inboundTransitionStateHasBeenSet) {
    mapSize++;
  }
  if (m_actionStatesHasBeenSet) {
    mapSize++;
  }
  if (m_latestExecutionHasBeenSet) {
    mapSize++;
  }
  if (m_beforeEntryConditionStateHasBeenSet) {
    mapSize++;
  }
  if (m_onSuccessConditionStateHasBeenSet) {
    mapSize++;
  }
  if (m_onFailureConditionStateHasBeenSet) {
    mapSize++;
  }
  if (m_retryStageMetadataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_stageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stageName.c_str()));
  }

  if (m_inboundExecutionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inboundExecution"));
    m_inboundExecution.CborEncode(encoder);
  }

  if (m_inboundExecutionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inboundExecutions"));
    encoder.WriteArrayStart(m_inboundExecutions.size());
    for (const auto& item_0 : m_inboundExecutions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_inboundTransitionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inboundTransitionState"));
    m_inboundTransitionState.CborEncode(encoder);
  }

  if (m_actionStatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("actionStates"));
    encoder.WriteArrayStart(m_actionStates.size());
    for (const auto& item_0 : m_actionStates) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_latestExecutionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("latestExecution"));
    m_latestExecution.CborEncode(encoder);
  }

  if (m_beforeEntryConditionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("beforeEntryConditionState"));
    m_beforeEntryConditionState.CborEncode(encoder);
  }

  if (m_onSuccessConditionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("onSuccessConditionState"));
    m_onSuccessConditionState.CborEncode(encoder);
  }

  if (m_onFailureConditionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("onFailureConditionState"));
    m_onFailureConditionState.CborEncode(encoder);
  }

  if (m_retryStageMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("retryStageMetadata"));
    m_retryStageMetadata.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws