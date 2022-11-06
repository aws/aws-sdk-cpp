/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/GetStatementResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStatementResultResult::GetStatementResultResult() : 
    m_totalNumRows(0)
{
}

GetStatementResultResult::GetStatementResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalNumRows(0)
{
  *this = result;
}

GetStatementResultResult& GetStatementResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ColumnMetadata"))
  {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("ColumnMetadata");
    for(unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex)
    {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      Aws::Utils::Array<JsonView> fieldListJsonList = recordsJsonList[recordsIndex].AsArray();
      Aws::Vector<Field> fieldListList;
      fieldListList.reserve((size_t)fieldListJsonList.GetLength());
      for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
      {
        fieldListList.push_back(fieldListJsonList[fieldListIndex].AsObject());
      }
      m_records.push_back(std::move(fieldListList));
    }
  }

  if(jsonValue.ValueExists("TotalNumRows"))
  {
    m_totalNumRows = jsonValue.GetInt64("TotalNumRows");

  }



  return *this;
}
