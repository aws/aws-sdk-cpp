/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
