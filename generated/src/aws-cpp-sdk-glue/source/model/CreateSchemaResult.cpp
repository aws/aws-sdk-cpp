/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateSchemaResult.h>
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

CreateSchemaResult::CreateSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSchemaResult& CreateSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");
    m_schemaVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaVersionStatus"))
  {
    m_schemaVersionStatus = SchemaVersionStatusMapper::GetSchemaVersionStatusForName(jsonValue.GetString("SchemaVersionStatus"));
    m_schemaVersionStatusHasBeenSet = true;
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
