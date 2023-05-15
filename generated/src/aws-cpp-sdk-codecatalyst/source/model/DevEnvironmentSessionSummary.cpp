/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentSessionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

DevEnvironmentSessionSummary::DevEnvironmentSessionSummary() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_devEnvironmentIdHasBeenSet(false),
    m_startedTimeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

DevEnvironmentSessionSummary::DevEnvironmentSessionSummary(JsonView jsonValue) : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_devEnvironmentIdHasBeenSet(false),
    m_startedTimeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

DevEnvironmentSessionSummary& DevEnvironmentSessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spaceName"))
  {
    m_spaceName = jsonValue.GetString("spaceName");

    m_spaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devEnvironmentId"))
  {
    m_devEnvironmentId = jsonValue.GetString("devEnvironmentId");

    m_devEnvironmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedTime"))
  {
    m_startedTime = jsonValue.GetString("startedTime");

    m_startedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEnvironmentSessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("spaceName", m_spaceName);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_devEnvironmentIdHasBeenSet)
  {
   payload.WithString("devEnvironmentId", m_devEnvironmentId);

  }

  if(m_startedTimeHasBeenSet)
  {
   payload.WithString("startedTime", m_startedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
