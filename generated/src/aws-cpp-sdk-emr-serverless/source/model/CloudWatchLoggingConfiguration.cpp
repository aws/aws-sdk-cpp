/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/CloudWatchLoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

CloudWatchLoggingConfiguration::CloudWatchLoggingConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_logTypesHasBeenSet(false)
{
}

CloudWatchLoggingConfiguration::CloudWatchLoggingConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_logTypesHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLoggingConfiguration& CloudWatchLoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamNamePrefix"))
  {
    m_logStreamNamePrefix = jsonValue.GetString("logStreamNamePrefix");

    m_logStreamNamePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logTypes"))
  {
    Aws::Map<Aws::String, JsonView> logTypesJsonMap = jsonValue.GetObject("logTypes").GetAllObjects();
    for(auto& logTypesItem : logTypesJsonMap)
    {
      Aws::Utils::Array<JsonView> logTypeListJsonList = logTypesItem.second.AsArray();
      Aws::Vector<Aws::String> logTypeListList;
      logTypeListList.reserve((size_t)logTypeListJsonList.GetLength());
      for(unsigned logTypeListIndex = 0; logTypeListIndex < logTypeListJsonList.GetLength(); ++logTypeListIndex)
      {
        logTypeListList.push_back(logTypeListJsonList[logTypeListIndex].AsString());
      }
      m_logTypes[logTypesItem.first] = std::move(logTypeListList);
    }
    m_logTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logStreamNamePrefixHasBeenSet)
  {
   payload.WithString("logStreamNamePrefix", m_logStreamNamePrefix);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_logTypesHasBeenSet)
  {
   JsonValue logTypesJsonMap;
   for(auto& logTypesItem : m_logTypes)
   {
     Aws::Utils::Array<JsonValue> logTypeListJsonList(logTypesItem.second.size());
     for(unsigned logTypeListIndex = 0; logTypeListIndex < logTypeListJsonList.GetLength(); ++logTypeListIndex)
     {
       logTypeListJsonList[logTypeListIndex].AsString(logTypesItem.second[logTypeListIndex]);
     }
     logTypesJsonMap.WithArray(logTypesItem.first, std::move(logTypeListJsonList));
   }
   payload.WithObject("logTypes", std::move(logTypesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
