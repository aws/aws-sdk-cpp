/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListIdentityProviderConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityProviderConfigsResult::ListIdentityProviderConfigsResult()
{
}

ListIdentityProviderConfigsResult::ListIdentityProviderConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdentityProviderConfigsResult& ListIdentityProviderConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identityProviderConfigs"))
  {
    Aws::Utils::Array<JsonView> identityProviderConfigsJsonList = jsonValue.GetArray("identityProviderConfigs");
    for(unsigned identityProviderConfigsIndex = 0; identityProviderConfigsIndex < identityProviderConfigsJsonList.GetLength(); ++identityProviderConfigsIndex)
    {
      m_identityProviderConfigs.push_back(identityProviderConfigsJsonList[identityProviderConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
