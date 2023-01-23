/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteSchemaResult::DeleteSchemaResult() : 
    m_status(SchemaStatus::NOT_SET)
{
}

DeleteSchemaResult::DeleteSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SchemaStatus::NOT_SET)
{
  *this = result;
}

DeleteSchemaResult& DeleteSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
