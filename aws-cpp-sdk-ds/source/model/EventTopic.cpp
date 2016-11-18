/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ds/model/EventTopic.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

EventTopic::EventTopic() : 
    m_directoryIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_status(TopicStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EventTopic::EventTopic(const JsonValue& jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_status(TopicStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EventTopic& EventTopic::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

    m_topicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDateTime"))
  {
    m_createdDateTime = jsonValue.GetDouble("CreatedDateTime");

    m_createdDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TopicStatusMapper::GetTopicStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTopic::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  if(m_createdDateTimeHasBeenSet)
  {
   payload.WithDouble("CreatedDateTime", m_createdDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TopicStatusMapper::GetNameForTopicStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws