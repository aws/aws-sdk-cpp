/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssignedSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AssignedSession::AssignedSession(JsonView jsonValue)
{
  *this = jsonValue;
}

AssignedSession& AssignedSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionActions"))
  {
    Aws::Utils::Array<JsonView> sessionActionsJsonList = jsonValue.GetArray("sessionActions");
    for(unsigned sessionActionsIndex = 0; sessionActionsIndex < sessionActionsJsonList.GetLength(); ++sessionActionsIndex)
    {
      m_sessionActions.push_back(sessionActionsJsonList[sessionActionsIndex].AsObject());
    }
    m_sessionActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AssignedSession::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_sessionActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sessionActionsJsonList(m_sessionActions.size());
   for(unsigned sessionActionsIndex = 0; sessionActionsIndex < sessionActionsJsonList.GetLength(); ++sessionActionsIndex)
   {
     sessionActionsJsonList[sessionActionsIndex].AsObject(m_sessionActions[sessionActionsIndex].Jsonize());
   }
   payload.WithArray("sessionActions", std::move(sessionActionsJsonList));

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
