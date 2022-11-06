/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListIntegrationAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIntegrationAssociationsResult::ListIntegrationAssociationsResult()
{
}

ListIntegrationAssociationsResult::ListIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIntegrationAssociationsResult& ListIntegrationAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IntegrationAssociationSummaryList"))
  {
    Aws::Utils::Array<JsonView> integrationAssociationSummaryListJsonList = jsonValue.GetArray("IntegrationAssociationSummaryList");
    for(unsigned integrationAssociationSummaryListIndex = 0; integrationAssociationSummaryListIndex < integrationAssociationSummaryListJsonList.GetLength(); ++integrationAssociationSummaryListIndex)
    {
      m_integrationAssociationSummaryList.push_back(integrationAssociationSummaryListJsonList[integrationAssociationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
