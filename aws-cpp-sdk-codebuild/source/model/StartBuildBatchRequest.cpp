/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StartBuildBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBuildBatchRequest::StartBuildBatchRequest() : 
    m_projectNameHasBeenSet(false),
    m_secondarySourcesOverrideHasBeenSet(false),
    m_secondarySourcesVersionOverrideHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_artifactsOverrideHasBeenSet(false),
    m_secondaryArtifactsOverrideHasBeenSet(false),
    m_environmentVariablesOverrideHasBeenSet(false),
    m_sourceTypeOverride(SourceType::NOT_SET),
    m_sourceTypeOverrideHasBeenSet(false),
    m_sourceLocationOverrideHasBeenSet(false),
    m_sourceAuthOverrideHasBeenSet(false),
    m_gitCloneDepthOverride(0),
    m_gitCloneDepthOverrideHasBeenSet(false),
    m_gitSubmodulesConfigOverrideHasBeenSet(false),
    m_buildspecOverrideHasBeenSet(false),
    m_insecureSslOverride(false),
    m_insecureSslOverrideHasBeenSet(false),
    m_reportBuildBatchStatusOverride(false),
    m_reportBuildBatchStatusOverrideHasBeenSet(false),
    m_environmentTypeOverride(EnvironmentType::NOT_SET),
    m_environmentTypeOverrideHasBeenSet(false),
    m_imageOverrideHasBeenSet(false),
    m_computeTypeOverride(ComputeType::NOT_SET),
    m_computeTypeOverrideHasBeenSet(false),
    m_certificateOverrideHasBeenSet(false),
    m_cacheOverrideHasBeenSet(false),
    m_serviceRoleOverrideHasBeenSet(false),
    m_privilegedModeOverride(false),
    m_privilegedModeOverrideHasBeenSet(false),
    m_buildTimeoutInMinutesOverride(0),
    m_buildTimeoutInMinutesOverrideHasBeenSet(false),
    m_queuedTimeoutInMinutesOverride(0),
    m_queuedTimeoutInMinutesOverrideHasBeenSet(false),
    m_encryptionKeyOverrideHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_logsConfigOverrideHasBeenSet(false),
    m_registryCredentialOverrideHasBeenSet(false),
    m_imagePullCredentialsTypeOverride(ImagePullCredentialsType::NOT_SET),
    m_imagePullCredentialsTypeOverrideHasBeenSet(false),
    m_buildBatchConfigOverrideHasBeenSet(false),
    m_debugSessionEnabled(false),
    m_debugSessionEnabledHasBeenSet(false)
{
}

