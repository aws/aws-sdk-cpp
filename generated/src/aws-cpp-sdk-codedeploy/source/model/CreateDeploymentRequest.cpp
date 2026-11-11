/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDeploymentRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_revisionHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentConfigNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_ignoreApplicationStopFailuresHasBeenSet) {
    mapSize++;
  }
  if (m_targetInstancesHasBeenSet) {
    mapSize++;
  }
  if (m_autoRollbackConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_updateOutdatedInstancesOnlyHasBeenSet) {
    mapSize++;
  }
  if (m_fileExistsBehaviorHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentModeHasBeenSet) {
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

  if (m_revisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("revision"));
    m_revision.CborEncode(encoder);
  }

  if (m_deploymentConfigNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_ignoreApplicationStopFailuresHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ignoreApplicationStopFailures"));
    encoder.WriteBool(m_ignoreApplicationStopFailures);
  }

  if (m_targetInstancesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetInstances"));
    m_targetInstances.CborEncode(encoder);
  }

  if (m_autoRollbackConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRollbackConfiguration"));
    m_autoRollbackConfiguration.CborEncode(encoder);
  }

  if (m_updateOutdatedInstancesOnlyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("updateOutdatedInstancesOnly"));
    encoder.WriteBool(m_updateOutdatedInstancesOnly);
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

  if (m_overrideAlarmConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("overrideAlarmConfiguration"));
    m_overrideAlarmConfiguration.CborEncode(encoder);
  }

  if (m_ec2DeploymentOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ec2DeploymentOptions"));
    m_ec2DeploymentOptions.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateDeploymentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
