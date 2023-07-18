/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/NotificationsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

NotificationsConfiguration::NotificationsConfiguration() : 
    m_lambdaFunctionArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sqsQueueArnHasBeenSet(false)
{
}

NotificationsConfiguration::NotificationsConfiguration(JsonView jsonValue) : 
    m_lambdaFunctionArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sqsQueueArnHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationsConfiguration& NotificationsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("LambdaFunctionArn");

    m_lambdaFunctionArnHasBeenSet = true;
  }

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

JsonValue NotificationsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("LambdaFunctionArn", m_lambdaFunctionArn);

  }

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
} // namespace ChimeSDKMeetings
} // namespace Aws
