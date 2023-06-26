/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchListObjectPoliciesResponse::BatchListObjectPoliciesResponse(JsonView jsonValue) : 
    m_attachedPolicyIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectPoliciesResponse& BatchListObjectPoliciesResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachedPolicyIds"))
  {
    Aws::Utils::Array<JsonView> attachedPolicyIdsJsonList = jsonValue.GetArray("AttachedPolicyIds");
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
   Aws::Utils::Array<JsonValue> attachedPolicyIdsJsonList(m_attachedPolicyIds.size());
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
