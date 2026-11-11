/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/UpdateDeploymentGroupRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateDeploymentGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_currentDeploymentGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_newDeploymentGroupNameHasBeenSet) {
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
  if (m_triggerConfigurationsHasBeenSet) {
    mapSize++;
  }
  if (m_alarmConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_autoRollbackConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_outdatedInstancesStrategyHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentStyleHasBeenSet) {
    mapSize++;
  }
  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_loadBalancerInfoHasBeenSet) {
    mapSize++;
  }
  if (m_ec2TagSetHasBeenSet) {
    mapSize++;
  }
  if (m_ecsServicesHasBeenSet) {
    mapSize++;
  }
  if (m_onPremisesTagSetHasBeenSet) {
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

  if (m_currentDeploymentGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currentDeploymentGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_currentDeploymentGroupName.c_str()));
  }

  if (m_newDeploymentGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("newDeploymentGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_newDeploymentGroupName.c_str()));
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
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_serviceRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRoleArn.c_str()));
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

  if (m_outdatedInstancesStrategyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("outdatedInstancesStrategy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        OutdatedInstancesStrategyMapper::GetNameForOutdatedInstancesStrategy(m_outdatedInstancesStrategy).c_str()));
  }

  if (m_deploymentStyleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentStyle"));
    m_deploymentStyle.CborEncode(encoder);
  }

  if (m_blueGreenDeploymentConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blueGreenDeploymentConfiguration"));
    m_blueGreenDeploymentConfiguration.CborEncode(encoder);
  }

  if (m_loadBalancerInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("loadBalancerInfo"));
    m_loadBalancerInfo.CborEncode(encoder);
  }

  if (m_ec2TagSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2TagSet"));
    m_ec2TagSet.CborEncode(encoder);
  }

  if (m_ecsServicesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ecsServices"));
    encoder.WriteArrayStart(m_ecsServices.size());
    for (const auto& item_0 : m_ecsServices) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_onPremisesTagSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("onPremisesTagSet"));
    m_onPremisesTagSet.CborEncode(encoder);
  }

  if (m_ec2DeploymentOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2DeploymentOptions"));
    m_ec2DeploymentOptions.CborEncode(encoder);
  }

  if (m_terminationHookEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("terminationHookEnabled"));
    encoder.WriteBool(m_terminationHookEnabled);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateDeploymentGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
