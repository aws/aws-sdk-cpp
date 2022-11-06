/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListInfrastructureConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInfrastructureConfigurationsResult::ListInfrastructureConfigurationsResult()
{
}

ListInfrastructureConfigurationsResult::ListInfrastructureConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInfrastructureConfigurationsResult& ListInfrastructureConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("infrastructureConfigurationSummaryList"))
  {
    Aws::Utils::Array<JsonView> infrastructureConfigurationSummaryListJsonList = jsonValue.GetArray("infrastructureConfigurationSummaryList");
    for(unsigned infrastructureConfigurationSummaryListIndex = 0; infrastructureConfigurationSummaryListIndex < infrastructureConfigurationSummaryListJsonList.GetLength(); ++infrastructureConfigurationSummaryListIndex)
    {
      m_infrastructureConfigurationSummaryList.push_back(infrastructureConfigurationSummaryListJsonList[infrastructureConfigurationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
