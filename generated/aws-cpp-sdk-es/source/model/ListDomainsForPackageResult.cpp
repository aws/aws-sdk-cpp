﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListDomainsForPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainsForPackageResult::ListDomainsForPackageResult()
{
}

ListDomainsForPackageResult::ListDomainsForPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainsForPackageResult& ListDomainsForPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainPackageDetailsList"))
  {
    Array<JsonView> domainPackageDetailsListJsonList = jsonValue.GetArray("DomainPackageDetailsList");
    for(unsigned domainPackageDetailsListIndex = 0; domainPackageDetailsListIndex < domainPackageDetailsListJsonList.GetLength(); ++domainPackageDetailsListIndex)
    {
      m_domainPackageDetailsList.push_back(domainPackageDetailsListJsonList[domainPackageDetailsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
