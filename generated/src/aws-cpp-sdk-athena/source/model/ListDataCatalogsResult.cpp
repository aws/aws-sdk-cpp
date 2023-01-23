/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListDataCatalogsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataCatalogsResult::ListDataCatalogsResult()
{
}

ListDataCatalogsResult::ListDataCatalogsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataCatalogsResult& ListDataCatalogsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataCatalogsSummary"))
  {
    Aws::Utils::Array<JsonView> dataCatalogsSummaryJsonList = jsonValue.GetArray("DataCatalogsSummary");
    for(unsigned dataCatalogsSummaryIndex = 0; dataCatalogsSummaryIndex < dataCatalogsSummaryJsonList.GetLength(); ++dataCatalogsSummaryIndex)
    {
      m_dataCatalogsSummary.push_back(dataCatalogsSummaryJsonList[dataCatalogsSummaryIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
