/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/StartFHIRImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartFHIRImportJobRequest::StartFHIRImportJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_jobOutputDataConfigHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartFHIRImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_jobOutputDataConfigHasBeenSet)
  {
   payload.WithObject("JobOutputDataConfig", m_jobOutputDataConfig.Jsonize());

  }

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("DatastoreId", m_datastoreId);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartFHIRImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.StartFHIRImportJob"));
  return headers;

}




