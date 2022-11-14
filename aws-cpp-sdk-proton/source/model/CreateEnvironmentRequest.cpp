/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_codebuildRoleArnHasBeenSet(false),
    m_componentRoleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentAccountConnectionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protonServiceRoleArnHasBeenSet(false),
    m_provisioningRepositoryHasBeenSet(false),
    m_specHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codebuildRoleArnHasBeenSet)
  {
   payload.WithString("codebuildRoleArn", m_codebuildRoleArn);

  }

  if(m_componentRoleArnHasBeenSet)
  {
   payload.WithString("componentRoleArn", m_componentRoleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentAccountConnectionIdHasBeenSet)
  {
   payload.WithString("environmentAccountConnectionId", m_environmentAccountConnectionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protonServiceRoleArnHasBeenSet)
  {
   payload.WithString("protonServiceRoleArn", m_protonServiceRoleArn);

  }

  if(m_provisioningRepositoryHasBeenSet)
  {
   payload.WithObject("provisioningRepository", m_provisioningRepository.Jsonize());

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateEnvironment"));
  return headers;

}




