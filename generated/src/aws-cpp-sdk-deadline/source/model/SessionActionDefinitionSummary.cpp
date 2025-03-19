/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionActionDefinitionSummary.h>
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

SessionActionDefinitionSummary::SessionActionDefinitionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionActionDefinitionSummary& SessionActionDefinitionSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("taskRun"))
  {
    m_taskRun = jsonValue.GetObject("taskRun");
    m_taskRunHasBeenSet = true;
  }
  if(jsonValue.ValueExists("syncInputJobAttachments"))
  {
    m_syncInputJobAttachments = jsonValue.GetObject("syncInputJobAttachments");
    m_syncInputJobAttachmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionActionDefinitionSummary::Jsonize() const
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

  if(m_taskRunHasBeenSet)
  {
   payload.WithObject("taskRun", m_taskRun.Jsonize());

  }

  if(m_syncInputJobAttachmentsHasBeenSet)
  {
   payload.WithObject("syncInputJobAttachments", m_syncInputJobAttachments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
