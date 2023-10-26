/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/TopicReplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

TopicReplication::TopicReplication() : 
    m_copyAccessControlListsForTopics(false),
    m_copyAccessControlListsForTopicsHasBeenSet(false),
    m_copyTopicConfigurations(false),
    m_copyTopicConfigurationsHasBeenSet(false),
    m_detectAndCopyNewTopics(false),
    m_detectAndCopyNewTopicsHasBeenSet(false),
    m_topicsToExcludeHasBeenSet(false),
    m_topicsToReplicateHasBeenSet(false)
{
}

TopicReplication::TopicReplication(JsonView jsonValue) : 
    m_copyAccessControlListsForTopics(false),
    m_copyAccessControlListsForTopicsHasBeenSet(false),
    m_copyTopicConfigurations(false),
    m_copyTopicConfigurationsHasBeenSet(false),
    m_detectAndCopyNewTopics(false),
    m_detectAndCopyNewTopicsHasBeenSet(false),
    m_topicsToExcludeHasBeenSet(false),
    m_topicsToReplicateHasBeenSet(false)
{
  *this = jsonValue;
}

TopicReplication& TopicReplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copyAccessControlListsForTopics"))
  {
    m_copyAccessControlListsForTopics = jsonValue.GetBool("copyAccessControlListsForTopics");

    m_copyAccessControlListsForTopicsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("copyTopicConfigurations"))
  {
    m_copyTopicConfigurations = jsonValue.GetBool("copyTopicConfigurations");

    m_copyTopicConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectAndCopyNewTopics"))
  {
    m_detectAndCopyNewTopics = jsonValue.GetBool("detectAndCopyNewTopics");

    m_detectAndCopyNewTopicsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicsToExclude"))
  {
    Aws::Utils::Array<JsonView> topicsToExcludeJsonList = jsonValue.GetArray("topicsToExclude");
    for(unsigned topicsToExcludeIndex = 0; topicsToExcludeIndex < topicsToExcludeJsonList.GetLength(); ++topicsToExcludeIndex)
    {
      m_topicsToExclude.push_back(topicsToExcludeJsonList[topicsToExcludeIndex].AsString());
    }
    m_topicsToExcludeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicsToReplicate"))
  {
    Aws::Utils::Array<JsonView> topicsToReplicateJsonList = jsonValue.GetArray("topicsToReplicate");
    for(unsigned topicsToReplicateIndex = 0; topicsToReplicateIndex < topicsToReplicateJsonList.GetLength(); ++topicsToReplicateIndex)
    {
      m_topicsToReplicate.push_back(topicsToReplicateJsonList[topicsToReplicateIndex].AsString());
    }
    m_topicsToReplicateHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicReplication::Jsonize() const
{
  JsonValue payload;

  if(m_copyAccessControlListsForTopicsHasBeenSet)
  {
   payload.WithBool("copyAccessControlListsForTopics", m_copyAccessControlListsForTopics);

  }

  if(m_copyTopicConfigurationsHasBeenSet)
  {
   payload.WithBool("copyTopicConfigurations", m_copyTopicConfigurations);

  }

  if(m_detectAndCopyNewTopicsHasBeenSet)
  {
   payload.WithBool("detectAndCopyNewTopics", m_detectAndCopyNewTopics);

  }

  if(m_topicsToExcludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicsToExcludeJsonList(m_topicsToExclude.size());
   for(unsigned topicsToExcludeIndex = 0; topicsToExcludeIndex < topicsToExcludeJsonList.GetLength(); ++topicsToExcludeIndex)
   {
     topicsToExcludeJsonList[topicsToExcludeIndex].AsString(m_topicsToExclude[topicsToExcludeIndex]);
   }
   payload.WithArray("topicsToExclude", std::move(topicsToExcludeJsonList));

  }

  if(m_topicsToReplicateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicsToReplicateJsonList(m_topicsToReplicate.size());
   for(unsigned topicsToReplicateIndex = 0; topicsToReplicateIndex < topicsToReplicateJsonList.GetLength(); ++topicsToReplicateIndex)
   {
     topicsToReplicateJsonList[topicsToReplicateIndex].AsString(m_topicsToReplicate[topicsToReplicateIndex]);
   }
   payload.WithArray("topicsToReplicate", std::move(topicsToReplicateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
