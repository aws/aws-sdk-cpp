/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RegisterSchemaVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterSchemaVersionResult::RegisterSchemaVersionResult() : 
    m_versionNumber(0),
    m_status(SchemaVersionStatus::NOT_SET)
{
}

RegisterSchemaVersionResult::RegisterSchemaVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionNumber(0),
    m_status(SchemaVersionStatus::NOT_SET)
{
  *this = result;
}

RegisterSchemaVersionResult& RegisterSchemaVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchemaVersionStatusMapper::GetSchemaVersionStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
