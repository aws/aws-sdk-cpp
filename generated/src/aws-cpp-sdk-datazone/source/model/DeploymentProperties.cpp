/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeploymentProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DeploymentProperties::DeploymentProperties() : 
    m_endTimeoutMinutes(0),
    m_endTimeoutMinutesHasBeenSet(false),
    m_startTimeoutMinutes(0),
    m_startTimeoutMinutesHasBeenSet(false)
{
}

DeploymentProperties::DeploymentProperties(JsonView jsonValue) : 
    m_endTimeoutMinutes(0),
    m_endTimeoutMinutesHasBeenSet(false),
    m_startTimeoutMinutes(0),
    m_startTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentProperties& DeploymentProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTimeoutMinutes"))
  {
    m_endTimeoutMinutes = jsonValue.GetInteger("endTimeoutMinutes");

    m_endTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeoutMinutes"))
  {
    m_startTimeoutMinutes = jsonValue.GetInteger("startTimeoutMinutes");

    m_startTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentProperties::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("endTimeoutMinutes", m_endTimeoutMinutes);

  }

  if(m_startTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("startTimeoutMinutes", m_startTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
