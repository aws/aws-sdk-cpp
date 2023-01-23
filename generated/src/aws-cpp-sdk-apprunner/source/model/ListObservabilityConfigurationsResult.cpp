/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListObservabilityConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObservabilityConfigurationsResult::ListObservabilityConfigurationsResult()
{
}

ListObservabilityConfigurationsResult::ListObservabilityConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObservabilityConfigurationsResult& ListObservabilityConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObservabilityConfigurationSummaryList"))
  {
    Aws::Utils::Array<JsonView> observabilityConfigurationSummaryListJsonList = jsonValue.GetArray("ObservabilityConfigurationSummaryList");
    for(unsigned observabilityConfigurationSummaryListIndex = 0; observabilityConfigurationSummaryListIndex < observabilityConfigurationSummaryListJsonList.GetLength(); ++observabilityConfigurationSummaryListIndex)
    {
      m_observabilityConfigurationSummaryList.push_back(observabilityConfigurationSummaryListJsonList[observabilityConfigurationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