Aws::String StartBuildBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_secondarySourcesOverrideHasBeenSet)
  {
   Array<JsonValue> secondarySourcesOverrideJsonList(m_secondarySourcesOverride.size());
   for(unsigned secondarySourcesOverrideIndex = 0; secondarySourcesOverrideIndex < secondarySourcesOverrideJsonList.GetLength(); ++secondarySourcesOverrideIndex)
   {
     secondarySourcesOverrideJsonList[secondarySourcesOverrideIndex].AsObject(m_secondarySourcesOverride[secondarySourcesOverrideIndex].Jsonize());
   }
   payload.WithArray("secondarySourcesOverride", std::move(secondarySourcesOverrideJsonList));

  }

  if(m_secondarySourcesVersionOverrideHasBeenSet)
  {
   Array<JsonValue> secondarySourcesVersionOverrideJsonList(m_secondarySourcesVersionOverride.size());
   for(unsigned secondarySourcesVersionOverrideIndex = 0; secondarySourcesVersionOverrideIndex < secondarySourcesVersionOverrideJsonList.GetLength(); ++secondarySourcesVersionOverrideIndex)
   {
     secondarySourcesVersionOverrideJsonList[secondarySourcesVersionOverrideIndex].AsObject(m_secondarySourcesVersionOverride[secondarySourcesVersionOverrideIndex].Jsonize());
   }
   payload.WithArray("secondarySourcesVersionOverride", std::move(secondarySourcesVersionOverrideJsonList));

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_artifactsOverrideHasBeenSet)
  {
   payload.WithObject("artifactsOverride", m_artifactsOverride.Jsonize());

  }

  if(m_secondaryArtifactsOverrideHasBeenSet)
  {
   Array<JsonValue> secondaryArtifactsOverrideJsonList(m_secondaryArtifactsOverride.size());
   for(unsigned secondaryArtifactsOverrideIndex = 0; secondaryArtifactsOverrideIndex < secondaryArtifactsOverrideJsonList.GetLength(); ++secondaryArtifactsOverrideIndex)
   {
     secondaryArtifactsOverrideJsonList[secondaryArtifactsOverrideIndex].AsObject(m_secondaryArtifactsOverride[secondaryArtifactsOverrideIndex].Jsonize());
   }
   payload.WithArray("secondaryArtifactsOverride", std::move(secondaryArtifactsOverrideJsonList));

  }

  if(m_environmentVariablesOverrideHasBeenSet)
  {
   Array<JsonValue> environmentVariablesOverrideJsonList(m_environmentVariablesOverride.size());
   for(unsigned environmentVariablesOverrideIndex = 0; environmentVariablesOverrideIndex < environmentVariablesOverrideJsonList.GetLength(); ++environmentVariablesOverrideIndex)
   {
     environmentVariablesOverrideJsonList[environmentVariablesOverrideIndex].AsObject(m_environmentVariablesOverride[environmentVariablesOverrideIndex].Jsonize());
   }
   payload.WithArray("environmentVariablesOverride", std::move(environmentVariablesOverrideJsonList));

  }

  if(m_sourceTypeOverrideHasBeenSet)
  {
   payload.WithString("sourceTypeOverride", SourceTypeMapper::GetNameForSourceType(m_sourceTypeOverride));
  }

  if(m_sourceLocationOverrideHasBeenSet)
  {
   payload.WithString("sourceLocationOverride", m_sourceLocationOverride);

  }

  if(m_sourceAuthOverrideHasBeenSet)
  {
   payload.WithObject("sourceAuthOverride", m_sourceAuthOverride.Jsonize());

  }

  if(m_gitCloneDepthOverrideHasBeenSet)
  {
   payload.WithInteger("gitCloneDepthOverride", m_gitCloneDepthOverride);

  }

  if(m_gitSubmodulesConfigOverrideHasBeenSet)
  {
   payload.WithObject("gitSubmodulesConfigOverride", m_gitSubmodulesConfigOverride.Jsonize());

  }

  if(m_buildspecOverrideHasBeenSet)
  {
   payload.WithString("buildspecOverride", m_buildspecOverride);

  }

  if(m_insecureSslOverrideHasBeenSet)
  {
   payload.WithBool("insecureSslOverride", m_insecureSslOverride);

  }

  if(m_reportBuildBatchStatusOverrideHasBeenSet)
  {
   payload.WithBool("reportBuildBatchStatusOverride", m_reportBuildBatchStatusOverride);

  }

  if(m_environmentTypeOverrideHasBeenSet)
  {
   payload.WithString("environmentTypeOverride", EnvironmentTypeMapper::GetNameForEnvironmentType(m_environmentTypeOverride));
  }

  if(m_imageOverrideHasBeenSet)
  {
   payload.WithString("imageOverride", m_imageOverride);

  }

  if(m_computeTypeOverrideHasBeenSet)
  {
   payload.WithString("computeTypeOverride", ComputeTypeMapper::GetNameForComputeType(m_computeTypeOverride));
  }

  if(m_certificateOverrideHasBeenSet)
  {
   payload.WithString("certificateOverride", m_certificateOverride);

  }

  if(m_cacheOverrideHasBeenSet)
  {
   payload.WithObject("cacheOverride", m_cacheOverride.Jsonize());

  }

  if(m_serviceRoleOverrideHasBeenSet)
  {
   payload.WithString("serviceRoleOverride", m_serviceRoleOverride);

  }

  if(m_privilegedModeOverrideHasBeenSet)
  {
   payload.WithBool("privilegedModeOverride", m_privilegedModeOverride);

  }

  if(m_buildTimeoutInMinutesOverrideHasBeenSet)
  {
   payload.WithInteger("buildTimeoutInMinutesOverride", m_buildTimeoutInMinutesOverride);

  }

  if(m_queuedTimeoutInMinutesOverrideHasBeenSet)
  {
   payload.WithInteger("queuedTimeoutInMinutesOverride", m_queuedTimeoutInMinutesOverride);

  }

  if(m_encryptionKeyOverrideHasBeenSet)
  {
   payload.WithString("encryptionKeyOverride", m_encryptionKeyOverride);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("idempotencyToken", m_idempotencyToken);

  }

  if(m_logsConfigOverrideHasBeenSet)
  {
   payload.WithObject("logsConfigOverride", m_logsConfigOverride.Jsonize());

  }

  if(m_registryCredentialOverrideHasBeenSet)
  {
   payload.WithObject("registryCredentialOverride", m_registryCredentialOverride.Jsonize());

  }

  if(m_imagePullCredentialsTypeOverrideHasBeenSet)
  {
   payload.WithString("imagePullCredentialsTypeOverride", ImagePullCredentialsTypeMapper::GetNameForImagePullCredentialsType(m_imagePullCredentialsTypeOverride));
  }

  if(m_buildBatchConfigOverrideHasBeenSet)
  {
   payload.WithObject("buildBatchConfigOverride", m_buildBatchConfigOverride.Jsonize());

  }

  if(m_debugSessionEnabledHasBeenSet)
  {
   payload.WithBool("debugSessionEnabled", m_debugSessionEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartBuildBatchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.StartBuildBatch"));
  return headers;

}




