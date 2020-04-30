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

#include <aws/schemas/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_policyHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload.View().WriteReadable();
}

void PutResourcePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_registryNameHasBeenSet)
    {
      ss << m_registryName;
      uri.AddQueryStringParameter("registryName", ss.str());
      ss.str("");
    }

}



