/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/ExportServerEngineAttributeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportServerEngineAttributeResult::ExportServerEngineAttributeResult()
{
}

ExportServerEngineAttributeResult::ExportServerEngineAttributeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportServerEngineAttributeResult& ExportServerEngineAttributeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EngineAttribute"))
  {
    m_engineAttribute = jsonValue.GetObject("EngineAttribute");

  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

  }



  return *this;
}
