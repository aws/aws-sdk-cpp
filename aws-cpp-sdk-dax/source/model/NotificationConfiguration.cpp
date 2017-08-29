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

NotificationConfiguration::NotificationConfiguration(const JsonValue& jsonValue) : 
    m_topicArnHasBeenSet(false),
    m_topicStatusHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(const JsonValue& jsonValue)
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
