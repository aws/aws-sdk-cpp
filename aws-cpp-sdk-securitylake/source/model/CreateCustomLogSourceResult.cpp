/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateCustomLogSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCustomLogSourceResult::CreateCustomLogSourceResult()
{
}

CreateCustomLogSourceResult::CreateCustomLogSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCustomLogSourceResult& CreateCustomLogSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customDataLocation"))
  {
    m_customDataLocation = jsonValue.GetString("customDataLocation");

  }

  if(jsonValue.ValueExists("glueCrawlerName"))
  {
    m_glueCrawlerName = jsonValue.GetString("glueCrawlerName");

  }

  if(jsonValue.ValueExists("glueDatabaseName"))
  {
    m_glueDatabaseName = jsonValue.GetString("glueDatabaseName");

  }

  if(jsonValue.ValueExists("glueTableName"))
  {
    m_glueTableName = jsonValue.GetString("glueTableName");

  }

  if(jsonValue.ValueExists("logProviderAccessRoleArn"))
  {
    m_logProviderAccessRoleArn = jsonValue.GetString("logProviderAccessRoleArn");

  }



  return *this;
}
