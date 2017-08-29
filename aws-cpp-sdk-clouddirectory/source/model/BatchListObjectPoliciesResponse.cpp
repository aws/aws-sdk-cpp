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

#include <aws/clouddirectory/model/BatchListObjectPoliciesResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListObjectPoliciesResponse::BatchListObjectPoliciesResponse() : 
    m_attachedPolicyIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectPoliciesResponse::BatchListObjectPoliciesResponse(const JsonValue& jsonValue) : 
    m_attachedPolicyIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectPoliciesResponse& BatchListObjectPoliciesResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AttachedPolicyIds"))
  {
    Array<JsonValue> attachedPolicyIdsJsonList = jsonValue.GetArray("AttachedPolicyIds");
    for(unsigned attachedPolicyIdsIndex = 0; attachedPolicyIdsIndex < attachedPolicyIdsJsonList.GetLength(); ++attachedPolicyIdsIndex)
    {
      m_attachedPolicyIds.push_back(attachedPolicyIdsJsonList[attachedPolicyIdsIndex].AsString());
    }
    m_attachedPolicyIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectPoliciesResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attachedPolicyIdsHasBeenSet)
  {
   Array<JsonValue> attachedPolicyIdsJsonList(m_attachedPolicyIds.size());
   for(unsigned attachedPolicyIdsIndex = 0; attachedPolicyIdsIndex < attachedPolicyIdsJsonList.GetLength(); ++attachedPolicyIdsIndex)
   {
     attachedPolicyIdsJsonList[attachedPolicyIdsIndex].AsString(m_attachedPolicyIds[attachedPolicyIdsIndex]);
   }
   payload.WithArray("AttachedPolicyIds", std::move(attachedPolicyIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
