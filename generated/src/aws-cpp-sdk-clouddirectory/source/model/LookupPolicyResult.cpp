/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/LookupPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

LookupPolicyResult::LookupPolicyResult()
{
}

LookupPolicyResult::LookupPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

LookupPolicyResult& LookupPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyToPathList"))
  {
    Aws::Utils::Array<JsonView> policyToPathListJsonList = jsonValue.GetArray("PolicyToPathList");
    for(unsigned policyToPathListIndex = 0; policyToPathListIndex < policyToPathListJsonList.GetLength(); ++policyToPathListIndex)
    {
      m_policyToPathList.push_back(policyToPathListJsonList[policyToPathListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
