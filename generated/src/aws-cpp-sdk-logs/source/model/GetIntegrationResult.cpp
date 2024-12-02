/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIntegrationResult::GetIntegrationResult() : 
    m_integrationType(IntegrationType::NOT_SET),
    m_integrationStatus(IntegrationStatus::NOT_SET)
{
}

GetIntegrationResult::GetIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetIntegrationResult()
{
  *this = result;
}

GetIntegrationResult& GetIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("integrationName"))
  {
    m_integrationName = jsonValue.GetString("integrationName");

  }

  if(jsonValue.ValueExists("integrationType"))
  {
    m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(jsonValue.GetString("integrationType"));

  }

  if(jsonValue.ValueExists("integrationStatus"))
  {
    m_integrationStatus = IntegrationStatusMapper::GetIntegrationStatusForName(jsonValue.GetString("integrationStatus"));

  }

  if(jsonValue.ValueExists("integrationDetails"))
  {
    m_integrationDetails = jsonValue.GetObject("integrationDetails");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
