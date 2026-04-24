/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBRecommendation.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

RDSDBRecommendation::RDSDBRecommendation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RDSDBRecommendation& RDSDBRecommendation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "resourceArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceArn = ss.str();
                  }
                }
                m_resourceArnHasBeenSet = true;
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

              else if (initialKeyStr == "engine") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_engine = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_engine = ss.str();
                  }
                }
                m_engineHasBeenSet = true;
              }

              else if (initialKeyStr == "engineVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_engineVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_engineVersion = ss.str();
                  }
                }
                m_engineVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "promotionTier") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_promotionTier = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_promotionTier = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_promotionTierHasBeenSet = true;
              }

              else if (initialKeyStr == "currentDBInstanceClass") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_currentDBInstanceClass = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_currentDBInstanceClass = ss.str();
                  }
                }
                m_currentDBInstanceClassHasBeenSet = true;
              }

              else if (initialKeyStr == "currentStorageConfiguration") {
                m_currentStorageConfiguration = DBStorageConfiguration(decoder);
                m_currentStorageConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "dbClusterIdentifier") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_dbClusterIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_dbClusterIdentifier = ss.str();
                  }
                }
                m_dbClusterIdentifierHasBeenSet = true;
              }

              else if (initialKeyStr == "idle") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_idle = IdleMapper::GetIdleForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_idleHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceFinding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_instanceFinding = RDSInstanceFindingMapper::GetRDSInstanceFindingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_instanceFindingHasBeenSet = true;
              }

              else if (initialKeyStr == "storageFinding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_storageFinding = RDSStorageFindingMapper::GetRDSStorageFindingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_storageFindingHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceFindingReasonCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_instanceFindingReasonCodes.push_back(RDSInstanceFindingReasonCodeMapper::GetRDSInstanceFindingReasonCodeForName(
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
                        m_instanceFindingReasonCodes.push_back(RDSInstanceFindingReasonCodeMapper::GetRDSInstanceFindingReasonCodeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_instanceFindingReasonCodesHasBeenSet = true;
              }

              else if (initialKeyStr == "currentInstancePerformanceRisk") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_currentInstancePerformanceRisk = RDSCurrentInstancePerformanceRiskMapper::GetRDSCurrentInstancePerformanceRiskForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_currentInstancePerformanceRiskHasBeenSet = true;
              }

              else if (initialKeyStr == "currentStorageEstimatedMonthlyVolumeIOPsCostVariation") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation =
                      RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
              }

              else if (initialKeyStr == "storageFindingReasonCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_storageFindingReasonCodes.push_back(RDSStorageFindingReasonCodeMapper::GetRDSStorageFindingReasonCodeForName(
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
                        m_storageFindingReasonCodes.push_back(RDSStorageFindingReasonCodeMapper::GetRDSStorageFindingReasonCodeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_storageFindingReasonCodesHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceRecommendationOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_instanceRecommendationOptions.push_back(RDSDBInstanceRecommendationOption(decoder));
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
                      m_instanceRecommendationOptions.push_back(RDSDBInstanceRecommendationOption(decoder));
                    }
                  }
                }
                m_instanceRecommendationOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "storageRecommendationOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_storageRecommendationOptions.push_back(RDSDBStorageRecommendationOption(decoder));
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
                      m_storageRecommendationOptions.push_back(RDSDBStorageRecommendationOption(decoder));
                    }
                  }
                }
                m_storageRecommendationOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "utilizationMetrics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_utilizationMetrics.push_back(RDSDBUtilizationMetric(decoder));
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
                      m_utilizationMetrics.push_back(RDSDBUtilizationMetric(decoder));
                    }
                  }
                }
                m_utilizationMetricsHasBeenSet = true;
              }

              else if (initialKeyStr == "effectiveRecommendationPreferences") {
                m_effectiveRecommendationPreferences = RDSEffectiveRecommendationPreferences(decoder);
                m_effectiveRecommendationPreferencesHasBeenSet = true;
              }

              else if (initialKeyStr == "lookbackPeriodInDays") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_lookbackPeriodInDays = val.value();
                }
                m_lookbackPeriodInDaysHasBeenSet = true;
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
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RDSDBRecommendation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "resourceArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceArn = ss.str();
                }
              }
              m_resourceArnHasBeenSet = true;
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

            else if (initialKeyStr == "engine") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_engine = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_engine = ss.str();
                }
              }
              m_engineHasBeenSet = true;
            }

            else if (initialKeyStr == "engineVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_engineVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_engineVersion = ss.str();
                }
              }
              m_engineVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "promotionTier") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_promotionTier = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_promotionTier = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_promotionTierHasBeenSet = true;
            }

            else if (initialKeyStr == "currentDBInstanceClass") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_currentDBInstanceClass = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_currentDBInstanceClass = ss.str();
                }
              }
              m_currentDBInstanceClassHasBeenSet = true;
            }

            else if (initialKeyStr == "currentStorageConfiguration") {
              m_currentStorageConfiguration = DBStorageConfiguration(decoder);
              m_currentStorageConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "dbClusterIdentifier") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_dbClusterIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_dbClusterIdentifier = ss.str();
                }
              }
              m_dbClusterIdentifierHasBeenSet = true;
            }

            else if (initialKeyStr == "idle") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_idle = IdleMapper::GetIdleForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_idleHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceFinding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_instanceFinding = RDSInstanceFindingMapper::GetRDSInstanceFindingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_instanceFindingHasBeenSet = true;
            }

            else if (initialKeyStr == "storageFinding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_storageFinding = RDSStorageFindingMapper::GetRDSStorageFindingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_storageFindingHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceFindingReasonCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_instanceFindingReasonCodes.push_back(RDSInstanceFindingReasonCodeMapper::GetRDSInstanceFindingReasonCodeForName(
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
                      m_instanceFindingReasonCodes.push_back(RDSInstanceFindingReasonCodeMapper::GetRDSInstanceFindingReasonCodeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_instanceFindingReasonCodesHasBeenSet = true;
            }

            else if (initialKeyStr == "currentInstancePerformanceRisk") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_currentInstancePerformanceRisk = RDSCurrentInstancePerformanceRiskMapper::GetRDSCurrentInstancePerformanceRiskForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_currentInstancePerformanceRiskHasBeenSet = true;
            }

            else if (initialKeyStr == "currentStorageEstimatedMonthlyVolumeIOPsCostVariation") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation =
                    RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(
                        Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
            }

            else if (initialKeyStr == "storageFindingReasonCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_storageFindingReasonCodes.push_back(RDSStorageFindingReasonCodeMapper::GetRDSStorageFindingReasonCodeForName(
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
                      m_storageFindingReasonCodes.push_back(RDSStorageFindingReasonCodeMapper::GetRDSStorageFindingReasonCodeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_storageFindingReasonCodesHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceRecommendationOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_instanceRecommendationOptions.push_back(RDSDBInstanceRecommendationOption(decoder));
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
                    m_instanceRecommendationOptions.push_back(RDSDBInstanceRecommendationOption(decoder));
                  }
                }
              }
              m_instanceRecommendationOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "storageRecommendationOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_storageRecommendationOptions.push_back(RDSDBStorageRecommendationOption(decoder));
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
                    m_storageRecommendationOptions.push_back(RDSDBStorageRecommendationOption(decoder));
                  }
                }
              }
              m_storageRecommendationOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "utilizationMetrics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_utilizationMetrics.push_back(RDSDBUtilizationMetric(decoder));
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
                    m_utilizationMetrics.push_back(RDSDBUtilizationMetric(decoder));
                  }
                }
              }
              m_utilizationMetricsHasBeenSet = true;
            }

            else if (initialKeyStr == "effectiveRecommendationPreferences") {
              m_effectiveRecommendationPreferences = RDSEffectiveRecommendationPreferences(decoder);
              m_effectiveRecommendationPreferencesHasBeenSet = true;
            }

            else if (initialKeyStr == "lookbackPeriodInDays") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_lookbackPeriodInDays = val.value();
              }
              m_lookbackPeriodInDaysHasBeenSet = true;
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

