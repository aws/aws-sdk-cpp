/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSchemaResult.h>
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

GetSchemaResult::GetSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSchemaResult& GetSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");
    m_registryNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");
    m_registryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");
    m_schemaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");
    m_schemaArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));
    m_dataFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compatibility"))
  {
    m_compatibility = CompatibilityMapper::GetCompatibilityForName(jsonValue.GetString("Compatibility"));
    m_compatibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaCheckpoint"))
  {
    m_schemaCheckpoint = jsonValue.GetInt64("SchemaCheckpoint");
    m_schemaCheckpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestSchemaVersion"))
  {
    m_latestSchemaVersion = jsonValue.GetInt64("LatestSchemaVersion");
    m_latestSchemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextSchemaVersion"))
  {
    m_nextSchemaVersion = jsonValue.GetInt64("NextSchemaVersion");
    m_nextSchemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaStatus"))
  {
    m_schemaStatus = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("SchemaStatus"));
    m_schemaStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetString("UpdatedTime");
    m_updatedTimeHasBeenSet = true;
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
