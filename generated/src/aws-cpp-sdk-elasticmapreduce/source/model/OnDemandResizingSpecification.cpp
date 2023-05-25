/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OnDemandResizingSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

OnDemandResizingSpecification::OnDemandResizingSpecification() : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false)
{
}

OnDemandResizingSpecification::OnDemandResizingSpecification(JsonView jsonValue) : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

OnDemandResizingSpecification& OnDemandResizingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutDurationMinutes"))
  {
    m_timeoutDurationMinutes = jsonValue.GetInteger("TimeoutDurationMinutes");

    m_timeoutDurationMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDemandResizingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutDurationMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutDurationMinutes", m_timeoutDurationMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
