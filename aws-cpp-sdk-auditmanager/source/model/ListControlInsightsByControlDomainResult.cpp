/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListControlInsightsByControlDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListControlInsightsByControlDomainResult::ListControlInsightsByControlDomainResult()
{
}

ListControlInsightsByControlDomainResult::ListControlInsightsByControlDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListControlInsightsByControlDomainResult& ListControlInsightsByControlDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("controlInsightsMetadata"))
  {
    Aws::Utils::Array<JsonView> controlInsightsMetadataJsonList = jsonValue.GetArray("controlInsightsMetadata");
    for(unsigned controlInsightsMetadataIndex = 0; controlInsightsMetadataIndex < controlInsightsMetadataJsonList.GetLength(); ++controlInsightsMetadataIndex)
    {
      m_controlInsightsMetadata.push_back(controlInsightsMetadataJsonList[controlInsightsMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
