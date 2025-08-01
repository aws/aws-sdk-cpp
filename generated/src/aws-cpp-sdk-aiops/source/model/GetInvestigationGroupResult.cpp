/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/model/GetInvestigationGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AIOps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInvestigationGroupResult::GetInvestigationGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInvestigationGroupResult& GetInvestigationGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetInt64("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetInt64("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInt64("retentionInDays");
    m_retentionInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("chatbotNotificationChannel"))
  {
    Aws::Map<Aws::String, JsonView> chatbotNotificationChannelJsonMap = jsonValue.GetObject("chatbotNotificationChannel").GetAllObjects();
    for(auto& chatbotNotificationChannelItem : chatbotNotificationChannelJsonMap)
    {
      Aws::Utils::Array<JsonView> chatConfigurationArnsJsonList = chatbotNotificationChannelItem.second.AsArray();
      Aws::Vector<Aws::String> chatConfigurationArnsList;
      chatConfigurationArnsList.reserve((size_t)chatConfigurationArnsJsonList.GetLength());
      for(unsigned chatConfigurationArnsIndex = 0; chatConfigurationArnsIndex < chatConfigurationArnsJsonList.GetLength(); ++chatConfigurationArnsIndex)
      {
        chatConfigurationArnsList.push_back(chatConfigurationArnsJsonList[chatConfigurationArnsIndex].AsString());
      }
      m_chatbotNotificationChannel[chatbotNotificationChannelItem.first] = std::move(chatConfigurationArnsList);
    }
    m_chatbotNotificationChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tagKeyBoundaries"))
  {
    Aws::Utils::Array<JsonView> tagKeyBoundariesJsonList = jsonValue.GetArray("tagKeyBoundaries");
    for(unsigned tagKeyBoundariesIndex = 0; tagKeyBoundariesIndex < tagKeyBoundariesJsonList.GetLength(); ++tagKeyBoundariesIndex)
    {
      m_tagKeyBoundaries.push_back(tagKeyBoundariesJsonList[tagKeyBoundariesIndex].AsString());
    }
    m_tagKeyBoundariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isCloudTrailEventHistoryEnabled"))
  {
    m_isCloudTrailEventHistoryEnabled = jsonValue.GetBool("isCloudTrailEventHistoryEnabled");
    m_isCloudTrailEventHistoryEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("crossAccountConfigurations"))
  {
    Aws::Utils::Array<JsonView> crossAccountConfigurationsJsonList = jsonValue.GetArray("crossAccountConfigurations");
    for(unsigned crossAccountConfigurationsIndex = 0; crossAccountConfigurationsIndex < crossAccountConfigurationsJsonList.GetLength(); ++crossAccountConfigurationsIndex)
    {
      m_crossAccountConfigurations.push_back(crossAccountConfigurationsJsonList[crossAccountConfigurationsIndex].AsObject());
    }
    m_crossAccountConfigurationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
