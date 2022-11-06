/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListObjectPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObjectPoliciesResult::ListObjectPoliciesResult()
{
}

ListObjectPoliciesResult::ListObjectPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObjectPoliciesResult& ListObjectPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttachedPolicyIds"))
  {
    Aws::Utils::Array<JsonView> attachedPolicyIdsJsonList = jsonValue.GetArray("AttachedPolicyIds");
    for(unsigned attachedPolicyIdsIndex = 0; attachedPolicyIdsIndex < attachedPolicyIdsJsonList.GetLength(); ++attachedPolicyIdsIndex)
    {
      m_attachedPolicyIds.push_back(attachedPolicyIdsJsonList[attachedPolicyIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
