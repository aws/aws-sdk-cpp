/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/ListSlackWorkspaceConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSlackWorkspaceConfigurationsResult::ListSlackWorkspaceConfigurationsResult()
{
}

ListSlackWorkspaceConfigurationsResult::ListSlackWorkspaceConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSlackWorkspaceConfigurationsResult& ListSlackWorkspaceConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("slackWorkspaceConfigurations"))
  {
    Aws::Utils::Array<JsonView> slackWorkspaceConfigurationsJsonList = jsonValue.GetArray("slackWorkspaceConfigurations");
    for(unsigned slackWorkspaceConfigurationsIndex = 0; slackWorkspaceConfigurationsIndex < slackWorkspaceConfigurationsJsonList.GetLength(); ++slackWorkspaceConfigurationsIndex)
    {
      m_slackWorkspaceConfigurations.push_back(slackWorkspaceConfigurationsJsonList[slackWorkspaceConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
