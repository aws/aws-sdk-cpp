/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreateElasticsearchDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateElasticsearchDomainResult::CreateElasticsearchDomainResult()
{
}

CreateElasticsearchDomainResult::CreateElasticsearchDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateElasticsearchDomainResult& CreateElasticsearchDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainStatus"))
  {
    m_domainStatus = jsonValue.GetObject("DomainStatus");

  }



  return *this;
}
