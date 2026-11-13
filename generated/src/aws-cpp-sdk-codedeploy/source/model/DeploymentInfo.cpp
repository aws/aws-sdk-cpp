/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentInfo::DeploymentInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentInfo& DeploymentInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              else if (initialKeyStr == "deploymentId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_deploymentId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_deploymentId = ss.str();
                  }
                }
                m_deploymentIdHasBeenSet = true;
              }

              else if (initialKeyStr == "previousRevision") {
                m_previousRevision = RevisionLocation(decoder);
                m_previousRevisionHasBeenSet = true;
              }

              else if (initialKeyStr == "revision") {
                m_revision = RevisionLocation(decoder);
                m_revisionHasBeenSet = true;
              }

              else if (initialKeyStr == "status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = DeploymentStatusMapper::GetDeploymentStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "errorInformation") {
                m_errorInformation = ErrorInformation(decoder);
                m_errorInformationHasBeenSet = true;
              }

              else if (initialKeyStr == "createTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "startTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_startTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "completeTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_completeTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_completeTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_completeTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentOverview") {
                m_deploymentOverview = DeploymentOverview(decoder);
                m_deploymentOverviewHasBeenSet = true;
              }

              else if (initialKeyStr == "description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "creator") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_creator = DeploymentCreatorMapper::GetDeploymentCreatorForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_creatorHasBeenSet = true;
              }

              else if (initialKeyStr == "ignoreApplicationStopFailures") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_ignoreApplicationStopFailures = val.value();
                }
                m_ignoreApplicationStopFailuresHasBeenSet = true;
              }

              else if (initialKeyStr == "autoRollbackConfiguration") {
                m_autoRollbackConfiguration = AutoRollbackConfiguration(decoder);
                m_autoRollbackConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "updateOutdatedInstancesOnly") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_updateOutdatedInstancesOnly = val.value();
                }
                m_updateOutdatedInstancesOnlyHasBeenSet = true;
              }

              else if (initialKeyStr == "rollbackInfo") {
                m_rollbackInfo = RollbackInfo(decoder);
                m_rollbackInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentStyle") {
                m_deploymentStyle = DeploymentStyle(decoder);
                m_deploymentStyleHasBeenSet = true;
              }

              else if (initialKeyStr == "targetInstances") {
                m_targetInstances = TargetInstances(decoder);
                m_targetInstancesHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceTerminationWaitTimeStarted") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_instanceTerminationWaitTimeStarted = val.value();
                }
                m_instanceTerminationWaitTimeStartedHasBeenSet = true;
              }

              else if (initialKeyStr == "blueGreenDeploymentConfiguration") {
                m_blueGreenDeploymentConfiguration = BlueGreenDeploymentConfiguration(decoder);
                m_blueGreenDeploymentConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "loadBalancerInfo") {
                m_loadBalancerInfo = LoadBalancerInfo(decoder);
                m_loadBalancerInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "additionalDeploymentStatusInfo") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_additionalDeploymentStatusInfo = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_additionalDeploymentStatusInfo = ss.str();
                  }
                }
                m_additionalDeploymentStatusInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "fileExistsBehavior") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_fileExistsBehavior = FileExistsBehaviorMapper::GetFileExistsBehaviorForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_fileExistsBehaviorHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deploymentModeHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentStatusMessages") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_deploymentStatusMessages.push_back(
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_deploymentStatusMessages.push_back(ss_1.str());
                            ss_1.clear();
                          }
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
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_deploymentStatusMessages.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_deploymentStatusMessages.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_deploymentStatusMessagesHasBeenSet = true;
              }

              else if (initialKeyStr == "computePlatform") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_computePlatformHasBeenSet = true;
              }

              else if (initialKeyStr == "externalId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_externalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_externalId = ss.str();
                  }
                }
                m_externalIdHasBeenSet = true;
              }

              else if (initialKeyStr == "relatedDeployments") {
                m_relatedDeployments = RelatedDeployments(decoder);
                m_relatedDeploymentsHasBeenSet = true;
              }

              else if (initialKeyStr == "overrideAlarmConfiguration") {
                m_overrideAlarmConfiguration = AlarmConfiguration(decoder);
                m_overrideAlarmConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "ec2DeploymentOptions") {
                m_ec2DeploymentOptions = EC2DeploymentOptions(decoder);
                m_ec2DeploymentOptionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            else if (initialKeyStr == "deploymentId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_deploymentId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_deploymentId = ss.str();
                }
              }
              m_deploymentIdHasBeenSet = true;
            }

            else if (initialKeyStr == "previousRevision") {
              m_previousRevision = RevisionLocation(decoder);
              m_previousRevisionHasBeenSet = true;
            }

            else if (initialKeyStr == "revision") {
              m_revision = RevisionLocation(decoder);
              m_revisionHasBeenSet = true;
            }

            else if (initialKeyStr == "status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = DeploymentStatusMapper::GetDeploymentStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "errorInformation") {
              m_errorInformation = ErrorInformation(decoder);
              m_errorInformationHasBeenSet = true;
            }

            else if (initialKeyStr == "createTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "startTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_startTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "completeTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_completeTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_completeTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_completeTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentOverview") {
              m_deploymentOverview = DeploymentOverview(decoder);
              m_deploymentOverviewHasBeenSet = true;
            }

            else if (initialKeyStr == "description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "creator") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_creator = DeploymentCreatorMapper::GetDeploymentCreatorForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_creatorHasBeenSet = true;
            }

            else if (initialKeyStr == "ignoreApplicationStopFailures") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_ignoreApplicationStopFailures = val.value();
              }
              m_ignoreApplicationStopFailuresHasBeenSet = true;
            }

            else if (initialKeyStr == "autoRollbackConfiguration") {
              m_autoRollbackConfiguration = AutoRollbackConfiguration(decoder);
              m_autoRollbackConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "updateOutdatedInstancesOnly") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_updateOutdatedInstancesOnly = val.value();
              }
              m_updateOutdatedInstancesOnlyHasBeenSet = true;
            }

            else if (initialKeyStr == "rollbackInfo") {
              m_rollbackInfo = RollbackInfo(decoder);
              m_rollbackInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentStyle") {
              m_deploymentStyle = DeploymentStyle(decoder);
              m_deploymentStyleHasBeenSet = true;
            }

            else if (initialKeyStr == "targetInstances") {
              m_targetInstances = TargetInstances(decoder);
              m_targetInstancesHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceTerminationWaitTimeStarted") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_instanceTerminationWaitTimeStarted = val.value();
              }
              m_instanceTerminationWaitTimeStartedHasBeenSet = true;
            }

            else if (initialKeyStr == "blueGreenDeploymentConfiguration") {
              m_blueGreenDeploymentConfiguration = BlueGreenDeploymentConfiguration(decoder);
              m_blueGreenDeploymentConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "loadBalancerInfo") {
              m_loadBalancerInfo = LoadBalancerInfo(decoder);
              m_loadBalancerInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "additionalDeploymentStatusInfo") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_additionalDeploymentStatusInfo = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_additionalDeploymentStatusInfo = ss.str();
                }
              }
              m_additionalDeploymentStatusInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "fileExistsBehavior") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_fileExistsBehavior = FileExistsBehaviorMapper::GetFileExistsBehaviorForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_fileExistsBehaviorHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deploymentModeHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentStatusMessages") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_deploymentStatusMessages.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_deploymentStatusMessages.push_back(ss_1.str());
                          ss_1.clear();
                        }
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
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_deploymentStatusMessages.push_back(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_deploymentStatusMessages.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_deploymentStatusMessagesHasBeenSet = true;
            }

            else if (initialKeyStr == "computePlatform") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_computePlatformHasBeenSet = true;
            }

            else if (initialKeyStr == "externalId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_externalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_externalId = ss.str();
                }
              }
              m_externalIdHasBeenSet = true;
            }

            else if (initialKeyStr == "relatedDeployments") {
              m_relatedDeployments = RelatedDeployments(decoder);
              m_relatedDeploymentsHasBeenSet = true;
            }

            else if (initialKeyStr == "overrideAlarmConfiguration") {
              m_overrideAlarmConfiguration = AlarmConfiguration(decoder);
              m_overrideAlarmConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "ec2DeploymentOptions") {
              m_ec2DeploymentOptions = EC2DeploymentOptions(decoder);
              m_ec2DeploymentOptionsHasBeenSet = true;
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

void DeploymentInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentConfigNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentIdHasBeenSet) {
    mapSize++;
  }
  if (m_previousRevisionHasBeenSet) {
    mapSize++;
  }
  if (m_revisionHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_errorInformationHasBeenSet) {
    mapSize++;
  }
  if (m_createTimeHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_completeTimeHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentOverviewHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_creatorHasBeenSet) {
    mapSize++;
  }
  if (m_ignoreApplicationStopFailuresHasBeenSet) {
    mapSize++;
  }
  if (m_autoRollbackConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_updateOutdatedInstancesOnlyHasBeenSet) {
    mapSize++;
  }
  if (m_rollbackInfoHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentStyleHasBeenSet) {
    mapSize++;
  }
  if (m_targetInstancesHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTerminationWaitTimeStartedHasBeenSet) {
    mapSize++;
  }
  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_loadBalancerInfoHasBeenSet) {
    mapSize++;
  }
  if (m_additionalDeploymentStatusInfoHasBeenSet) {
    mapSize++;
  }
  if (m_fileExistsBehaviorHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentModeHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentStatusMessagesHasBeenSet) {
    mapSize++;
  }
  if (m_computePlatformHasBeenSet) {
    mapSize++;
  }
  if (m_externalIdHasBeenSet) {
    mapSize++;
  }
  if (m_relatedDeploymentsHasBeenSet) {
    mapSize++;
  }
  if (m_overrideAlarmConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_ec2DeploymentOptionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("applicationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationName.c_str()));
  }

  if (m_deploymentGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentGroupName.c_str()));
  }

  if (m_deploymentConfigNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigName.c_str()));
  }

  if (m_deploymentIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentId.c_str()));
  }

  if (m_previousRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("previousRevision"));
    m_previousRevision.CborEncode(encoder);
  }

  if (m_revisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("revision"));
    m_revision.CborEncode(encoder);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentStatusMapper::GetNameForDeploymentStatus(m_status).c_str()));
  }

  if (m_errorInformationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("errorInformation"));
    m_errorInformation.CborEncode(encoder);
  }

  if (m_createTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("createTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createTime.Seconds());
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("startTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_completeTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("completeTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_completeTime.Seconds());
  }

  if (m_deploymentOverviewHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentOverview"));
    m_deploymentOverview.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_creatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("creator"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentCreatorMapper::GetNameForDeploymentCreator(m_creator).c_str()));
  }

  if (m_ignoreApplicationStopFailuresHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ignoreApplicationStopFailures"));
    encoder.WriteBool(m_ignoreApplicationStopFailures);
  }

  if (m_autoRollbackConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRollbackConfiguration"));
    m_autoRollbackConfiguration.CborEncode(encoder);
  }

  if (m_updateOutdatedInstancesOnlyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("updateOutdatedInstancesOnly"));
    encoder.WriteBool(m_updateOutdatedInstancesOnly);
  }

  if (m_rollbackInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rollbackInfo"));
    m_rollbackInfo.CborEncode(encoder);
  }

  if (m_deploymentStyleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentStyle"));
    m_deploymentStyle.CborEncode(encoder);
  }

  if (m_targetInstancesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetInstances"));
    m_targetInstances.CborEncode(encoder);
  }

  if (m_instanceTerminationWaitTimeStartedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceTerminationWaitTimeStarted"));
    encoder.WriteBool(m_instanceTerminationWaitTimeStarted);
  }

  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blueGreenDeploymentConfiguration"));
    m_blueGreenDeploymentConfiguration.CborEncode(encoder);
  }

  if (m_loadBalancerInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("loadBalancerInfo"));
    m_loadBalancerInfo.CborEncode(encoder);
  }

  if (m_additionalDeploymentStatusInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("additionalDeploymentStatusInfo"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_additionalDeploymentStatusInfo.c_str()));
  }

  if (m_fileExistsBehaviorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fileExistsBehavior"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(FileExistsBehaviorMapper::GetNameForFileExistsBehavior(m_fileExistsBehavior).c_str()));
  }

  if (m_deploymentModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode).c_str()));
  }

  if (m_deploymentStatusMessagesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentStatusMessages"));
    encoder.WriteArrayStart(m_deploymentStatusMessages.size());
    for (const auto& item_0 : m_deploymentStatusMessages) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_computePlatformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computePlatform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform).c_str()));
  }

  if (m_externalIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("externalId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_externalId.c_str()));
  }

  if (m_relatedDeploymentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("relatedDeployments"));
    m_relatedDeployments.CborEncode(encoder);
  }

  if (m_overrideAlarmConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("overrideAlarmConfiguration"));
    m_overrideAlarmConfiguration.CborEncode(encoder);
  }

  if (m_ec2DeploymentOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2DeploymentOptions"));
    m_ec2DeploymentOptions.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws