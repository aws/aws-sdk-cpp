/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationPreferencesDetail.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

RecommendationPreferencesDetail::RecommendationPreferencesDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

RecommendationPreferencesDetail& RecommendationPreferencesDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "scope") {
                m_scope = Scope(decoder);
                m_scopeHasBeenSet = true;
              }

              else if (initialKeyStr == "resourceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_resourceType = ResourceTypeMapper::GetResourceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_resourceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "enhancedInfrastructureMetrics") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_enhancedInfrastructureMetricsHasBeenSet = true;
              }

              else if (initialKeyStr == "inferredWorkloadTypes") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_inferredWorkloadTypes = InferredWorkloadTypesPreferenceMapper::GetInferredWorkloadTypesPreferenceForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_inferredWorkloadTypesHasBeenSet = true;
              }

              else if (initialKeyStr == "externalMetricsPreference") {
                m_externalMetricsPreference = ExternalMetricsPreference(decoder);
                m_externalMetricsPreferenceHasBeenSet = true;
              }

              else if (initialKeyStr == "lookBackPeriod") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_lookBackPeriodHasBeenSet = true;
              }

              else if (initialKeyStr == "utilizationPreferences") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_utilizationPreferences.push_back(UtilizationPreference(decoder));
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
                      m_utilizationPreferences.push_back(UtilizationPreference(decoder));
                    }
                  }
                }
                m_utilizationPreferencesHasBeenSet = true;
              }

              else if (initialKeyStr == "preferredResources") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_preferredResources.push_back(EffectivePreferredResource(decoder));
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
                      m_preferredResources.push_back(EffectivePreferredResource(decoder));
                    }
                  }
                }
                m_preferredResourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsEstimationMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_savingsEstimationModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RecommendationPreferencesDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "scope") {
              m_scope = Scope(decoder);
              m_scopeHasBeenSet = true;
            }

            else if (initialKeyStr == "resourceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_resourceType = ResourceTypeMapper::GetResourceTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_resourceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "enhancedInfrastructureMetrics") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_enhancedInfrastructureMetrics = EnhancedInfrastructureMetricsMapper::GetEnhancedInfrastructureMetricsForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_enhancedInfrastructureMetricsHasBeenSet = true;
            }

            else if (initialKeyStr == "inferredWorkloadTypes") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_inferredWorkloadTypes = InferredWorkloadTypesPreferenceMapper::GetInferredWorkloadTypesPreferenceForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_inferredWorkloadTypesHasBeenSet = true;
            }

            else if (initialKeyStr == "externalMetricsPreference") {
              m_externalMetricsPreference = ExternalMetricsPreference(decoder);
              m_externalMetricsPreferenceHasBeenSet = true;
            }

            else if (initialKeyStr == "lookBackPeriod") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_lookBackPeriod = LookBackPeriodPreferenceMapper::GetLookBackPeriodPreferenceForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_lookBackPeriodHasBeenSet = true;
            }

            else if (initialKeyStr == "utilizationPreferences") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_utilizationPreferences.push_back(UtilizationPreference(decoder));
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
                    m_utilizationPreferences.push_back(UtilizationPreference(decoder));
                  }
                }
              }
              m_utilizationPreferencesHasBeenSet = true;
            }

            else if (initialKeyStr == "preferredResources") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_preferredResources.push_back(EffectivePreferredResource(decoder));
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
                    m_preferredResources.push_back(EffectivePreferredResource(decoder));
                  }
                }
              }
              m_preferredResourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsEstimationMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_savingsEstimationModeHasBeenSet = true;
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

void RecommendationPreferencesDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_scopeHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_enhancedInfrastructureMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_inferredWorkloadTypesHasBeenSet) {
    mapSize++;
  }
  if (m_externalMetricsPreferenceHasBeenSet) {
    mapSize++;
  }
  if (m_lookBackPeriodHasBeenSet) {
    mapSize++;
  }
  if (m_utilizationPreferencesHasBeenSet) {
    mapSize++;
  }
  if (m_preferredResourcesHasBeenSet) {
    mapSize++;
  }
  if (m_savingsEstimationModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_scopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("scope"));
    m_scope.CborEncode(encoder);
  }

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResourceTypeMapper::GetNameForResourceType(m_resourceType).c_str()));
  }

  if (m_enhancedInfrastructureMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("enhancedInfrastructureMetrics"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        EnhancedInfrastructureMetricsMapper::GetNameForEnhancedInfrastructureMetrics(m_enhancedInfrastructureMetrics).c_str()));
  }

  if (m_inferredWorkloadTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inferredWorkloadTypes"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        InferredWorkloadTypesPreferenceMapper::GetNameForInferredWorkloadTypesPreference(m_inferredWorkloadTypes).c_str()));
  }

  if (m_externalMetricsPreferenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("externalMetricsPreference"));
    m_externalMetricsPreference.CborEncode(encoder);
  }

  if (m_lookBackPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lookBackPeriod"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(LookBackPeriodPreferenceMapper::GetNameForLookBackPeriodPreference(m_lookBackPeriod).c_str()));
  }

  if (m_utilizationPreferencesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("utilizationPreferences"));
    encoder.WriteArrayStart(m_utilizationPreferences.size());
    for (const auto& item_0 : m_utilizationPreferences) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_preferredResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("preferredResources"));
    encoder.WriteArrayStart(m_preferredResources.size());
    for (const auto& item_0 : m_preferredResources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_savingsEstimationModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsEstimationMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode).c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws