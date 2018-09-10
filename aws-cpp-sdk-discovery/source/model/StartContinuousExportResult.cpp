/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
