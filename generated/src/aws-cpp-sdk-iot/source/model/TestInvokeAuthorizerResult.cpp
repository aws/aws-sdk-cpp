/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TestInvokeAuthorizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestInvokeAuthorizerResult::TestInvokeAuthorizerResult() : 
    m_isAuthenticated(false),
    m_refreshAfterInSeconds(0),
    m_disconnectAfterInSeconds(0)
{
}

TestInvokeAuthorizerResult::TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isAuthenticated(false),
    m_refreshAfterInSeconds(0),
    m_disconnectAfterInSeconds(0)
{
  *this = result;
}

TestInvokeAuthorizerResult& TestInvokeAuthorizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("isAuthenticated"))
  {
    m_isAuthenticated = jsonValue.GetBool("isAuthenticated");

  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

  }

  if(jsonValue.ValueExists("policyDocuments"))
  {
    Aws::Utils::Array<JsonView> policyDocumentsJsonList = jsonValue.GetArray("policyDocuments");
    for(unsigned policyDocumentsIndex = 0; policyDocumentsIndex < policyDocumentsJsonList.GetLength(); ++policyDocumentsIndex)
    {
      m_policyDocuments.push_back(policyDocumentsJsonList[policyDocumentsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("refreshAfterInSeconds"))
  {
    m_refreshAfterInSeconds = jsonValue.GetInteger("refreshAfterInSeconds");

  }

  if(jsonValue.ValueExists("disconnectAfterInSeconds"))
  {
    m_disconnectAfterInSeconds = jsonValue.GetInteger("disconnectAfterInSeconds");

  }



  return *this;
}
