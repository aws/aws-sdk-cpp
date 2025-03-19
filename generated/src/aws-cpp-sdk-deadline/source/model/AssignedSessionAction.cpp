/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssignedSessionAction.h>
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

AssignedSessionAction::AssignedSessionAction(JsonView jsonValue)
{
  *this = jsonValue;
}

AssignedSessionAction& AssignedSessionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionActionId"))
  {
    m_sessionActionId = jsonValue.GetString("sessionActionId");
    m_sessionActionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
  }
  return *this;
}

JsonValue AssignedSessionAction::Jsonize() const
{
  JsonValue payload;

  if(m_sessionActionIdHasBeenSet)
  {
   payload.WithString("sessionActionId", m_sessionActionId);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