void RDSDBRecommendation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_engineHasBeenSet) {
    mapSize++;
  }
  if (m_engineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_promotionTierHasBeenSet) {
    mapSize++;
  }
  if (m_currentDBInstanceClassHasBeenSet) {
    mapSize++;
  }
  if (m_currentStorageConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_dbClusterIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_idleHasBeenSet) {
    mapSize++;
  }
  if (m_instanceFindingHasBeenSet) {
    mapSize++;
  }
  if (m_storageFindingHasBeenSet) {
    mapSize++;
  }
  if (m_instanceFindingReasonCodesHasBeenSet) {
    mapSize++;
  }
  if (m_currentInstancePerformanceRiskHasBeenSet) {
    mapSize++;
  }
  if (m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet) {
    mapSize++;
  }
  if (m_storageFindingReasonCodesHasBeenSet) {
    mapSize++;
  }
  if (m_instanceRecommendationOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_storageRecommendationOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_utilizationMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_effectiveRecommendationPreferencesHasBeenSet) {
    mapSize++;
  }
  if (m_lookbackPeriodInDaysHasBeenSet) {
    mapSize++;
  }
  if (m_lastRefreshTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceArn.c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_engineHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("engine"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engine.c_str()));
  }

  if (m_engineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("engineVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engineVersion.c_str()));
  }

  if (m_promotionTierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("promotionTier"));
    (m_promotionTier >= 0) ? encoder.WriteUInt(m_promotionTier) : encoder.WriteNegInt(m_promotionTier);
  }

  if (m_currentDBInstanceClassHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentDBInstanceClass"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_currentDBInstanceClass.c_str()));
  }

  if (m_currentStorageConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentStorageConfiguration"));
    m_currentStorageConfiguration.CborEncode(encoder);
  }

  if (m_dbClusterIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("dbClusterIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dbClusterIdentifier.c_str()));
  }

  if (m_idleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idle"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IdleMapper::GetNameForIdle(m_idle).c_str()));
  }

  if (m_instanceFindingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceFinding"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RDSInstanceFindingMapper::GetNameForRDSInstanceFinding(m_instanceFinding).c_str()));
  }

  if (m_storageFindingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageFinding"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RDSStorageFindingMapper::GetNameForRDSStorageFinding(m_storageFinding).c_str()));
  }

  if (m_instanceFindingReasonCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceFindingReasonCodes"));
    encoder.WriteArrayStart(m_instanceFindingReasonCodes.size());
    for (const auto& item_0 : m_instanceFindingReasonCodes) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(RDSInstanceFindingReasonCodeMapper::GetNameForRDSInstanceFindingReasonCode(item_0).c_str()));
    }
  }

  if (m_currentInstancePerformanceRiskHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentInstancePerformanceRisk"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RDSCurrentInstancePerformanceRiskMapper::GetNameForRDSCurrentInstancePerformanceRisk(m_currentInstancePerformanceRisk).c_str()));
  }

  if (m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentStorageEstimatedMonthlyVolumeIOPsCostVariation"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(
            m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation)
            .c_str()));
  }

  if (m_storageFindingReasonCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageFindingReasonCodes"));
    encoder.WriteArrayStart(m_storageFindingReasonCodes.size());
    for (const auto& item_0 : m_storageFindingReasonCodes) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(RDSStorageFindingReasonCodeMapper::GetNameForRDSStorageFindingReasonCode(item_0).c_str()));
    }
  }

  if (m_instanceRecommendationOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceRecommendationOptions"));
    encoder.WriteArrayStart(m_instanceRecommendationOptions.size());
    for (const auto& item_0 : m_instanceRecommendationOptions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_storageRecommendationOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageRecommendationOptions"));
    encoder.WriteArrayStart(m_storageRecommendationOptions.size());
    for (const auto& item_0 : m_storageRecommendationOptions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_utilizationMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("utilizationMetrics"));
    encoder.WriteArrayStart(m_utilizationMetrics.size());
    for (const auto& item_0 : m_utilizationMetrics) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_effectiveRecommendationPreferencesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("effectiveRecommendationPreferences"));
    m_effectiveRecommendationPreferences.CborEncode(encoder);
  }

  if (m_lookbackPeriodInDaysHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lookbackPeriodInDays"));
    encoder.WriteFloat(m_lookbackPeriodInDays);
  }

  if (m_lastRefreshTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastRefreshTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastRefreshTimestamp.Seconds());
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws