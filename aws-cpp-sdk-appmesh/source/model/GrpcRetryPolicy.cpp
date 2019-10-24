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

#include <aws/appmesh/model/GrpcRetryPolicy.h>
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

GrpcRetryPolicy::GrpcRetryPolicy() : 
    m_grpcRetryEventsHasBeenSet(false),
    m_httpRetryEventsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_perRetryTimeoutHasBeenSet(false),
    m_tcpRetryEventsHasBeenSet(false)
{
}

GrpcRetryPolicy::GrpcRetryPolicy(JsonView jsonValue) : 
    m_grpcRetryEventsHasBeenSet(false),
    m_httpRetryEventsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_perRetryTimeoutHasBeenSet(false),
    m_tcpRetryEventsHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRetryPolicy& GrpcRetryPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("grpcRetryEvents"))
  {
    Array<JsonView> grpcRetryEventsJsonList = jsonValue.GetArray("grpcRetryEvents");
    for(unsigned grpcRetryEventsIndex = 0; grpcRetryEventsIndex < grpcRetryEventsJsonList.GetLength(); ++grpcRetryEventsIndex)
    {
      m_grpcRetryEvents.push_back(GrpcRetryPolicyEventMapper::GetGrpcRetryPolicyEventForName(grpcRetryEventsJsonList[grpcRetryEventsIndex].AsString()));
    }
    m_grpcRetryEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpRetryEvents"))
  {
    Array<JsonView> httpRetryEventsJsonList = jsonValue.GetArray("httpRetryEvents");
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
    Array<JsonView> tcpRetryEventsJsonList = jsonValue.GetArray("tcpRetryEvents");
    for(unsigned tcpRetryEventsIndex = 0; tcpRetryEventsIndex < tcpRetryEventsJsonList.GetLength(); ++tcpRetryEventsIndex)
    {
      m_tcpRetryEvents.push_back(TcpRetryPolicyEventMapper::GetTcpRetryPolicyEventForName(tcpRetryEventsJsonList[tcpRetryEventsIndex].AsString()));
    }
    m_tcpRetryEventsHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcRetryPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_grpcRetryEventsHasBeenSet)
  {
   Array<JsonValue> grpcRetryEventsJsonList(m_grpcRetryEvents.size());
   for(unsigned grpcRetryEventsIndex = 0; grpcRetryEventsIndex < grpcRetryEventsJsonList.GetLength(); ++grpcRetryEventsIndex)
   {
     grpcRetryEventsJsonList[grpcRetryEventsIndex].AsString(GrpcRetryPolicyEventMapper::GetNameForGrpcRetryPolicyEvent(m_grpcRetryEvents[grpcRetryEventsIndex]));
   }
   payload.WithArray("grpcRetryEvents", std::move(grpcRetryEventsJsonList));

  }

  if(m_httpRetryEventsHasBeenSet)
  {
   Array<JsonValue> httpRetryEventsJsonList(m_httpRetryEvents.size());
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
   Array<JsonValue> tcpRetryEventsJsonList(m_tcpRetryEvents.size());
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
