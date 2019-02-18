/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/athena/model/CreateNamedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNamedQueryRequest::CreateNamedQueryRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_workGroupHasBeenSet(false)
{
}

Aws::String CreateNamedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNamedQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.CreateNamedQuery"));
  return headers;

}




