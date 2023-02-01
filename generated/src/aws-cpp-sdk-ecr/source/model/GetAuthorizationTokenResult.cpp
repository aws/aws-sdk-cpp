/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/GetAuthorizationTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAuthorizationTokenResult::GetAuthorizationTokenResult()
{
}

GetAuthorizationTokenResult::GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAuthorizationTokenResult& GetAuthorizationTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorizationData"))
  {
    Aws::Utils::Array<JsonView> authorizationDataJsonList = jsonValue.GetArray("authorizationData");
    for(unsigned authorizationDataIndex = 0; authorizationDataIndex < authorizationDataJsonList.GetLength(); ++authorizationDataIndex)
    {
      m_authorizationData.push_back(authorizationDataJsonList[authorizationDataIndex].AsObject());
    }
  }



  return *this;
}
