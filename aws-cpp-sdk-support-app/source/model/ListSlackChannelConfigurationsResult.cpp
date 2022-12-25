/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/ListSlackChannelConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSlackChannelConfigurationsResult::ListSlackChannelConfigurationsResult()
{
}

ListSlackChannelConfigurationsResult::ListSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSlackChannelConfigurationsResult& ListSlackChannelConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("slackChannelConfigurations"))
  {
    Aws::Utils::Array<JsonView> slackChannelConfigurationsJsonList = jsonValue.GetArray("slackChannelConfigurations");
    for(unsigned slackChannelConfigurationsIndex = 0; slackChannelConfigurationsIndex < slackChannelConfigurationsJsonList.GetLength(); ++slackChannelConfigurationsIndex)
    {
      m_slackChannelConfigurations.push_back(slackChannelConfigurationsJsonList[slackChannelConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
