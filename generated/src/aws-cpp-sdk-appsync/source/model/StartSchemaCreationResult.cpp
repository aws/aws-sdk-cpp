/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/StartSchemaCreationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSchemaCreationResult::StartSchemaCreationResult() : 
    m_status(SchemaStatus::NOT_SET)
{
}

StartSchemaCreationResult::StartSchemaCreationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SchemaStatus::NOT_SET)
{
  *this = result;
}

StartSchemaCreationResult& StartSchemaCreationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = SchemaStatusMapper::GetSchemaStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
