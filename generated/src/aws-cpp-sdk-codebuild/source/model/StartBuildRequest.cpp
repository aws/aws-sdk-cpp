/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartBuildRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_projectNameHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourcesOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourcesVersionOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_sourceVersionHasBeenSet) {
    mapSize++;
  }
  if (m_artifactsOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_secondaryArtifactsOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_environmentVariablesOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_sourceTypeOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_sourceLocationOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_sourceAuthOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_gitCloneDepthOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_gitSubmodulesConfigOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_buildspecOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_insecureSslOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_reportBuildStatusOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_buildStatusConfigOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_environmentTypeOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_imageOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_certificateOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_cacheOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_serviceRoleOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_privilegedModeOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutInMinutesOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_queuedTimeoutInMinutesOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionKeyOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_idempotencyTokenHasBeenSet) {
    mapSize++;
  }
  if (m_logsConfigOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_registryCredentialOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_imagePullCredentialsTypeOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_debugSessionEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_fleetOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_autoRetryLimitOverrideHasBeenSet) {
    mapSize++;
  }
  if (m_hostKernelOverrideHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_projectNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectName.c_str()));
  }

  if (m_secondarySourcesOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySourcesOverride"));
    encoder.WriteArrayStart(m_secondarySourcesOverride.size());
    for (const auto& item_0 : m_secondarySourcesOverride) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_secondarySourcesVersionOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySourcesVersionOverride"));
    encoder.WriteArrayStart(m_secondarySourcesVersionOverride.size());
    for (const auto& item_0 : m_secondarySourcesVersionOverride) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceVersion.c_str()));
  }

  if (m_artifactsOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("artifactsOverride"));
    m_artifactsOverride.CborEncode(encoder);
  }

  if (m_secondaryArtifactsOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondaryArtifactsOverride"));
    encoder.WriteArrayStart(m_secondaryArtifactsOverride.size());
    for (const auto& item_0 : m_secondaryArtifactsOverride) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_environmentVariablesOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environmentVariablesOverride"));
    encoder.WriteArrayStart(m_environmentVariablesOverride.size());
    for (const auto& item_0 : m_environmentVariablesOverride) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceTypeOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceTypeOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SourceTypeMapper::GetNameForSourceType(m_sourceTypeOverride).c_str()));
  }

  if (m_sourceLocationOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceLocationOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceLocationOverride.c_str()));
  }

  if (m_sourceAuthOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceAuthOverride"));
    m_sourceAuthOverride.CborEncode(encoder);
  }

  if (m_gitCloneDepthOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gitCloneDepthOverride"));
    (m_gitCloneDepthOverride >= 0) ? encoder.WriteUInt(m_gitCloneDepthOverride) : encoder.WriteNegInt(m_gitCloneDepthOverride);
  }

  if (m_gitSubmodulesConfigOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gitSubmodulesConfigOverride"));
    m_gitSubmodulesConfigOverride.CborEncode(encoder);
  }

  if (m_buildspecOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildspecOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_buildspecOverride.c_str()));
  }

  if (m_insecureSslOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("insecureSslOverride"));
    encoder.WriteBool(m_insecureSslOverride);
  }

  if (m_reportBuildStatusOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("reportBuildStatusOverride"));
    encoder.WriteBool(m_reportBuildStatusOverride);
  }

  if (m_buildStatusConfigOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildStatusConfigOverride"));
    m_buildStatusConfigOverride.CborEncode(encoder);
  }

  if (m_environmentTypeOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environmentTypeOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnvironmentTypeMapper::GetNameForEnvironmentType(m_environmentTypeOverride).c_str()));
  }

  if (m_imageOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("imageOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageOverride.c_str()));
  }

  if (m_computeTypeOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("computeTypeOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeTypeMapper::GetNameForComputeType(m_computeTypeOverride).c_str()));
  }

  if (m_certificateOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("certificateOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificateOverride.c_str()));
  }

  if (m_cacheOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cacheOverride"));
    m_cacheOverride.CborEncode(encoder);
  }

  if (m_serviceRoleOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRoleOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRoleOverride.c_str()));
  }

  if (m_privilegedModeOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("privilegedModeOverride"));
    encoder.WriteBool(m_privilegedModeOverride);
  }

  if (m_timeoutInMinutesOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timeoutInMinutesOverride"));
    (m_timeoutInMinutesOverride >= 0) ? encoder.WriteUInt(m_timeoutInMinutesOverride) : encoder.WriteNegInt(m_timeoutInMinutesOverride);
  }

  if (m_queuedTimeoutInMinutesOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("queuedTimeoutInMinutesOverride"));
    (m_queuedTimeoutInMinutesOverride >= 0) ? encoder.WriteUInt(m_queuedTimeoutInMinutesOverride)
                                            : encoder.WriteNegInt(m_queuedTimeoutInMinutesOverride);
  }

  if (m_encryptionKeyOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionKeyOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_encryptionKeyOverride.c_str()));
  }

  if (m_idempotencyTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("idempotencyToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idempotencyToken.c_str()));
  }

  if (m_logsConfigOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("logsConfigOverride"));
    m_logsConfigOverride.CborEncode(encoder);
  }

  if (m_registryCredentialOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("registryCredentialOverride"));
    m_registryCredentialOverride.CborEncode(encoder);
  }

  if (m_imagePullCredentialsTypeOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("imagePullCredentialsTypeOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ImagePullCredentialsTypeMapper::GetNameForImagePullCredentialsType(m_imagePullCredentialsTypeOverride).c_str()));
  }

  if (m_debugSessionEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("debugSessionEnabled"));
    encoder.WriteBool(m_debugSessionEnabled);
  }

  if (m_fleetOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fleetOverride"));
    m_fleetOverride.CborEncode(encoder);
  }

  if (m_autoRetryLimitOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRetryLimitOverride"));
    (m_autoRetryLimitOverride >= 0) ? encoder.WriteUInt(m_autoRetryLimitOverride) : encoder.WriteNegInt(m_autoRetryLimitOverride);
  }

  if (m_hostKernelOverrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("hostKernelOverride"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HostKernelMapper::GetNameForHostKernel(m_hostKernelOverride).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartBuildRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
