/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration() : 
    m_notificationTopicArnHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue) : 
    m_notificationTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotificationTopicArn"))
  {
    m_notificationTopicArn = jsonValue.GetString("NotificationTopicArn");

    m_notificationTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_notificationTopicArnHasBeenSet)
  {
   payload.WithString("NotificationTopicArn", m_notificationTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
