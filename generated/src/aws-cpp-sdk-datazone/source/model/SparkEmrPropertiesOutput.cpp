/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SparkEmrPropertiesOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SparkEmrPropertiesOutput::SparkEmrPropertiesOutput(JsonView jsonValue) { *this = jsonValue; }

SparkEmrPropertiesOutput& SparkEmrPropertiesOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("computeArn")) {
    m_computeArn = jsonValue.GetString("computeArn");
    m_computeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentials")) {
    m_credentials = jsonValue.GetObject("credentials");
    m_credentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialsExpiration")) {
    m_credentialsExpiration = jsonValue.GetString("credentialsExpiration");
    m_credentialsExpirationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("governanceType")) {
    m_governanceType = GovernanceTypeMapper::GetGovernanceTypeForName(jsonValue.GetString("governanceType"));
    m_governanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceProfileArn")) {
    m_instanceProfileArn = jsonValue.GetString("instanceProfileArn");
    m_instanceProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("javaVirtualEnv")) {
    m_javaVirtualEnv = jsonValue.GetString("javaVirtualEnv");
    m_javaVirtualEnvHasBeenSet = true;
  }
  if (jsonValue.ValueExists("livyEndpoint")) {
    m_livyEndpoint = jsonValue.GetString("livyEndpoint");
    m_livyEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logUri")) {
    m_logUri = jsonValue.GetString("logUri");
    m_logUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pythonVirtualEnv")) {
    m_pythonVirtualEnv = jsonValue.GetString("pythonVirtualEnv");
    m_pythonVirtualEnvHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtimeRole")) {
    m_runtimeRole = jsonValue.GetString("runtimeRole");
    m_runtimeRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustedCertificatesS3Uri")) {
    m_trustedCertificatesS3Uri = jsonValue.GetString("trustedCertificatesS3Uri");
    m_trustedCertificatesS3UriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificateData")) {
    m_certificateData = jsonValue.GetString("certificateData");
    m_certificateDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedEndpointArn")) {
    m_managedEndpointArn = jsonValue.GetString("managedEndpointArn");
    m_managedEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedEndpointCredentials")) {
    m_managedEndpointCredentials = jsonValue.GetObject("managedEndpointCredentials");
    m_managedEndpointCredentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue SparkEmrPropertiesOutput::Jsonize() const {
  JsonValue payload;

  if (m_computeArnHasBeenSet) {
    payload.WithString("computeArn", m_computeArn);
  }

  if (m_credentialsHasBeenSet) {
    payload.WithObject("credentials", m_credentials.Jsonize());
  }

  if (m_credentialsExpirationHasBeenSet) {
    payload.WithString("credentialsExpiration", m_credentialsExpiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_governanceTypeHasBeenSet) {
    payload.WithString("governanceType", GovernanceTypeMapper::GetNameForGovernanceType(m_governanceType));
  }

  if (m_instanceProfileArnHasBeenSet) {
    payload.WithString("instanceProfileArn", m_instanceProfileArn);
  }

  if (m_javaVirtualEnvHasBeenSet) {
    payload.WithString("javaVirtualEnv", m_javaVirtualEnv);
  }

  if (m_livyEndpointHasBeenSet) {
    payload.WithString("livyEndpoint", m_livyEndpoint);
  }

  if (m_logUriHasBeenSet) {
    payload.WithString("logUri", m_logUri);
  }

  if (m_pythonVirtualEnvHasBeenSet) {
    payload.WithString("pythonVirtualEnv", m_pythonVirtualEnv);
  }

  if (m_runtimeRoleHasBeenSet) {
    payload.WithString("runtimeRole", m_runtimeRole);
  }

  if (m_trustedCertificatesS3UriHasBeenSet) {
    payload.WithString("trustedCertificatesS3Uri", m_trustedCertificatesS3Uri);
  }

  if (m_certificateDataHasBeenSet) {
    payload.WithString("certificateData", m_certificateData);
  }

  if (m_managedEndpointArnHasBeenSet) {
    payload.WithString("managedEndpointArn", m_managedEndpointArn);
  }

  if (m_managedEndpointCredentialsHasBeenSet) {
    payload.WithObject("managedEndpointCredentials", m_managedEndpointCredentials.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
