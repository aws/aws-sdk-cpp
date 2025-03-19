/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredTableMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUnfilteredTableMetadataResult::GetUnfilteredTableMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUnfilteredTableMetadataResult& GetUnfilteredTableMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizedColumns"))
  {
    Aws::Utils::Array<JsonView> authorizedColumnsJsonList = jsonValue.GetArray("AuthorizedColumns");
    for(unsigned authorizedColumnsIndex = 0; authorizedColumnsIndex < authorizedColumnsJsonList.GetLength(); ++authorizedColumnsIndex)
    {
      m_authorizedColumns.push_back(authorizedColumnsJsonList[authorizedColumnsIndex].AsString());
    }
    m_authorizedColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsRegisteredWithLakeFormation"))
  {
    m_isRegisteredWithLakeFormation = jsonValue.GetBool("IsRegisteredWithLakeFormation");
    m_isRegisteredWithLakeFormationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CellFilters"))
  {
    Aws::Utils::Array<JsonView> cellFiltersJsonList = jsonValue.GetArray("CellFilters");
    for(unsigned cellFiltersIndex = 0; cellFiltersIndex < cellFiltersJsonList.GetLength(); ++cellFiltersIndex)
    {
      m_cellFilters.push_back(cellFiltersJsonList[cellFiltersIndex].AsObject());
    }
    m_cellFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryAuthorizationId"))
  {
    m_queryAuthorizationId = jsonValue.GetString("QueryAuthorizationId");
    m_queryAuthorizationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsMultiDialectView"))
  {
    m_isMultiDialectView = jsonValue.GetBool("IsMultiDialectView");
    m_isMultiDialectViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsProtected"))
  {
    m_isProtected = jsonValue.GetBool("IsProtected");
    m_isProtectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(PermissionMapper::GetPermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RowFilter"))
  {
    m_rowFilter = jsonValue.GetString("RowFilter");
    m_rowFilterHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
