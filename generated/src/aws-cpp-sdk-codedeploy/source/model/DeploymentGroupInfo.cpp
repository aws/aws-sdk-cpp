/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentGroupInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentGroupInfo::DeploymentGroupInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentGroupInfo& DeploymentGroupInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "applicationName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_applicationName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_applicationName = ss.str();
                  }
                }
                m_applicationNameHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentGroupId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentGroupId = ss.str();
                  }
                }
                m_deploymentGroupIdHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentGroupName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentGroupName = ss.str();
                  }
                }
                m_deploymentGroupNameHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentConfigName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentConfigName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentConfigName = ss.str();
                  }
                }
                m_deploymentConfigNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ec2TagFilters") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ec2TagFilters.push_back(EC2TagFilter(decoder));
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
                      m_ec2TagFilters.push_back(EC2TagFilter(decoder));
                    }
                  }
                }
                m_ec2TagFiltersHasBeenSet = true;
              }

              else if (initialKeyStr == "onPremisesInstanceTagFilters") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_onPremisesInstanceTagFilters.push_back(TagFilter(decoder));
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
                      m_onPremisesInstanceTagFilters.push_back(TagFilter(decoder));
                    }
                  }
                }
                m_onPremisesInstanceTagFiltersHasBeenSet = true;
              }

              else if (initialKeyStr == "autoScalingGroups") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_autoScalingGroups.push_back(AutoScalingGroup(decoder));
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
                      m_autoScalingGroups.push_back(AutoScalingGroup(decoder));
                    }
                  }
                }
                m_autoScalingGroupsHasBeenSet = true;
              }

              else if (initialKeyStr == "serviceRoleArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_serviceRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_serviceRoleArn = ss.str();
                  }
                }
                m_serviceRoleArnHasBeenSet = true;
              }

              else if (initialKeyStr == "targetRevision") {
                m_targetRevision = RevisionLocation(decoder);
                m_targetRevisionHasBeenSet = true;
              }

              else if (initialKeyStr == "triggerConfigurations") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_triggerConfigurations.push_back(TriggerConfig(decoder));
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
                      m_triggerConfigurations.push_back(TriggerConfig(decoder));
                    }
                  }
                }
                m_triggerConfigurationsHasBeenSet = true;
              }

              else if (initialKeyStr == "alarmConfiguration") {
                m_alarmConfiguration = AlarmConfiguration(decoder);
                m_alarmConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "autoRollbackConfiguration") {
                m_autoRollbackConfiguration = AutoRollbackConfiguration(decoder);
                m_autoRollbackConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentStyle") {
                m_deploymentStyle = DeploymentStyle(decoder);
                m_deploymentStyleHasBeenSet = true;
              }

              else if (initialKeyStr == "outdatedInstancesStrategy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_outdatedInstancesStrategy = OutdatedInstancesStrategyMapper::GetOutdatedInstancesStrategyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_outdatedInstancesStrategyHasBeenSet = true;
              }

              else if (initialKeyStr == "blueGreenDeploymentConfiguration") {
                m_blueGreenDeploymentConfiguration = BlueGreenDeploymentConfiguration(decoder);
                m_blueGreenDeploymentConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "loadBalancerInfo") {
                m_loadBalancerInfo = LoadBalancerInfo(decoder);
                m_loadBalancerInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "lastSuccessfulDeployment") {
                m_lastSuccessfulDeployment = LastDeploymentInfo(decoder);
                m_lastSuccessfulDeploymentHasBeenSet = true;
              }

              else if (initialKeyStr == "lastAttemptedDeployment") {
                m_lastAttemptedDeployment = LastDeploymentInfo(decoder);
                m_lastAttemptedDeploymentHasBeenSet = true;
              }

              else if (initialKeyStr == "ec2TagSet") {
                m_ec2TagSet = EC2TagSet(decoder);
                m_ec2TagSetHasBeenSet = true;
              }

              else if (initialKeyStr == "onPremisesTagSet") {
                m_onPremisesTagSet = OnPremisesTagSet(decoder);
                m_onPremisesTagSetHasBeenSet = true;
              }

              else if (initialKeyStr == "computePlatform") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_computePlatformHasBeenSet = true;
              }

              else if (initialKeyStr == "ecsServices") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ecsServices.push_back(ECSService(decoder));
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
                      m_ecsServices.push_back(ECSService(decoder));
                    }
                  }
                }
                m_ecsServicesHasBeenSet = true;
              }

              else if (initialKeyStr == "ec2DeploymentOptions") {
                m_ec2DeploymentOptions = EC2DeploymentOptions(decoder);
                m_ec2DeploymentOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "terminationHookEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_terminationHookEnabled = val.value();
                }
                m_terminationHookEnabledHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentGroupInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "applicationName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_applicationName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_applicationName = ss.str();
                }
              }
              m_applicationNameHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentGroupId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentGroupId = ss.str();
                }
              }
              m_deploymentGroupIdHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentGroupName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentGroupName = ss.str();
                }
              }
              m_deploymentGroupNameHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentConfigName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentConfigName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentConfigName = ss.str();
                }
              }
              m_deploymentConfigNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ec2TagFilters") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ec2TagFilters.push_back(EC2TagFilter(decoder));
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
                    m_ec2TagFilters.push_back(EC2TagFilter(decoder));
                  }
                }
              }
              m_ec2TagFiltersHasBeenSet = true;
            }

            else if (initialKeyStr == "onPremisesInstanceTagFilters") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_onPremisesInstanceTagFilters.push_back(TagFilter(decoder));
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
                    m_onPremisesInstanceTagFilters.push_back(TagFilter(decoder));
                  }
                }
              }
              m_onPremisesInstanceTagFiltersHasBeenSet = true;
            }

            else if (initialKeyStr == "autoScalingGroups") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_autoScalingGroups.push_back(AutoScalingGroup(decoder));
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
                    m_autoScalingGroups.push_back(AutoScalingGroup(decoder));
                  }
                }
              }
              m_autoScalingGroupsHasBeenSet = true;
            }

            else if (initialKeyStr == "serviceRoleArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_serviceRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_serviceRoleArn = ss.str();
                }
              }
              m_serviceRoleArnHasBeenSet = true;
            }

            else if (initialKeyStr == "targetRevision") {
              m_targetRevision = RevisionLocation(decoder);
              m_targetRevisionHasBeenSet = true;
            }

            else if (initialKeyStr == "triggerConfigurations") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_triggerConfigurations.push_back(TriggerConfig(decoder));
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
                    m_triggerConfigurations.push_back(TriggerConfig(decoder));
                  }
                }
              }
              m_triggerConfigurationsHasBeenSet = true;
            }

            else if (initialKeyStr == "alarmConfiguration") {
              m_alarmConfiguration = AlarmConfiguration(decoder);
              m_alarmConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "autoRollbackConfiguration") {
              m_autoRollbackConfiguration = AutoRollbackConfiguration(decoder);
              m_autoRollbackConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentStyle") {
              m_deploymentStyle = DeploymentStyle(decoder);
              m_deploymentStyleHasBeenSet = true;
            }

            else if (initialKeyStr == "outdatedInstancesStrategy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_outdatedInstancesStrategy = OutdatedInstancesStrategyMapper::GetOutdatedInstancesStrategyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_outdatedInstancesStrategyHasBeenSet = true;
            }

            else if (initialKeyStr == "blueGreenDeploymentConfiguration") {
              m_blueGreenDeploymentConfiguration = BlueGreenDeploymentConfiguration(decoder);
              m_blueGreenDeploymentConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "loadBalancerInfo") {
              m_loadBalancerInfo = LoadBalancerInfo(decoder);
              m_loadBalancerInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "lastSuccessfulDeployment") {
              m_lastSuccessfulDeployment = LastDeploymentInfo(decoder);
              m_lastSuccessfulDeploymentHasBeenSet = true;
            }

            else if (initialKeyStr == "lastAttemptedDeployment") {
              m_lastAttemptedDeployment = LastDeploymentInfo(decoder);
              m_lastAttemptedDeploymentHasBeenSet = true;
            }

            else if (initialKeyStr == "ec2TagSet") {
              m_ec2TagSet = EC2TagSet(decoder);
              m_ec2TagSetHasBeenSet = true;
            }

            else if (initialKeyStr == "onPremisesTagSet") {
              m_onPremisesTagSet = OnPremisesTagSet(decoder);
              m_onPremisesTagSetHasBeenSet = true;
            }

            else if (initialKeyStr == "computePlatform") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_computePlatformHasBeenSet = true;
            }

            else if (initialKeyStr == "ecsServices") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ecsServices.push_back(ECSService(decoder));
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
                    m_ecsServices.push_back(ECSService(decoder));
                  }
                }
              }
              m_ecsServicesHasBeenSet = true;
            }

            else if (initialKeyStr == "ec2DeploymentOptions") {
              m_ec2DeploymentOptions = EC2DeploymentOptions(decoder);
              m_ec2DeploymentOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "terminationHookEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_terminationHookEnabled = val.value();
              }
              m_terminationHookEnabledHasBeenSet = true;
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

void DeploymentGroupInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentConfigNameHasBeenSet) {
    mapSize++;
  }
  if (m_ec2TagFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_onPremisesInstanceTagFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_autoScalingGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_serviceRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_targetRevisionHasBeenSet) {
    mapSize++;
  }
  if (m_triggerConfigurationsHasBeenSet) {
    mapSize++;
  }
  if (m_alarmConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_autoRollbackConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentStyleHasBeenSet) {
    mapSize++;
  }
  if (m_outdatedInstancesStrategyHasBeenSet) {
    mapSize++;
  }
  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_loadBalancerInfoHasBeenSet) {
    mapSize++;
  }
  if (m_lastSuccessfulDeploymentHasBeenSet) {
    mapSize++;
  }
  if (m_lastAttemptedDeploymentHasBeenSet) {
    mapSize++;
  }
  if (m_ec2TagSetHasBeenSet) {
    mapSize++;
  }
  if (m_onPremisesTagSetHasBeenSet) {
    mapSize++;
  }
  if (m_computePlatformHasBeenSet) {
    mapSize++;
  }
  if (m_ecsServicesHasBeenSet) {
    mapSize++;
  }
  if (m_ec2DeploymentOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_terminationHookEnabledHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("applicationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationName.c_str()));
  }

  if (m_deploymentGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentGroupId.c_str()));
  }

  if (m_deploymentGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentGroupName.c_str()));
  }

  if (m_deploymentConfigNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigName.c_str()));
  }

  if (m_ec2TagFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2TagFilters"));
    encoder.WriteArrayStart(m_ec2TagFilters.size());
    for (const auto& item_0 : m_ec2TagFilters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_onPremisesInstanceTagFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("onPremisesInstanceTagFilters"));
    encoder.WriteArrayStart(m_onPremisesInstanceTagFilters.size());
    for (const auto& item_0 : m_onPremisesInstanceTagFilters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_autoScalingGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoScalingGroups"));
    encoder.WriteArrayStart(m_autoScalingGroups.size());
    for (const auto& item_0 : m_autoScalingGroups) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_serviceRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRoleArn.c_str()));
  }

  if (m_targetRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetRevision"));
    m_targetRevision.CborEncode(encoder);
  }

  if (m_triggerConfigurationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("triggerConfigurations"));
    encoder.WriteArrayStart(m_triggerConfigurations.size());
    for (const auto& item_0 : m_triggerConfigurations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_alarmConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("alarmConfiguration"));
    m_alarmConfiguration.CborEncode(encoder);
  }

  if (m_autoRollbackConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRollbackConfiguration"));
    m_autoRollbackConfiguration.CborEncode(encoder);
  }

  if (m_deploymentStyleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentStyle"));
    m_deploymentStyle.CborEncode(encoder);
  }

  if (m_outdatedInstancesStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outdatedInstancesStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        OutdatedInstancesStrategyMapper::GetNameForOutdatedInstancesStrategy(m_outdatedInstancesStrategy).c_str()));
  }

  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blueGreenDeploymentConfiguration"));
    m_blueGreenDeploymentConfiguration.CborEncode(encoder);
  }

  if (m_loadBalancerInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("loadBalancerInfo"));
    m_loadBalancerInfo.CborEncode(encoder);
  }

  if (m_lastSuccessfulDeploymentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastSuccessfulDeployment"));
    m_lastSuccessfulDeployment.CborEncode(encoder);
  }

  if (m_lastAttemptedDeploymentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lastAttemptedDeployment"));
    m_lastAttemptedDeployment.CborEncode(encoder);
  }

  if (m_ec2TagSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2TagSet"));
    m_ec2TagSet.CborEncode(encoder);
  }

  if (m_onPremisesTagSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("onPremisesTagSet"));
    m_onPremisesTagSet.CborEncode(encoder);
  }

  if (m_computePlatformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computePlatform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform).c_str()));
  }

  if (m_ecsServicesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ecsServices"));
    encoder.WriteArrayStart(m_ecsServices.size());
    for (const auto& item_0 : m_ecsServices) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ec2DeploymentOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2DeploymentOptions"));
    m_ec2DeploymentOptions.CborEncode(encoder);
  }

  if (m_terminationHookEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("terminationHookEnabled"));
    encoder.WriteBool(m_terminationHookEnabled);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws