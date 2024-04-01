/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssignedSessionActionDefinition.h>
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

AssignedSessionActionDefinition::AssignedSessionActionDefinition() : 
    m_envEnterHasBeenSet(false),
    m_envExitHasBeenSet(false),
    m_syncInputJobAttachmentsHasBeenSet(false),
    m_taskRunHasBeenSet(false)
{
}

AssignedSessionActionDefinition::AssignedSessionActionDefinition(JsonView jsonValue) : 
    m_envEnterHasBeenSet(false),
    m_envExitHasBeenSet(false),
    m_syncInputJobAttachmentsHasBeenSet(false),
    m_taskRunHasBeenSet(false)
{
  *this = jsonValue;
}

AssignedSessionActionDefinition& AssignedSessionActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("envEnter"))
  {
    m_envEnter = jsonValue.GetObject("envEnter");

    m_envEnterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("envExit"))
  {
    m_envExit = jsonValue.GetObject("envExit");

    m_envExitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncInputJobAttachments"))
  {
    m_syncInputJobAttachments = jsonValue.GetObject("syncInputJobAttachments");

    m_syncInputJobAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskRun"))
  {
    m_taskRun = jsonValue.GetObject("taskRun");

    m_taskRunHasBeenSet = true;
  }

  return *this;
}

JsonValue AssignedSessionActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_envEnterHasBeenSet)
  {
   payload.WithObject("envEnter", m_envEnter.Jsonize());

  }

  if(m_envExitHasBeenSet)
  {
   payload.WithObject("envExit", m_envExit.Jsonize());

  }

  if(m_syncInputJobAttachmentsHasBeenSet)
  {
   payload.WithObject("syncInputJobAttachments", m_syncInputJobAttachments.Jsonize());

  }

  if(m_taskRunHasBeenSet)
  {
   payload.WithObject("taskRun", m_taskRun.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
