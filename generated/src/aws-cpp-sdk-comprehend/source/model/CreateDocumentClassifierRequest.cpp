/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateDocumentClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDocumentClassifierRequest::CreateDocumentClassifierRequest() : 
    m_documentClassifierNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_mode(DocumentClassifierMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_modelKmsKeyIdHasBeenSet(false),
    m_modelPolicyHasBeenSet(false)
{
}

Aws::String CreateDocumentClassifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentClassifierNameHasBeenSet)
  {
   payload.WithString("DocumentClassifierName", m_documentClassifierName);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", DocumentClassifierModeMapper::GetNameForDocumentClassifierMode(m_mode));
  }

  if(m_modelKmsKeyIdHasBeenSet)
  {
   payload.WithString("ModelKmsKeyId", m_modelKmsKeyId);

  }

  if(m_modelPolicyHasBeenSet)
  {
   payload.WithString("ModelPolicy", m_modelPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDocumentClassifierRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.CreateDocumentClassifier"));
  return headers;

}




