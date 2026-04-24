/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/VolumeRecommendation.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

VolumeRecommendation::VolumeRecommendation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

VolumeRecommendation& VolumeRecommendation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "volumeArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_volumeArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_volumeArn = ss.str();
                  }
                }
                m_volumeArnHasBeenSet = true;
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

              else if (initialKeyStr == "currentConfiguration") {
                m_currentConfiguration = VolumeConfiguration(decoder);
                m_currentConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "finding") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_finding =
                      EBSFindingMapper::GetEBSFindingForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_findingHasBeenSet = true;
              }

              else if (initialKeyStr == "utilizationMetrics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_utilizationMetrics.push_back(EBSUtilizationMetric(decoder));
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
                      m_utilizationMetrics.push_back(EBSUtilizationMetric(decoder));
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

              else if (initialKeyStr == "volumeRecommendationOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_volumeRecommendationOptions.push_back(VolumeRecommendationOption(decoder));
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
                      m_volumeRecommendationOptions.push_back(VolumeRecommendationOption(decoder));
                    }
                  }
                }
                m_volumeRecommendationOptionsHasBeenSet = true;
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
                m_effectiveRecommendationPreferences = EBSEffectiveRecommendationPreferences(decoder);
                m_effectiveRecommendationPreferencesHasBeenSet = true;
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
                AWS_LOG_ERROR("VolumeRecommendation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "volumeArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_volumeArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_volumeArn = ss.str();
                }
              }
              m_volumeArnHasBeenSet = true;
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

            else if (initialKeyStr == "currentConfiguration") {
              m_currentConfiguration = VolumeConfiguration(decoder);
              m_currentConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "finding") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_finding =
                    EBSFindingMapper::GetEBSFindingForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_findingHasBeenSet = true;
            }

            else if (initialKeyStr == "utilizationMetrics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_utilizationMetrics.push_back(EBSUtilizationMetric(decoder));
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
                    m_utilizationMetrics.push_back(EBSUtilizationMetric(decoder));
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

            else if (initialKeyStr == "volumeRecommendationOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_volumeRecommendationOptions.push_back(VolumeRecommendationOption(decoder));
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
                    m_volumeRecommendationOptions.push_back(VolumeRecommendationOption(decoder));
                  }
                }
              }
              m_volumeRecommendationOptionsHasBeenSet = true;
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
              m_effectiveRecommendationPreferences = EBSEffectiveRecommendationPreferences(decoder);
              m_effectiveRecommendationPreferencesHasBeenSet = true;
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

void VolumeRecommendation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_volumeArnHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }
  if (m_currentConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_findingHasBeenSet) {
    mapSize++;
  }
  if (m_utilizationMetricsHasBeenSet) {
    mapSize++;
  }
  if (m_lookBackPeriodInDaysHasBeenSet) {
    mapSize++;
  }
  if (m_volumeRecommendationOptionsHasBeenSet) {
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
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_volumeArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_volumeArn.c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }

  if (m_currentConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentConfiguration"));
    m_currentConfiguration.CborEncode(encoder);
  }

  if (m_findingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("finding"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EBSFindingMapper::GetNameForEBSFinding(m_finding).c_str()));
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

  if (m_volumeRecommendationOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeRecommendationOptions"));
    encoder.WriteArrayStart(m_volumeRecommendationOptions.size());
    for (const auto& item_0 : m_volumeRecommendationOptions) {
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