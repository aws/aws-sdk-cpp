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

#include <aws/opsworkscm/model/ServerEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

ServerEvent::ServerEvent() : 
    m_createdAtHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logUrlHasBeenSet(false)
{
}

ServerEvent::ServerEvent(const JsonValue& jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ServerEvent& ServerEvent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUrl"))
  {
    m_logUrl = jsonValue.GetString("LogUrl");

    m_logUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerEvent::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_logUrlHasBeenSet)
  {
   payload.WithString("LogUrl", m_logUrl);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws