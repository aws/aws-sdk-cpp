/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationSummary.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

RecommendationSummary::RecommendationSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RecommendationSummary& RecommendationSummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "summaries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_summaries.push_back(Summary(decoder));
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
                      m_summaries.push_back(Summary(decoder));
                    }
                  }
                }
                m_summariesHasBeenSet = true;
              }

              else if (initialKeyStr == "idleSummaries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_idleSummaries.push_back(IdleSummary(decoder));
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
                      m_idleSummaries.push_back(IdleSummary(decoder));
                    }
                  }
                }
                m_idleSummariesHasBeenSet = true;
              }

              else if (initialKeyStr == "recommendationResourceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_recommendationResourceType = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_recommendationResourceTypeHasBeenSet = true;
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

              else if (initialKeyStr == "savingsOpportunity") {
                m_savingsOpportunity = SavingsOpportunity(decoder);
                m_savingsOpportunityHasBeenSet = true;
              }

              else if (initialKeyStr == "idleSavingsOpportunity") {
                m_idleSavingsOpportunity = SavingsOpportunity(decoder);
                m_idleSavingsOpportunityHasBeenSet = true;
              }

              else if (initialKeyStr == "aggregatedSavingsOpportunity") {
                m_aggregatedSavingsOpportunity = SavingsOpportunity(decoder);
                m_aggregatedSavingsOpportunityHasBeenSet = true;
              }

              else if (initialKeyStr == "currentPerformanceRiskRatings") {
                m_currentPerformanceRiskRatings = CurrentPerformanceRiskRatings(decoder);
                m_currentPerformanceRiskRatingsHasBeenSet = true;
              }

              else if (initialKeyStr == "inferredWorkloadSavings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_inferredWorkloadSavings.push_back(InferredWorkloadSaving(decoder));
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
                      m_inferredWorkloadSavings.push_back(InferredWorkloadSaving(decoder));
                    }
                  }
                }
                m_inferredWorkloadSavingsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RecommendationSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "summaries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_summaries.push_back(Summary(decoder));
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
                    m_summaries.push_back(Summary(decoder));
                  }
                }
              }
              m_summariesHasBeenSet = true;
            }

            else if (initialKeyStr == "idleSummaries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_idleSummaries.push_back(IdleSummary(decoder));
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
                    m_idleSummaries.push_back(IdleSummary(decoder));
                  }
                }
              }
              m_idleSummariesHasBeenSet = true;
            }

            else if (initialKeyStr == "recommendationResourceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_recommendationResourceType = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_recommendationResourceTypeHasBeenSet = true;
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

            else if (initialKeyStr == "savingsOpportunity") {
              m_savingsOpportunity = SavingsOpportunity(decoder);
              m_savingsOpportunityHasBeenSet = true;
            }

            else if (initialKeyStr == "idleSavingsOpportunity") {
              m_idleSavingsOpportunity = SavingsOpportunity(decoder);
              m_idleSavingsOpportunityHasBeenSet = true;
            }

            else if (initialKeyStr == "aggregatedSavingsOpportunity") {
              m_aggregatedSavingsOpportunity = SavingsOpportunity(decoder);
              m_aggregatedSavingsOpportunityHasBeenSet = true;
            }

            else if (initialKeyStr == "currentPerformanceRiskRatings") {
              m_currentPerformanceRiskRatings = CurrentPerformanceRiskRatings(decoder);
              m_currentPerformanceRiskRatingsHasBeenSet = true;
            }

            else if (initialKeyStr == "inferredWorkloadSavings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_inferredWorkloadSavings.push_back(InferredWorkloadSaving(decoder));
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
                    m_inferredWorkloadSavings.push_back(InferredWorkloadSaving(decoder));
                  }
                }
              }
              m_inferredWorkloadSavingsHasBeenSet = true;
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

void RecommendationSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_summariesHasBeenSet) {
    mapSize++;
  }
  if (m_idleSummariesHasBeenSet) {
    mapSize++;
  }
  if (m_recommendationResourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityHasBeenSet) {
    mapSize++;
  }
  if (m_idleSavingsOpportunityHasBeenSet) {
    mapSize++;
  }
  if (m_aggregatedSavingsOpportunityHasBeenSet) {
    mapSize++;
  }
  if (m_currentPerformanceRiskRatingsHasBeenSet) {
    mapSize++;
  }
  if (m_inferredWorkloadSavingsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_summariesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("summaries"));
    encoder.WriteArrayStart(m_summaries.size());
    for (const auto& item_0 : m_summaries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_idleSummariesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idleSummaries"));
    encoder.WriteArrayStart(m_idleSummaries.size());
    for (const auto& item_0 : m_idleSummaries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_recommendationResourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendationResourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RecommendationSourceTypeMapper::GetNameForRecommendationSourceType(m_recommendationResourceType).c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_savingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunity"));
    m_savingsOpportunity.CborEncode(encoder);
  }

  if (m_idleSavingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idleSavingsOpportunity"));
    m_idleSavingsOpportunity.CborEncode(encoder);
  }

  if (m_aggregatedSavingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("aggregatedSavingsOpportunity"));
    m_aggregatedSavingsOpportunity.CborEncode(encoder);
  }

  if (m_currentPerformanceRiskRatingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentPerformanceRiskRatings"));
    m_currentPerformanceRiskRatings.CborEncode(encoder);
  }

  if (m_inferredWorkloadSavingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("inferredWorkloadSavings"));
    encoder.WriteArrayStart(m_inferredWorkloadSavings.size());
    for (const auto& item_0 : m_inferredWorkloadSavings) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws