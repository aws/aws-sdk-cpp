/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSchemaVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSchemaVersionResult::GetSchemaVersionResult() : 
    m_dataFormat(DataFormat::NOT_SET),
    m_versionNumber(0),
    m_status(SchemaVersionStatus::NOT_SET)
{
}

GetSchemaVersionResult::GetSchemaVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataFormat(DataFormat::NOT_SET),
    m_versionNumber(0),
    m_status(SchemaVersionStatus::NOT_SET)
{
  *this = result;
}

GetSchemaVersionResult& GetSchemaVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

  }

  if(jsonValue.ValueExists("SchemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetString("SchemaDefinition");

  }

  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));

  }

  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchemaVersionStatusMapper::GetSchemaVersionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

  }



  return *this;
}
