/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceRecommendation.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

InstanceRecommendation::InstanceRecommendation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

InstanceRecommendation& InstanceRecommendation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "instanceArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceArn = ss.str();
                  }
                }
                m_instanceArnHasBeenSet = true;
              }

              else if (initialKeyStr == "accountId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_accountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_accountId = ss.str();
                  }
                }
                m_accountIdHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceName = ss.str();
                  }
                }
                m_instanceNameHasBeenSet = true;
              }

              else if (initialKeyStr == "currentInstanceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_currentInstanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_currentInstanceType = ss.str();
                  }
                }
                m_currentInstanceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "finding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_finding =
                      FindingMapper::GetFindingForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_findingHasBeenSet = true;
              }

              else if (initialKeyStr == "findingReasonCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_findingReasonCodes.push_back(
                              InstanceRecommendationFindingReasonCodeMapper::GetInstanceRecommendationFindingReasonCodeForName(
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                        }
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_findingReasonCodes.push_back(
                            InstanceRecommendationFindingReasonCodeMapper::GetInstanceRecommendationFindingReasonCodeForName(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_findingReasonCodesHasBeenSet = true;
              }

              else if (initialKeyStr == "utilizationMetrics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_utilizationMetrics.push_back(UtilizationMetric(decoder));
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
                      m_utilizationMetrics.push_back(UtilizationMetric(decoder));
                    }
                  }
                }
                m_utilizationMetricsHasBeenSet = true;
              }

              else if (initialKeyStr == "lookBackPeriodInDays") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_lookBackPeriodInDays = val.value();
                }
                m_lookBackPeriodInDaysHasBeenSet = true;
              }

              else if (initialKeyStr == "recommendationOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_recommendationOptions.push_back(InstanceRecommendationOption(decoder));
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
                      m_recommendationOptions.push_back(InstanceRecommendationOption(decoder));
                    }
                  }
                }
                m_recommendationOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "recommendationSources") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_recommendationSources.push_back(RecommendationSource(decoder));
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
                      m_recommendationSources.push_back(RecommendationSource(decoder));
                    }
                  }
                }
                m_recommendationSourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "lastRefreshTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastRefreshTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastRefreshTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastRefreshTimestampHasBeenSet = true;
              }

              else if (initialKeyStr == "currentPerformanceRisk") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_currentPerformanceRisk = CurrentPerformanceRiskMapper::GetCurrentPerformanceRiskForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_currentPerformanceRiskHasBeenSet = true;
              }

              else if (initialKeyStr == "effectiveRecommendationPreferences") {
                m_effectiveRecommendationPreferences = EffectiveRecommendationPreferences(decoder);
                m_effectiveRecommendationPreferencesHasBeenSet = true;
              }

              else if (initialKeyStr == "inferredWorkloadTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                        }
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_inferredWorkloadTypesHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_instanceState = InstanceStateMapper::GetInstanceStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_instanceStateHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tags.push_back(Tag(decoder));
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
                      m_tags.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "externalMetricStatus") {
                m_externalMetricStatus = ExternalMetricStatus(decoder);
                m_externalMetricStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "currentInstanceGpuInfo") {
                m_currentInstanceGpuInfo = GpuInfo(decoder);
                m_currentInstanceGpuInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "idle") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_idle = InstanceIdleMapper::GetInstanceIdleForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_idleHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InstanceRecommendation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "instanceArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceArn = ss.str();
                }
              }
              m_instanceArnHasBeenSet = true;
            }

            else if (initialKeyStr == "accountId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_accountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_accountId = ss.str();
                }
              }
              m_accountIdHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceName = ss.str();
                }
              }
              m_instanceNameHasBeenSet = true;
            }

            else if (initialKeyStr == "currentInstanceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_currentInstanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_currentInstanceType = ss.str();
                }
              }
              m_currentInstanceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "finding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_finding = FindingMapper::GetFindingForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_findingHasBeenSet = true;
            }

            else if (initialKeyStr == "findingReasonCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_findingReasonCodes.push_back(
                            InstanceRecommendationFindingReasonCodeMapper::GetInstanceRecommendationFindingReasonCodeForName(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_findingReasonCodes.push_back(
                          InstanceRecommendationFindingReasonCodeMapper::GetInstanceRecommendationFindingReasonCodeForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_findingReasonCodesHasBeenSet = true;
            }

            else if (initialKeyStr == "utilizationMetrics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_utilizationMetrics.push_back(UtilizationMetric(decoder));
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
                    m_utilizationMetrics.push_back(UtilizationMetric(decoder));
                  }
                }
              }
              m_utilizationMetricsHasBeenSet = true;
            }

            else if (initialKeyStr == "lookBackPeriodInDays") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_lookBackPeriodInDays = val.value();
              }
              m_lookBackPeriodInDaysHasBeenSet = true;
            }

            else if (initialKeyStr == "recommendationOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_recommendationOptions.push_back(InstanceRecommendationOption(decoder));
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
                    m_recommendationOptions.push_back(InstanceRecommendationOption(decoder));
                  }
                }
              }
              m_recommendationOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "recommendationSources") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_recommendationSources.push_back(RecommendationSource(decoder));
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
                    m_recommendationSources.push_back(RecommendationSource(decoder));
                  }
                }
              }
              m_recommendationSourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "lastRefreshTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastRefreshTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastRefreshTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastRefreshTimestampHasBeenSet = true;
            }

            else if (initialKeyStr == "currentPerformanceRisk") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_currentPerformanceRisk = CurrentPerformanceRiskMapper::GetCurrentPerformanceRiskForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_currentPerformanceRiskHasBeenSet = true;
            }

            else if (initialKeyStr == "effectiveRecommendationPreferences") {
              m_effectiveRecommendationPreferences = EffectiveRecommendationPreferences(decoder);
              m_effectiveRecommendationPreferencesHasBeenSet = true;
            }

            else if (initialKeyStr == "inferredWorkloadTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_inferredWorkloadTypesHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_instanceState = InstanceStateMapper::GetInstanceStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_instanceStateHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tags.push_back(Tag(decoder));
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
                    m_tags.push_back(Tag(decoder));
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "externalMetricStatus") {
              m_externalMetricStatus = ExternalMetricStatus(decoder);
              m_externalMetricStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "currentInstanceGpuInfo") {
              m_currentInstanceGpuInfo = GpuInfo(decoder);
              m_currentInstanceGpuInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "idle") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_idle = InstanceIdleMapper::GetInstanceIdleForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_idleHasBeenSet = true;
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

void InstanceRecommendation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_instanceArnHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_instanceNameHasBeenSet) {
    mapSize++;
  }
  if (m_currentInstanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_findingHasBeenSet) {
    mapSize++;
  }
  if (m_findingReasonCodesHasBeenSet) {
    mapSize++;
  }
  if (m_utilizationMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_lookBackPeriodInDaysHasBeenSet) {
    mapSize++;
  }
  if (m_recommendationOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_recommendationSourcesHasBeenSet) {
    mapSize++;
  }
  if (m_lastRefreshTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_currentPerformanceRiskHasBeenSet) {
    mapSize++;
  }
  if (m_effectiveRecommendationPreferencesHasBeenSet) {
    mapSize++;
  }
  if (m_inferredWorkloadTypesHasBeenSet) {
    mapSize++;
  }
  if (m_instanceStateHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_externalMetricStatusHasBeenSet) {
    mapSize++;
  }
  if (m_currentInstanceGpuInfoHasBeenSet) {
    mapSize++;
  }
  if (m_idleHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_instanceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceArn.c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_instanceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceName.c_str()));
  }

  if (m_currentInstanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentInstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_currentInstanceType.c_str()));
  }

  if (m_findingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("finding"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FindingMapper::GetNameForFinding(m_finding).c_str()));
  }

  if (m_findingReasonCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("findingReasonCodes"));
    encoder.WriteArrayStart(m_findingReasonCodes.size());
    for (const auto& item_0 : m_findingReasonCodes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(
          InstanceRecommendationFindingReasonCodeMapper::GetNameForInstanceRecommendationFindingReasonCode(item_0).c_str()));
    }
  }

  if (m_utilizationMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("utilizationMetrics"));
    encoder.WriteArrayStart(m_utilizationMetrics.size());
    for (const auto& item_0 : m_utilizationMetrics) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_lookBackPeriodInDaysHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lookBackPeriodInDays"));
    encoder.WriteFloat(m_lookBackPeriodInDays);
  }

  if (m_recommendationOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendationOptions"));
    encoder.WriteArrayStart(m_recommendationOptions.size());
    for (const auto& item_0 : m_recommendationOptions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_recommendationSourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendationSources"));
    encoder.WriteArrayStart(m_recommendationSources.size());
    for (const auto& item_0 : m_recommendationSources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_lastRefreshTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastRefreshTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastRefreshTimestamp.Seconds());
  }

  if (m_currentPerformanceRiskHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentPerformanceRisk"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CurrentPerformanceRiskMapper::GetNameForCurrentPerformanceRisk(m_currentPerformanceRisk).c_str()));
  }

  if (m_effectiveRecommendationPreferencesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("effectiveRecommendationPreferences"));
    m_effectiveRecommendationPreferences.CborEncode(encoder);
  }

  if (m_inferredWorkloadTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inferredWorkloadTypes"));
    encoder.WriteArrayStart(m_inferredWorkloadTypes.size());
    for (const auto& item_0 : m_inferredWorkloadTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(InferredWorkloadTypeMapper::GetNameForInferredWorkloadType(item_0).c_str()));
    }
  }

  if (m_instanceStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InstanceStateMapper::GetNameForInstanceState(m_instanceState).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_externalMetricStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("externalMetricStatus"));
    m_externalMetricStatus.CborEncode(encoder);
  }

  if (m_currentInstanceGpuInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentInstanceGpuInfo"));
    m_currentInstanceGpuInfo.CborEncode(encoder);
  }

  if (m_idleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idle"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InstanceIdleMapper::GetNameForInstanceIdle(m_idle).c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws