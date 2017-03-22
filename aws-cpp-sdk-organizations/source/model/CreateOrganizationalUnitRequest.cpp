/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/model/CreateOrganizationalUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest() : 
    m_parentIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String CreateOrganizationalUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parentIdHasBeenSet)
  {
   payload.WithString("ParentId", m_parentId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOrganizationalUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CreateOrganizationalUnit"));
  return headers;

}




