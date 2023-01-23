/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDatabaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatabaseResult::GetDatabaseResult()
{
}

GetDatabaseResult::GetDatabaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatabaseResult& GetDatabaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

  }



  return *this;
}
