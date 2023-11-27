/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/FilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

FilterCriteria::FilterCriteria() : 
    m_severityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

FilterCriteria::FilterCriteria(JsonView jsonValue) : 
    m_severityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

FilterCriteria& FilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetObject("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetObject("EntityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetObject("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_severityHasBeenSet)
  {
   payload.WithObject("Severity", m_severity.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithObject("EntityArn", m_entityArn.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithObject("CreatedTime", m_createdTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
