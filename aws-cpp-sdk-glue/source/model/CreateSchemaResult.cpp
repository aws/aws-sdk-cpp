/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSchemaResult::CreateSchemaResult() : 
    m_dataFormat(DataFormat::NOT_SET),
    m_compatibility(Compatibility::NOT_SET),
    m_schemaCheckpoint(0),
    m_latestSchemaVersion(0),
    m_nextSchemaVersion(0),
    m_schemaStatus(SchemaStatus::NOT_SET),
    m_schemaVersionStatus(SchemaVersionStatus::NOT_SET)
{
}

CreateSchemaResult::CreateSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataFormat(DataFormat::NOT_SET),
    m_compatibility(Compatibility::NOT_SET),
    m_schemaCheckpoint(0),
    m_latestSchemaVersion(0),
    m_nextSchemaVersion(0),
    m_schemaStatus(SchemaStatus::NOT_SET),
    m_schemaVersionStatus(SchemaVersionStatus::NOT_SET)
{
  *this = result;
}

CreateSchemaResult& CreateSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

  }

  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));

  }

  if(jsonValue.ValueExists("Compatibility"))
  {
    m_compatibility = CompatibilityMapper::GetCompatibilityForName(jsonValue.GetString("Compatibility"));

  }

  if(jsonValue.ValueExists("SchemaCheckpoint"))
  {
    m_schemaCheckpoint = jsonValue.GetInt64("SchemaCheckpoint");

  }

  if(jsonValue.ValueExists("LatestSchemaVersion"))
  {
    m_latestSchemaVersion = jsonValue.GetInt64("LatestSchemaVersion");

  }

  if(jsonValue.ValueExists("NextSchemaVersion"))
  {
    m_nextSchemaVersion = jsonValue.GetInt64("NextSchemaVersion");

  }

  if(jsonValue.ValueExists("SchemaStatus"))
  {
    m_schemaStatus = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("SchemaStatus"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

  }

  if(jsonValue.ValueExists("SchemaVersionStatus"))
  {
    m_schemaVersionStatus = SchemaVersionStatusMapper::GetSchemaVersionStatusForName(jsonValue.GetString("SchemaVersionStatus"));

  }



  return *this;
}
