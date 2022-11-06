/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ListKeyPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKeyPoliciesResult::ListKeyPoliciesResult() : 
    m_truncated(false)
{
}

ListKeyPoliciesResult::ListKeyPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_truncated(false)
{
  *this = result;
}

ListKeyPoliciesResult& ListKeyPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyNames"))
  {
    Aws::Utils::Array<JsonView> policyNamesJsonList = jsonValue.GetArray("PolicyNames");
    for(unsigned policyNamesIndex = 0; policyNamesIndex < policyNamesJsonList.GetLength(); ++policyNamesIndex)
    {
      m_policyNames.push_back(policyNamesJsonList[policyNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("Truncated"))
  {
    m_truncated = jsonValue.GetBool("Truncated");

  }



  return *this;
}
