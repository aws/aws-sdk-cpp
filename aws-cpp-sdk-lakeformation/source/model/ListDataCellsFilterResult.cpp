/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListDataCellsFilterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataCellsFilterResult::ListDataCellsFilterResult()
{
}

ListDataCellsFilterResult::ListDataCellsFilterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataCellsFilterResult& ListDataCellsFilterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataCellsFilters"))
  {
    Aws::Utils::Array<JsonView> dataCellsFiltersJsonList = jsonValue.GetArray("DataCellsFilters");
    for(unsigned dataCellsFiltersIndex = 0; dataCellsFiltersIndex < dataCellsFiltersJsonList.GetLength(); ++dataCellsFiltersIndex)
    {
      m_dataCellsFilters.push_back(dataCellsFiltersJsonList[dataCellsFiltersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
