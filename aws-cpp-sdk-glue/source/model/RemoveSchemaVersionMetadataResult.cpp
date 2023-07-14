/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RemoveSchemaVersionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveSchemaVersionMetadataResult::RemoveSchemaVersionMetadataResult() : 
    m_latestVersion(false),
    m_versionNumber(0)
{
}

RemoveSchemaVersionMetadataResult::RemoveSchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_latestVersion(false),
    m_versionNumber(0)
{
  *this = result;
}

RemoveSchemaVersionMetadataResult& RemoveSchemaVersionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

  }

  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

  }

  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetBool("LatestVersion");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

  }

  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

  }

  if(jsonValue.ValueExists("MetadataKey"))
  {
    m_metadataKey = jsonValue.GetString("MetadataKey");

  }

  if(jsonValue.ValueExists("MetadataValue"))
  {
    m_metadataValue = jsonValue.GetString("MetadataValue");

  }



  return *this;
}
