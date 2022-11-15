/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ExecuteStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteStatementResult::ExecuteStatementResult() : 
    m_numberOfRecordsUpdated(0)
{
}

ExecuteStatementResult::ExecuteStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfRecordsUpdated(0)
{
  *this = result;
}

ExecuteStatementResult& ExecuteStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
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

  if(jsonValue.ValueExists("columnMetadata"))
  {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("columnMetadata");
    for(unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex)
    {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("numberOfRecordsUpdated"))
  {
    m_numberOfRecordsUpdated = jsonValue.GetInt64("numberOfRecordsUpdated");

  }

  if(jsonValue.ValueExists("generatedFields"))
  {
    Aws::Utils::Array<JsonView> generatedFieldsJsonList = jsonValue.GetArray("generatedFields");
    for(unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex)
    {
      m_generatedFields.push_back(generatedFieldsJsonList[generatedFieldsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("formattedRecords"))
  {
    m_formattedRecords = jsonValue.GetString("formattedRecords");

  }



  return *this;
}
