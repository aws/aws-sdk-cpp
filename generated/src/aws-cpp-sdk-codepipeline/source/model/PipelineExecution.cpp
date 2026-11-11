/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineExecution.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

PipelineExecution::PipelineExecution(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PipelineExecution& PipelineExecution::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "pipelineName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_pipelineName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_pipelineName = ss.str();
                  }
                }
                m_pipelineNameHasBeenSet = true;
              }

              else if (initialKeyStr == "pipelineVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pipelineVersion = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pipelineVersion = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pipelineVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "pipelineExecutionId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_pipelineExecutionId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_pipelineExecutionId = ss.str();
                  }
                }
                m_pipelineExecutionIdHasBeenSet = true;
              }

              else if (initialKeyStr == "status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "statusSummary") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_statusSummary = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_statusSummary = ss.str();
                  }
                }
                m_statusSummaryHasBeenSet = true;
              }

              else if (initialKeyStr == "artifactRevisions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_artifactRevisions.push_back(ArtifactRevision(decoder));
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
                      m_artifactRevisions.push_back(ArtifactRevision(decoder));
                    }
                  }
                }
                m_artifactRevisionsHasBeenSet = true;
              }

              else if (initialKeyStr == "variables") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_variables.push_back(ResolvedPipelineVariable(decoder));
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
                      m_variables.push_back(ResolvedPipelineVariable(decoder));
                    }
                  }
                }
                m_variablesHasBeenSet = true;
              }

              else if (initialKeyStr == "trigger") {
                m_trigger = ExecutionTrigger(decoder);
                m_triggerHasBeenSet = true;
              }

              else if (initialKeyStr == "executionMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_executionMode = ExecutionModeMapper::GetExecutionModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_executionModeHasBeenSet = true;
              }

              else if (initialKeyStr == "executionType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_executionType = ExecutionTypeMapper::GetExecutionTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_executionTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "rollbackMetadata") {
                m_rollbackMetadata = PipelineRollbackMetadata(decoder);
                m_rollbackMetadataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PipelineExecution", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "pipelineName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_pipelineName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_pipelineName = ss.str();
                }
              }
              m_pipelineNameHasBeenSet = true;
            }

            else if (initialKeyStr == "pipelineVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pipelineVersion = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pipelineVersion = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pipelineVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "pipelineExecutionId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_pipelineExecutionId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_pipelineExecutionId = ss.str();
                }
              }
              m_pipelineExecutionIdHasBeenSet = true;
            }

            else if (initialKeyStr == "status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "statusSummary") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_statusSummary = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_statusSummary = ss.str();
                }
              }
              m_statusSummaryHasBeenSet = true;
            }

            else if (initialKeyStr == "artifactRevisions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_artifactRevisions.push_back(ArtifactRevision(decoder));
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
                    m_artifactRevisions.push_back(ArtifactRevision(decoder));
                  }
                }
              }
              m_artifactRevisionsHasBeenSet = true;
            }

            else if (initialKeyStr == "variables") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_variables.push_back(ResolvedPipelineVariable(decoder));
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
                    m_variables.push_back(ResolvedPipelineVariable(decoder));
                  }
                }
              }
              m_variablesHasBeenSet = true;
            }

            else if (initialKeyStr == "trigger") {
              m_trigger = ExecutionTrigger(decoder);
              m_triggerHasBeenSet = true;
            }

            else if (initialKeyStr == "executionMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_executionMode = ExecutionModeMapper::GetExecutionModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_executionModeHasBeenSet = true;
            }

            else if (initialKeyStr == "executionType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_executionType = ExecutionTypeMapper::GetExecutionTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_executionTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "rollbackMetadata") {
              m_rollbackMetadata = PipelineRollbackMetadata(decoder);
              m_rollbackMetadataHasBeenSet = true;
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

void PipelineExecution::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_pipelineNameHasBeenSet) {
    mapSize++;
  }
  if (m_pipelineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_pipelineExecutionIdHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_statusSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_artifactRevisionsHasBeenSet) {
    mapSize++;
  }
  if (m_variablesHasBeenSet) {
    mapSize++;
  }
  if (m_triggerHasBeenSet) {
    mapSize++;
  }
  if (m_executionModeHasBeenSet) {
    mapSize++;
  }
  if (m_executionTypeHasBeenSet) {
    mapSize++;
  }
  if (m_rollbackMetadataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_pipelineNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pipelineName.c_str()));
  }

  if (m_pipelineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineVersion"));
    (m_pipelineVersion >= 0) ? encoder.WriteUInt(m_pipelineVersion) : encoder.WriteNegInt(m_pipelineVersion);
  }

  if (m_pipelineExecutionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pipelineExecutionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pipelineExecutionId.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_status).c_str()));
  }

  if (m_statusSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("statusSummary"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_statusSummary.c_str()));
  }

  if (m_artifactRevisionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("artifactRevisions"));
    encoder.WriteArrayStart(m_artifactRevisions.size());
    for (const auto& item_0 : m_artifactRevisions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_variablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("variables"));
    encoder.WriteArrayStart(m_variables.size());
    for (const auto& item_0 : m_variables) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_triggerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("trigger"));
    m_trigger.CborEncode(encoder);
  }

  if (m_executionModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("executionMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ExecutionModeMapper::GetNameForExecutionMode(m_executionMode).c_str()));
  }

  if (m_executionTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("executionType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ExecutionTypeMapper::GetNameForExecutionType(m_executionType).c_str()));
  }

  if (m_rollbackMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rollbackMetadata"));
    m_rollbackMetadata.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws