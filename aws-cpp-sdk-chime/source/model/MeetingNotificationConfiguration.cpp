/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/chime/model/MeetingNotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

MeetingNotificationConfiguration::MeetingNotificationConfiguration() : 
    m_snsTopicArnHasBeenSet(false),
    m_sqsQueueArnHasBeenSet(false)
{
}

MeetingNotificationConfiguration::MeetingNotificationConfiguration(JsonView jsonValue) : 
    m_snsTopicArnHasBeenSet(false),
    m_sqsQueueArnHasBeenSet(false)
{
  *this = jsonValue;
}

MeetingNotificationConfiguration& MeetingNotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsQueueArn"))
  {
    m_sqsQueueArn = jsonValue.GetString("SqsQueueArn");

    m_sqsQueueArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MeetingNotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_sqsQueueArnHasBeenSet)
  {
   payload.WithString("SqsQueueArn", m_sqsQueueArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
