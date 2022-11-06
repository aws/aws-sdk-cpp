/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TestAuthorizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestAuthorizationResult::TestAuthorizationResult()
{
}

TestAuthorizationResult::TestAuthorizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestAuthorizationResult& TestAuthorizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authResults"))
  {
    Aws::Utils::Array<JsonView> authResultsJsonList = jsonValue.GetArray("authResults");
    for(unsigned authResultsIndex = 0; authResultsIndex < authResultsJsonList.GetLength(); ++authResultsIndex)
    {
      m_authResults.push_back(authResultsJsonList[authResultsIndex].AsObject());
    }
  }



  return *this;
}
