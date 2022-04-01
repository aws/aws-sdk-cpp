/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSchemaResult::GetSchemaResult() : 
    m_dataFormat(DataFormat::NOT_SET),
    m_compatibility(Compatibility::NOT_SET),
    m_schemaCheckpoint(0),
    m_latestSchemaVersion(0),
    m_nextSchemaVersion(0),
    m_schemaStatus(SchemaStatus::NOT_SET)
{
}

GetSchemaResult::GetSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataFormat(DataFormat::NOT_SET),
    m_compatibility(Compatibility::NOT_SET),
    m_schemaCheckpoint(0),
    m_latestSchemaVersion(0),
    m_nextSchemaVersion(0),
    m_schemaStatus(SchemaStatus::NOT_SET)
{
  *this = result;
}

GetSchemaResult& GetSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetString("UpdatedTime");

  }



  return *this;
}
