/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOrganizationPortfolioAccessResult::ListOrganizationPortfolioAccessResult()
{
}

ListOrganizationPortfolioAccessResult::ListOrganizationPortfolioAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationPortfolioAccessResult& ListOrganizationPortfolioAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationNodes"))
  {
    Aws::Utils::Array<JsonView> organizationNodesJsonList = jsonValue.GetArray("OrganizationNodes");
    for(unsigned organizationNodesIndex = 0; organizationNodesIndex < organizationNodesJsonList.GetLength(); ++organizationNodesIndex)
    {
      m_organizationNodes.push_back(organizationNodesJsonList[organizationNodesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
