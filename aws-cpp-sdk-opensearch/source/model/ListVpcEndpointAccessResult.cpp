/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ListVpcEndpointAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcEndpointAccessResult::ListVpcEndpointAccessResult()
{
}

ListVpcEndpointAccessResult::ListVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcEndpointAccessResult& ListVpcEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthorizedPrincipalList"))
  {
    Aws::Utils::Array<JsonView> authorizedPrincipalListJsonList = jsonValue.GetArray("AuthorizedPrincipalList");
    for(unsigned authorizedPrincipalListIndex = 0; authorizedPrincipalListIndex < authorizedPrincipalListJsonList.GetLength(); ++authorizedPrincipalListIndex)
    {
      m_authorizedPrincipalList.push_back(authorizedPrincipalListJsonList[authorizedPrincipalListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
