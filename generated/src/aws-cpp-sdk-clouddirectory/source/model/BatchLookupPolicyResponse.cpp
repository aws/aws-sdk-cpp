/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchLookupPolicyResponse.h>
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

BatchLookupPolicyResponse::BatchLookupPolicyResponse() : 
    m_policyToPathListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchLookupPolicyResponse::BatchLookupPolicyResponse(JsonView jsonValue) : 
    m_policyToPathListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchLookupPolicyResponse& BatchLookupPolicyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyToPathList"))
  {
    Aws::Utils::Array<JsonView> policyToPathListJsonList = jsonValue.GetArray("PolicyToPathList");
    for(unsigned policyToPathListIndex = 0; policyToPathListIndex < policyToPathListJsonList.GetLength(); ++policyToPathListIndex)
    {
      m_policyToPathList.push_back(policyToPathListJsonList[policyToPathListIndex].AsObject());
    }
    m_policyToPathListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchLookupPolicyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_policyToPathListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyToPathListJsonList(m_policyToPathList.size());
   for(unsigned policyToPathListIndex = 0; policyToPathListIndex < policyToPathListJsonList.GetLength(); ++policyToPathListIndex)
   {
     policyToPathListJsonList[policyToPathListIndex].AsObject(m_policyToPathList[policyToPathListIndex].Jsonize());
   }
   payload.WithArray("PolicyToPathList", std::move(policyToPathListJsonList));

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
