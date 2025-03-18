/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/LimitSummary.h>
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

LimitSummary::LimitSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LimitSummary& LimitSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amountRequirementName"))
  {
    m_amountRequirementName = jsonValue.GetString("amountRequirementName");
    m_amountRequirementNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxCount"))
  {
    m_maxCount = jsonValue.GetInteger("maxCount");
    m_maxCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("limitId"))
  {
    m_limitId = jsonValue.GetString("limitId");
    m_limitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentCount"))
  {
    m_currentCount = jsonValue.GetInteger("currentCount");
    m_currentCountHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitSummary::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_amountRequirementNameHasBeenSet)
  {
   payload.WithString("amountRequirementName", m_amountRequirementName);

  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithInteger("maxCount", m_maxCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_farmIdHasBeenSet)
  {
   payload.WithString("farmId", m_farmId);

  }

  if(m_limitIdHasBeenSet)
  {
   payload.WithString("limitId", m_limitId);

  }

  if(m_currentCountHasBeenSet)
  {
   payload.WithInteger("currentCount", m_currentCount);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
