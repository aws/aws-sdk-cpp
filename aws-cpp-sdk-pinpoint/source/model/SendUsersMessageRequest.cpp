/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SendUsersMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SendUsersMessageRequest::SendUsersMessageRequest() : 
    m_contextHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

SendUsersMessageRequest::SendUsersMessageRequest(JsonView jsonValue) : 
    m_contextHasBeenSet(false),
    m_messageConfigurationHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_usersHasBeenSet(false)
{
  *this = jsonValue;
}

SendUsersMessageRequest& SendUsersMessageRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfiguration"))
  {
    m_messageConfiguration = jsonValue.GetObject("MessageConfiguration");

    m_messageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateConfiguration"))
  {
    m_templateConfiguration = jsonValue.GetObject("TemplateConfiguration");

    m_templateConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TraceId"))
  {
    m_traceId = jsonValue.GetString("TraceId");

    m_traceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Users"))
  {
    Aws::Map<Aws::String, JsonView> usersJsonMap = jsonValue.GetObject("Users").GetAllObjects();
    for(auto& usersItem : usersJsonMap)
    {
      m_users[usersItem.first] = usersItem.second.AsObject();
    }
    m_usersHasBeenSet = true;
  }

  return *this;
}

JsonValue SendUsersMessageRequest::Jsonize() const
{
  JsonValue payload;

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_messageConfigurationHasBeenSet)
  {
   payload.WithObject("MessageConfiguration", m_messageConfiguration.Jsonize());

  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("TemplateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("TraceId", m_traceId);

  }

  if(m_usersHasBeenSet)
  {
   JsonValue usersJsonMap;
   for(auto& usersItem : m_users)
   {
     usersJsonMap.WithObject(usersItem.first, usersItem.second.Jsonize());
   }
   payload.WithObject("Users", std::move(usersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
