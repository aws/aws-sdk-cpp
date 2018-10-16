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

#include <aws/glue/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_policyInJsonHasBeenSet(false),
    m_policyHashConditionHasBeenSet(false),
    m_policyExistsCondition(ExistCondition::NOT_SET),
    m_policyExistsConditionHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyInJsonHasBeenSet)
  {
   payload.WithString("PolicyInJson", m_policyInJson);

  }

  if(m_policyHashConditionHasBeenSet)
  {
   payload.WithString("PolicyHashCondition", m_policyHashCondition);

  }

  if(m_policyExistsConditionHasBeenSet)
  {
   payload.WithString("PolicyExistsCondition", ExistConditionMapper::GetNameForExistCondition(m_policyExistsCondition));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutResourcePolicy"));
  return headers;

}




