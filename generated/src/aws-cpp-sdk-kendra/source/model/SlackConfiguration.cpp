/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SlackConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SlackConfiguration::SlackConfiguration() : 
    m_teamIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_slackEntityListHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_crawlBotMessage(false),
    m_crawlBotMessageHasBeenSet(false),
    m_excludeArchived(false),
    m_excludeArchivedHasBeenSet(false),
    m_sinceCrawlDateHasBeenSet(false),
    m_lookBackPeriod(0),
    m_lookBackPeriodHasBeenSet(false),
    m_privateChannelFilterHasBeenSet(false),
    m_publicChannelFilterHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
}

SlackConfiguration::SlackConfiguration(JsonView jsonValue) : 
    m_teamIdHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_slackEntityListHasBeenSet(false),
    m_useChangeLog(false),
    m_useChangeLogHasBeenSet(false),
    m_crawlBotMessage(false),
    m_crawlBotMessageHasBeenSet(false),
    m_excludeArchived(false),
    m_excludeArchivedHasBeenSet(false),
    m_sinceCrawlDateHasBeenSet(false),
    m_lookBackPeriod(0),
    m_lookBackPeriodHasBeenSet(false),
    m_privateChannelFilterHasBeenSet(false),
    m_publicChannelFilterHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

SlackConfiguration& SlackConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TeamId"))
  {
    m_teamId = jsonValue.GetString("TeamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlackEntityList"))
  {
    Aws::Utils::Array<JsonView> slackEntityListJsonList = jsonValue.GetArray("SlackEntityList");
    for(unsigned slackEntityListIndex = 0; slackEntityListIndex < slackEntityListJsonList.GetLength(); ++slackEntityListIndex)
    {
      m_slackEntityList.push_back(SlackEntityMapper::GetSlackEntityForName(slackEntityListJsonList[slackEntityListIndex].AsString()));
    }
    m_slackEntityListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseChangeLog"))
  {
    m_useChangeLog = jsonValue.GetBool("UseChangeLog");

    m_useChangeLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlBotMessage"))
  {
    m_crawlBotMessage = jsonValue.GetBool("CrawlBotMessage");

    m_crawlBotMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeArchived"))
  {
    m_excludeArchived = jsonValue.GetBool("ExcludeArchived");

    m_excludeArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SinceCrawlDate"))
  {
    m_sinceCrawlDate = jsonValue.GetString("SinceCrawlDate");

    m_sinceCrawlDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookBackPeriod"))
  {
    m_lookBackPeriod = jsonValue.GetInteger("LookBackPeriod");

    m_lookBackPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateChannelFilter"))
  {
    Aws::Utils::Array<JsonView> privateChannelFilterJsonList = jsonValue.GetArray("PrivateChannelFilter");
    for(unsigned privateChannelFilterIndex = 0; privateChannelFilterIndex < privateChannelFilterJsonList.GetLength(); ++privateChannelFilterIndex)
    {
      m_privateChannelFilter.push_back(privateChannelFilterJsonList[privateChannelFilterIndex].AsString());
    }
    m_privateChannelFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicChannelFilter"))
  {
    Aws::Utils::Array<JsonView> publicChannelFilterJsonList = jsonValue.GetArray("PublicChannelFilter");
    for(unsigned publicChannelFilterIndex = 0; publicChannelFilterIndex < publicChannelFilterJsonList.GetLength(); ++publicChannelFilterIndex)
    {
      m_publicChannelFilter.push_back(publicChannelFilterJsonList[publicChannelFilterIndex].AsString());
    }
    m_publicChannelFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> inclusionPatternsJsonList = jsonValue.GetArray("InclusionPatterns");
    for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
    {
      m_inclusionPatterns.push_back(inclusionPatternsJsonList[inclusionPatternsIndex].AsString());
    }
    m_inclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
    for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
    {
      m_exclusionPatterns.push_back(exclusionPatternsJsonList[exclusionPatternsIndex].AsString());
    }
    m_exclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldMappings"))
  {
    Aws::Utils::Array<JsonView> fieldMappingsJsonList = jsonValue.GetArray("FieldMappings");
    for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
    {
      m_fieldMappings.push_back(fieldMappingsJsonList[fieldMappingsIndex].AsObject());
    }
    m_fieldMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue SlackConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_slackEntityListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slackEntityListJsonList(m_slackEntityList.size());
   for(unsigned slackEntityListIndex = 0; slackEntityListIndex < slackEntityListJsonList.GetLength(); ++slackEntityListIndex)
   {
     slackEntityListJsonList[slackEntityListIndex].AsString(SlackEntityMapper::GetNameForSlackEntity(m_slackEntityList[slackEntityListIndex]));
   }
   payload.WithArray("SlackEntityList", std::move(slackEntityListJsonList));

  }

  if(m_useChangeLogHasBeenSet)
  {
   payload.WithBool("UseChangeLog", m_useChangeLog);

  }

  if(m_crawlBotMessageHasBeenSet)
  {
   payload.WithBool("CrawlBotMessage", m_crawlBotMessage);

  }

  if(m_excludeArchivedHasBeenSet)
  {
   payload.WithBool("ExcludeArchived", m_excludeArchived);

  }

  if(m_sinceCrawlDateHasBeenSet)
  {
   payload.WithString("SinceCrawlDate", m_sinceCrawlDate);

  }

  if(m_lookBackPeriodHasBeenSet)
  {
   payload.WithInteger("LookBackPeriod", m_lookBackPeriod);

  }

  if(m_privateChannelFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateChannelFilterJsonList(m_privateChannelFilter.size());
   for(unsigned privateChannelFilterIndex = 0; privateChannelFilterIndex < privateChannelFilterJsonList.GetLength(); ++privateChannelFilterIndex)
   {
     privateChannelFilterJsonList[privateChannelFilterIndex].AsString(m_privateChannelFilter[privateChannelFilterIndex]);
   }
   payload.WithArray("PrivateChannelFilter", std::move(privateChannelFilterJsonList));

  }

  if(m_publicChannelFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicChannelFilterJsonList(m_publicChannelFilter.size());
   for(unsigned publicChannelFilterIndex = 0; publicChannelFilterIndex < publicChannelFilterJsonList.GetLength(); ++publicChannelFilterIndex)
   {
     publicChannelFilterJsonList[publicChannelFilterIndex].AsString(m_publicChannelFilter[publicChannelFilterIndex]);
   }
   payload.WithArray("PublicChannelFilter", std::move(publicChannelFilterJsonList));

  }

  if(m_inclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionPatternsJsonList(m_inclusionPatterns.size());
   for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
   {
     inclusionPatternsJsonList[inclusionPatternsIndex].AsString(m_inclusionPatterns[inclusionPatternsIndex]);
   }
   payload.WithArray("InclusionPatterns", std::move(inclusionPatternsJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
   for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
   {
     exclusionPatternsJsonList[exclusionPatternsIndex].AsString(m_exclusionPatterns[exclusionPatternsIndex]);
   }
   payload.WithArray("ExclusionPatterns", std::move(exclusionPatternsJsonList));

  }

  if(m_fieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldMappingsJsonList(m_fieldMappings.size());
   for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
   {
     fieldMappingsJsonList[fieldMappingsIndex].AsObject(m_fieldMappings[fieldMappingsIndex].Jsonize());
   }
   payload.WithArray("FieldMappings", std::move(fieldMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
