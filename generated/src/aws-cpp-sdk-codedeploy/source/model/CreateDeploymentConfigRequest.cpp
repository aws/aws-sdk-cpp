/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDeploymentConfigRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_deploymentConfigNameHasBeenSet) {
    mapSize++;
  }
  if (m_minimumHealthyHostsHasBeenSet) {
    mapSize++;
  }
  if (m_trafficRoutingConfigHasBeenSet) {
    mapSize++;
  }
  if (m_computePlatformHasBeenSet) {
    mapSize++;
  }
  if (m_zonalConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deploymentConfigNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentConfigName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentConfigName.c_str()));
  }

  if (m_minimumHealthyHostsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("minimumHealthyHosts"));
    m_minimumHealthyHosts.CborEncode(encoder);
  }

  if (m_trafficRoutingConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("trafficRoutingConfig"));
    m_trafficRoutingConfig.CborEncode(encoder);
  }

  if (m_computePlatformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computePlatform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform).c_str()));
  }

  if (m_zonalConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("zonalConfig"));
    m_zonalConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateDeploymentConfigRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
