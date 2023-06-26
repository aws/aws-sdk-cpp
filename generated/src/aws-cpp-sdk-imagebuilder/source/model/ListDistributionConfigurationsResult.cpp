/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListDistributionConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDistributionConfigurationsResult::ListDistributionConfigurationsResult()
{
}

ListDistributionConfigurationsResult::ListDistributionConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDistributionConfigurationsResult& ListDistributionConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("distributionConfigurationSummaryList"))
  {
    Aws::Utils::Array<JsonView> distributionConfigurationSummaryListJsonList = jsonValue.GetArray("distributionConfigurationSummaryList");
    for(unsigned distributionConfigurationSummaryListIndex = 0; distributionConfigurationSummaryListIndex < distributionConfigurationSummaryListJsonList.GetLength(); ++distributionConfigurationSummaryListIndex)
    {
      m_distributionConfigurationSummaryList.push_back(distributionConfigurationSummaryListJsonList[distributionConfigurationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
