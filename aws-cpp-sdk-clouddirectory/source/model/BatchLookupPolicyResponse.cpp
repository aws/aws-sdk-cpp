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

BatchLookupPolicyResponse::BatchLookupPolicyResponse(const JsonValue& jsonValue) : 
    m_policyToPathListHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchLookupPolicyResponse& BatchLookupPolicyResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PolicyToPathList"))
  {
    Array<JsonValue> policyToPathListJsonList = jsonValue.GetArray("PolicyToPathList");
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
   Array<JsonValue> policyToPathListJsonList(m_policyToPathList.size());
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
