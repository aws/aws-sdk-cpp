/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ListDataIntegrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataIntegrationsResult::ListDataIntegrationsResult()
{
}

ListDataIntegrationsResult::ListDataIntegrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataIntegrationsResult& ListDataIntegrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataIntegrations"))
  {
    Aws::Utils::Array<JsonView> dataIntegrationsJsonList = jsonValue.GetArray("DataIntegrations");
    for(unsigned dataIntegrationsIndex = 0; dataIntegrationsIndex < dataIntegrationsJsonList.GetLength(); ++dataIntegrationsIndex)
    {
      m_dataIntegrations.push_back(dataIntegrationsJsonList[dataIntegrationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
