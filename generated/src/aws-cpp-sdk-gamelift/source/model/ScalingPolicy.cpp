/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/ScalingPolicy.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

ScalingPolicy::ScalingPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ScalingPolicy& ScalingPolicy::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "FleetId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_fleetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_fleetId = ss.str();
                  }
                }
                m_fleetIdHasBeenSet = true;
              }

              else if (initialKeyStr == "FleetArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_fleetArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_fleetArn = ss.str();
                  }
                }
                m_fleetArnHasBeenSet = true;
              }

              else if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "Status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = ScalingStatusTypeMapper::GetScalingStatusTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "ScalingAdjustment") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_scalingAdjustment = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_scalingAdjustment = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_scalingAdjustmentHasBeenSet = true;
              }

              else if (initialKeyStr == "ScalingAdjustmentType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_scalingAdjustmentType = ScalingAdjustmentTypeMapper::GetScalingAdjustmentTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_scalingAdjustmentTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "ComparisonOperator") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_comparisonOperator = ComparisonOperatorTypeMapper::GetComparisonOperatorTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_comparisonOperatorHasBeenSet = true;
              }

              else if (initialKeyStr == "Threshold") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_threshold = val.value();
                }
                m_thresholdHasBeenSet = true;
              }

              else if (initialKeyStr == "EvaluationPeriods") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_evaluationPeriods = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_evaluationPeriods = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_evaluationPeriodsHasBeenSet = true;
              }

              else if (initialKeyStr == "MetricName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_metricName =
                      MetricNameMapper::GetMetricNameForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_metricNameHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_policyType =
                      PolicyTypeMapper::GetPolicyTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_policyTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "TargetConfiguration") {
                m_targetConfiguration = TargetConfiguration(decoder);
                m_targetConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "UpdateStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_updateStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "Location") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_location = ss.str();
                  }
                }
                m_locationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ScalingPolicy", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "FleetId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_fleetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_fleetId = ss.str();
                }
              }
              m_fleetIdHasBeenSet = true;
            }

            else if (initialKeyStr == "FleetArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_fleetArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_fleetArn = ss.str();
                }
              }
              m_fleetArnHasBeenSet = true;
            }

            else if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "Status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = ScalingStatusTypeMapper::GetScalingStatusTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "ScalingAdjustment") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_scalingAdjustment = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_scalingAdjustment = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_scalingAdjustmentHasBeenSet = true;
            }

            else if (initialKeyStr == "ScalingAdjustmentType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_scalingAdjustmentType = ScalingAdjustmentTypeMapper::GetScalingAdjustmentTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_scalingAdjustmentTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "ComparisonOperator") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_comparisonOperator = ComparisonOperatorTypeMapper::GetComparisonOperatorTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_comparisonOperatorHasBeenSet = true;
            }

            else if (initialKeyStr == "Threshold") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_threshold = val.value();
              }
              m_thresholdHasBeenSet = true;
            }

            else if (initialKeyStr == "EvaluationPeriods") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_evaluationPeriods = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_evaluationPeriods = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_evaluationPeriodsHasBeenSet = true;
            }

            else if (initialKeyStr == "MetricName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_metricName =
                    MetricNameMapper::GetMetricNameForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_metricNameHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_policyType =
                    PolicyTypeMapper::GetPolicyTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_policyTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "TargetConfiguration") {
              m_targetConfiguration = TargetConfiguration(decoder);
              m_targetConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "UpdateStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_updateStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "Location") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_location = ss.str();
                }
              }
              m_locationHasBeenSet = true;
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

void ScalingPolicy::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_fleetArnHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_scalingAdjustmentHasBeenSet) {
    mapSize++;
  }
  if (m_scalingAdjustmentTypeHasBeenSet) {
    mapSize++;
  }
  if (m_comparisonOperatorHasBeenSet) {
    mapSize++;
  }
  if (m_thresholdHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationPeriodsHasBeenSet) {
    mapSize++;
  }
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_policyTypeHasBeenSet) {
    mapSize++;
  }
  if (m_targetConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_updateStatusHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_fleetArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetArn.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScalingStatusTypeMapper::GetNameForScalingStatusType(m_status).c_str()));
  }

  if (m_scalingAdjustmentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScalingAdjustment"));
    (m_scalingAdjustment >= 0) ? encoder.WriteUInt(m_scalingAdjustment) : encoder.WriteNegInt(m_scalingAdjustment);
  }

  if (m_scalingAdjustmentTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScalingAdjustmentType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ScalingAdjustmentTypeMapper::GetNameForScalingAdjustmentType(m_scalingAdjustmentType).c_str()));
  }

  if (m_comparisonOperatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComparisonOperator"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ComparisonOperatorTypeMapper::GetNameForComparisonOperatorType(m_comparisonOperator).c_str()));
  }

  if (m_thresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Threshold"));
    encoder.WriteFloat(m_threshold);
  }

  if (m_evaluationPeriodsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluationPeriods"));
    (m_evaluationPeriods >= 0) ? encoder.WriteUInt(m_evaluationPeriods) : encoder.WriteNegInt(m_evaluationPeriods);
  }

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MetricNameMapper::GetNameForMetricName(m_metricName).c_str()));
  }

  if (m_policyTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PolicyTypeMapper::GetNameForPolicyType(m_policyType).c_str()));
  }

  if (m_targetConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetConfiguration"));
    m_targetConfiguration.CborEncode(encoder);
  }

  if (m_updateStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LocationUpdateStatusMapper::GetNameForLocationUpdateStatus(m_updateStatus).c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws