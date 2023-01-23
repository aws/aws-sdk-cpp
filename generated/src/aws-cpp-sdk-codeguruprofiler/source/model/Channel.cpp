/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

Channel::Channel() : 
    m_eventPublishersHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_eventPublishersHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uriHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventPublishers"))
  {
    Aws::Utils::Array<JsonView> eventPublishersJsonList = jsonValue.GetArray("eventPublishers");
    for(unsigned eventPublishersIndex = 0; eventPublishersIndex < eventPublishersJsonList.GetLength(); ++eventPublishersIndex)
    {
      m_eventPublishers.push_back(EventPublisherMapper::GetEventPublisherForName(eventPublishersJsonList[eventPublishersIndex].AsString()));
    }
    m_eventPublishersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_eventPublishersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventPublishersJsonList(m_eventPublishers.size());
   for(unsigned eventPublishersIndex = 0; eventPublishersIndex < eventPublishersJsonList.GetLength(); ++eventPublishersIndex)
   {
     eventPublishersJsonList[eventPublishersIndex].AsString(EventPublisherMapper::GetNameForEventPublisher(m_eventPublishers[eventPublishersIndex]));
   }
   payload.WithArray("eventPublishers", std::move(eventPublishersJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
