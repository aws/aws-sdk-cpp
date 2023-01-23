/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpRetryPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

HttpRetryPolicy::HttpRetryPolicy() : 
    m_httpRetryEventsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_perRetryTimeoutHasBeenSet(false),
    m_tcpRetryEventsHasBeenSet(false)
{
}

HttpRetryPolicy::HttpRetryPolicy(JsonView jsonValue) : 
    m_httpRetryEventsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_perRetryTimeoutHasBeenSet(false),
    m_tcpRetryEventsHasBeenSet(false)
{
  *this = jsonValue;
}

HttpRetryPolicy& HttpRetryPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpRetryEvents"))
  {
    Aws::Utils::Array<JsonView> httpRetryEventsJsonList = jsonValue.GetArray("httpRetryEvents");
    for(unsigned httpRetryEventsIndex = 0; httpRetryEventsIndex < httpRetryEventsJsonList.GetLength(); ++httpRetryEventsIndex)
    {
      m_httpRetryEvents.push_back(httpRetryEventsJsonList[httpRetryEventsIndex].AsString());
    }
    m_httpRetryEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxRetries"))
  {
    m_maxRetries = jsonValue.GetInt64("maxRetries");

    m_maxRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("perRetryTimeout"))
  {
    m_perRetryTimeout = jsonValue.GetObject("perRetryTimeout");

    m_perRetryTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tcpRetryEvents"))
  {
    Aws::Utils::Array<JsonView> tcpRetryEventsJsonList = jsonValue.GetArray("tcpRetryEvents");
    for(unsigned tcpRetryEventsIndex = 0; tcpRetryEventsIndex < tcpRetryEventsJsonList.GetLength(); ++tcpRetryEventsIndex)
    {
      m_tcpRetryEvents.push_back(TcpRetryPolicyEventMapper::GetTcpRetryPolicyEventForName(tcpRetryEventsJsonList[tcpRetryEventsIndex].AsString()));
    }
    m_tcpRetryEventsHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpRetryPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_httpRetryEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> httpRetryEventsJsonList(m_httpRetryEvents.size());
   for(unsigned httpRetryEventsIndex = 0; httpRetryEventsIndex < httpRetryEventsJsonList.GetLength(); ++httpRetryEventsIndex)
   {
     httpRetryEventsJsonList[httpRetryEventsIndex].AsString(m_httpRetryEvents[httpRetryEventsIndex]);
   }
   payload.WithArray("httpRetryEvents", std::move(httpRetryEventsJsonList));

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInt64("maxRetries", m_maxRetries);

  }

  if(m_perRetryTimeoutHasBeenSet)
  {
   payload.WithObject("perRetryTimeout", m_perRetryTimeout.Jsonize());

  }

  if(m_tcpRetryEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tcpRetryEventsJsonList(m_tcpRetryEvents.size());
   for(unsigned tcpRetryEventsIndex = 0; tcpRetryEventsIndex < tcpRetryEventsJsonList.GetLength(); ++tcpRetryEventsIndex)
   {
     tcpRetryEventsJsonList[tcpRetryEventsIndex].AsString(TcpRetryPolicyEventMapper::GetNameForTcpRetryPolicyEvent(m_tcpRetryEvents[tcpRetryEventsIndex]));
   }
   payload.WithArray("tcpRetryEvents", std::move(tcpRetryEventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
