/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ProjectBuildBatchConfig::ProjectBuildBatchConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProjectBuildBatchConfig& ProjectBuildBatchConfig::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "serviceRole") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_serviceRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_serviceRole = ss.str();
                  }
                }
                m_serviceRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "combineArtifacts") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_combineArtifacts = val.value();
                }
                m_combineArtifactsHasBeenSet = true;
              }

              else if (initialKeyStr == "restrictions") {
                m_restrictions = BatchRestrictions(decoder);
                m_restrictionsHasBeenSet = true;
              }

              else if (initialKeyStr == "timeoutInMins") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timeoutInMins = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_timeoutInMins = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_timeoutInMinsHasBeenSet = true;
              }

              else if (initialKeyStr == "batchReportMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_batchReportMode = BatchReportModeTypeMapper::GetBatchReportModeTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_batchReportModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProjectBuildBatchConfig", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "serviceRole") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_serviceRole = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_serviceRole = ss.str();
                }
              }
              m_serviceRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "combineArtifacts") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_combineArtifacts = val.value();
              }
              m_combineArtifactsHasBeenSet = true;
            }

            else if (initialKeyStr == "restrictions") {
              m_restrictions = BatchRestrictions(decoder);
              m_restrictionsHasBeenSet = true;
            }

            else if (initialKeyStr == "timeoutInMins") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_timeoutInMins = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_timeoutInMins = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_timeoutInMinsHasBeenSet = true;
            }

            else if (initialKeyStr == "batchReportMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_batchReportMode = BatchReportModeTypeMapper::GetBatchReportModeTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_batchReportModeHasBeenSet = true;
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

void ProjectBuildBatchConfig::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceRoleHasBeenSet) {
    mapSize++;
  }
  if (m_combineArtifactsHasBeenSet) {
    mapSize++;
  }
  if (m_restrictionsHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutInMinsHasBeenSet) {
    mapSize++;
  }
  if (m_batchReportModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serviceRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRole.c_str()));
  }

  if (m_combineArtifactsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("combineArtifacts"));
    encoder.WriteBool(m_combineArtifacts);
  }

  if (m_restrictionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("restrictions"));
    m_restrictions.CborEncode(encoder);
  }

  if (m_timeoutInMinsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timeoutInMins"));
    (m_timeoutInMins >= 0) ? encoder.WriteUInt(m_timeoutInMins) : encoder.WriteNegInt(m_timeoutInMins);
  }

  if (m_batchReportModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("batchReportMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BatchReportModeTypeMapper::GetNameForBatchReportModeType(m_batchReportMode).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws