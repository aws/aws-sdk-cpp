/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetCSVHeaderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCSVHeaderResult::GetCSVHeaderResult()
{
}

GetCSVHeaderResult::GetCSVHeaderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCSVHeaderResult& GetCSVHeaderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

  }

  if(jsonValue.ValueExists("CSVHeader"))
  {
    Aws::Utils::Array<JsonView> cSVHeaderJsonList = jsonValue.GetArray("CSVHeader");
    for(unsigned cSVHeaderIndex = 0; cSVHeaderIndex < cSVHeaderJsonList.GetLength(); ++cSVHeaderIndex)
    {
      m_cSVHeader.push_back(cSVHeaderJsonList[cSVHeaderIndex].AsString());
    }
  }



  return *this;
}
