/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/NotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration() : 
    m_topicArnHasBeenSet(false),
    m_topicStatusHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue) : 
    m_topicArnHasBeenSet(false),
    m_topicStatusHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

    m_topicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicStatus"))
  {
    m_topicStatus = jsonValue.GetString("TopicStatus");

    m_topicStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  if(m_topicStatusHasBeenSet)
  {
   payload.WithString("TopicStatus", m_topicStatus);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
