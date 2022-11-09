/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ListDataIntegrationAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataIntegrationAssociationsResult::ListDataIntegrationAssociationsResult()
{
}

ListDataIntegrationAssociationsResult::ListDataIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataIntegrationAssociationsResult& ListDataIntegrationAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataIntegrationAssociations"))
  {
    Aws::Utils::Array<JsonView> dataIntegrationAssociationsJsonList = jsonValue.GetArray("DataIntegrationAssociations");
    for(unsigned dataIntegrationAssociationsIndex = 0; dataIntegrationAssociationsIndex < dataIntegrationAssociationsJsonList.GetLength(); ++dataIntegrationAssociationsIndex)
    {
      m_dataIntegrationAssociations.push_back(dataIntegrationAssociationsJsonList[dataIntegrationAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
