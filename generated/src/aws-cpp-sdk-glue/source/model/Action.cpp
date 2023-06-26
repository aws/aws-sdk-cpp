/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Action::Action() : 
    m_jobNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_notificationPropertyHasBeenSet(false),
    m_crawlerNameHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_notificationPropertyHasBeenSet(false),
    m_crawlerNameHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arguments"))
  {
    Aws::Map<Aws::String, JsonView> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for(auto& argumentsItem : argumentsJsonMap)
    {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
    m_argumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationProperty"))
  {
    m_notificationProperty = jsonValue.GetObject("NotificationProperty");

    m_notificationPropertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlerName"))
  {
    m_crawlerName = jsonValue.GetString("CrawlerName");

    m_crawlerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_notificationPropertyHasBeenSet)
  {
   payload.WithObject("NotificationProperty", m_notificationProperty.Jsonize());

  }

  if(m_crawlerNameHasBeenSet)
  {
   payload.WithString("CrawlerName", m_crawlerName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
