/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedAction::UnusedAction() : 
    m_actionHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
}

UnusedAction::UnusedAction(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
  *this = jsonValue;
}

UnusedAction& UnusedAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAccessed"))
  {
    m_lastAccessed = jsonValue.GetString("lastAccessed");

    m_lastAccessedHasBeenSet = true;
  }

  return *this;
}

JsonValue UnusedAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_lastAccessedHasBeenSet)
  {
   payload.WithString("lastAccessed", m_lastAccessed.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
