/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityProvidersResult::ListIdentityProvidersResult()
{
}

ListIdentityProvidersResult::ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdentityProvidersResult& ListIdentityProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityProviderSummaries"))
  {
    Aws::Utils::Array<JsonView> identityProviderSummariesJsonList = jsonValue.GetArray("IdentityProviderSummaries");
    for(unsigned identityProviderSummariesIndex = 0; identityProviderSummariesIndex < identityProviderSummariesJsonList.GetLength(); ++identityProviderSummariesIndex)
    {
      m_identityProviderSummaries.push_back(identityProviderSummariesJsonList[identityProviderSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
