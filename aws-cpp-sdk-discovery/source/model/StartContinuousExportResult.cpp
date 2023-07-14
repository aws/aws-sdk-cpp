/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StartContinuousExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartContinuousExportResult::StartContinuousExportResult() : 
    m_dataSource(DataSource::NOT_SET)
{
}

StartContinuousExportResult::StartContinuousExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataSource(DataSource::NOT_SET)
{
  *this = result;
}

StartContinuousExportResult& StartContinuousExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");

  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = DataSourceMapper::GetDataSourceForName(jsonValue.GetString("dataSource"));

  }

  if(jsonValue.ValueExists("schemaStorageConfig"))
  {
    Aws::Map<Aws::String, JsonView> schemaStorageConfigJsonMap = jsonValue.GetObject("schemaStorageConfig").GetAllObjects();
    for(auto& schemaStorageConfigItem : schemaStorageConfigJsonMap)
    {
      m_schemaStorageConfig[schemaStorageConfigItem.first] = schemaStorageConfigItem.second.AsString();
    }
  }



  return *this;
}
