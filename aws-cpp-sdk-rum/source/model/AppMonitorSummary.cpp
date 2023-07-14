/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/AppMonitorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

AppMonitorSummary::AppMonitorSummary() : 
    m_createdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AppMonitorSummary::AppMonitorSummary(JsonView jsonValue) : 
    m_createdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AppMonitorSummary& AppMonitorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetString("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateEnumMapper::GetStateEnumForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AppMonitorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdHasBeenSet)
  {
   payload.WithString("Created", m_created);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateEnumMapper::GetNameForStateEnum(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
