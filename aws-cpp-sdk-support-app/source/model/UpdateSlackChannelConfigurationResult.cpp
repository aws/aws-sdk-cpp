/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/UpdateSlackChannelConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSlackChannelConfigurationResult::UpdateSlackChannelConfigurationResult() : 
    m_notifyOnAddCorrespondenceToCase(false),
    m_notifyOnCaseSeverity(NotificationSeverityLevel::NOT_SET),
    m_notifyOnCreateOrReopenCase(false),
    m_notifyOnResolveCase(false)
{
}

UpdateSlackChannelConfigurationResult::UpdateSlackChannelConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_notifyOnAddCorrespondenceToCase(false),
    m_notifyOnCaseSeverity(NotificationSeverityLevel::NOT_SET),
    m_notifyOnCreateOrReopenCase(false),
    m_notifyOnResolveCase(false)
{
  *this = result;
}

UpdateSlackChannelConfigurationResult& UpdateSlackChannelConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

  }

  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

  }

  if(jsonValue.ValueExists("channelRoleArn"))
  {
    m_channelRoleArn = jsonValue.GetString("channelRoleArn");

  }

  if(jsonValue.ValueExists("notifyOnAddCorrespondenceToCase"))
  {
    m_notifyOnAddCorrespondenceToCase = jsonValue.GetBool("notifyOnAddCorrespondenceToCase");

  }

  if(jsonValue.ValueExists("notifyOnCaseSeverity"))
  {
    m_notifyOnCaseSeverity = NotificationSeverityLevelMapper::GetNotificationSeverityLevelForName(jsonValue.GetString("notifyOnCaseSeverity"));

  }

  if(jsonValue.ValueExists("notifyOnCreateOrReopenCase"))
  {
    m_notifyOnCreateOrReopenCase = jsonValue.GetBool("notifyOnCreateOrReopenCase");

  }

  if(jsonValue.ValueExists("notifyOnResolveCase"))
  {
    m_notifyOnResolveCase = jsonValue.GetBool("notifyOnResolveCase");

  }

  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");

  }



  return *this;
}
