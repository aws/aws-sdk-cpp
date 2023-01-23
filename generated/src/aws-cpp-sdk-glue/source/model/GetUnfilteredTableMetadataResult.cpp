/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredTableMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUnfilteredTableMetadataResult::GetUnfilteredTableMetadataResult() : 
    m_isRegisteredWithLakeFormation(false)
{
}

GetUnfilteredTableMetadataResult::GetUnfilteredTableMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isRegisteredWithLakeFormation(false)
{
  *this = result;
}

GetUnfilteredTableMetadataResult& GetUnfilteredTableMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

  }

  if(jsonValue.ValueExists("AuthorizedColumns"))
  {
    Aws::Utils::Array<JsonView> authorizedColumnsJsonList = jsonValue.GetArray("AuthorizedColumns");
    for(unsigned authorizedColumnsIndex = 0; authorizedColumnsIndex < authorizedColumnsJsonList.GetLength(); ++authorizedColumnsIndex)
    {
      m_authorizedColumns.push_back(authorizedColumnsJsonList[authorizedColumnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("IsRegisteredWithLakeFormation"))
  {
    m_isRegisteredWithLakeFormation = jsonValue.GetBool("IsRegisteredWithLakeFormation");

  }

  if(jsonValue.ValueExists("CellFilters"))
  {
    Aws::Utils::Array<JsonView> cellFiltersJsonList = jsonValue.GetArray("CellFilters");
    for(unsigned cellFiltersIndex = 0; cellFiltersIndex < cellFiltersJsonList.GetLength(); ++cellFiltersIndex)
    {
      m_cellFilters.push_back(cellFiltersJsonList[cellFiltersIndex].AsObject());
    }
  }



  return *this;
}
