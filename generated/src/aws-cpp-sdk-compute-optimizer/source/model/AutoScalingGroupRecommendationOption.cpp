/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupRecommendationOption.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

AutoScalingGroupRecommendationOption::AutoScalingGroupRecommendationOption(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

AutoScalingGroupRecommendationOption& AutoScalingGroupRecommendationOption::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "configuration") {
                m_configuration = AutoScalingGroupConfiguration(decoder);
                m_configurationHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceGpuInfo") {
                m_instanceGpuInfo = GpuInfo(decoder);
                m_instanceGpuInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "projectedUtilizationMetrics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_projectedUtilizationMetrics.push_back(UtilizationMetric(decoder));
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
                      m_projectedUtilizationMetrics.push_back(UtilizationMetric(decoder));
                    }
                  }
                }
                m_projectedUtilizationMetricsHasBeenSet = true;
              }

              else if (initialKeyStr == "performanceRisk") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_performanceRisk = val.value();
                }
                m_performanceRiskHasBeenSet = true;
              }

              else if (initialKeyStr == "rank") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_rank = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_rank = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_rankHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsOpportunity") {
                m_savingsOpportunity = SavingsOpportunity(decoder);
                m_savingsOpportunityHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsOpportunityAfterDiscounts") {
                m_savingsOpportunityAfterDiscounts = AutoScalingGroupSavingsOpportunityAfterDiscounts(decoder);
                m_savingsOpportunityAfterDiscountsHasBeenSet = true;
              }

              else if (initialKeyStr == "migrationEffort") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_migrationEffort = MigrationEffortMapper::GetMigrationEffortForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_migrationEffortHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AutoScalingGroupRecommendationOption", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "configuration") {
              m_configuration = AutoScalingGroupConfiguration(decoder);
              m_configurationHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceGpuInfo") {
              m_instanceGpuInfo = GpuInfo(decoder);
              m_instanceGpuInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "projectedUtilizationMetrics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_projectedUtilizationMetrics.push_back(UtilizationMetric(decoder));
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
                    m_projectedUtilizationMetrics.push_back(UtilizationMetric(decoder));
                  }
                }
              }
              m_projectedUtilizationMetricsHasBeenSet = true;
            }

            else if (initialKeyStr == "performanceRisk") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_performanceRisk = val.value();
              }
              m_performanceRiskHasBeenSet = true;
            }

            else if (initialKeyStr == "rank") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_rank = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_rank = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_rankHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsOpportunity") {
              m_savingsOpportunity = SavingsOpportunity(decoder);
              m_savingsOpportunityHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsOpportunityAfterDiscounts") {
              m_savingsOpportunityAfterDiscounts = AutoScalingGroupSavingsOpportunityAfterDiscounts(decoder);
              m_savingsOpportunityAfterDiscountsHasBeenSet = true;
            }

            else if (initialKeyStr == "migrationEffort") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_migrationEffort = MigrationEffortMapper::GetMigrationEffortForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_migrationEffortHasBeenSet = true;
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

void AutoScalingGroupRecommendationOption::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_configurationHasBeenSet) {
    mapSize++;
  }
  if (m_instanceGpuInfoHasBeenSet) {
    mapSize++;
  }
  if (m_projectedUtilizationMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_performanceRiskHasBeenSet) {
    mapSize++;
  }
  if (m_rankHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityAfterDiscountsHasBeenSet) {
    mapSize++;
  }
  if (m_migrationEffortHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_configurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configuration"));
    m_configuration.CborEncode(encoder);
  }

  if (m_instanceGpuInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceGpuInfo"));
    m_instanceGpuInfo.CborEncode(encoder);
  }

  if (m_projectedUtilizationMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectedUtilizationMetrics"));
    encoder.WriteArrayStart(m_projectedUtilizationMetrics.size());
    for (const auto& item_0 : m_projectedUtilizationMetrics) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_performanceRiskHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("performanceRisk"));
    encoder.WriteFloat(m_performanceRisk);
  }

  if (m_rankHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rank"));
    (m_rank >= 0) ? encoder.WriteUInt(m_rank) : encoder.WriteNegInt(m_rank);
  }

  if (m_savingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunity"));
    m_savingsOpportunity.CborEncode(encoder);
  }

  if (m_savingsOpportunityAfterDiscountsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunityAfterDiscounts"));
    m_savingsOpportunityAfterDiscounts.CborEncode(encoder);
  }

  if (m_migrationEffortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("migrationEffort"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MigrationEffortMapper::GetNameForMigrationEffort(m_migrationEffort).c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws