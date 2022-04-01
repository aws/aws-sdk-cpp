/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/InstanceCountLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

InstanceCountLimits::InstanceCountLimits() : 
    m_minimumInstanceCount(0),
    m_minimumInstanceCountHasBeenSet(false),
    m_maximumInstanceCount(0),
    m_maximumInstanceCountHasBeenSet(false)
{
}

InstanceCountLimits::InstanceCountLimits(JsonView jsonValue) : 
    m_minimumInstanceCount(0),
    m_minimumInstanceCountHasBeenSet(false),
    m_maximumInstanceCount(0),
    m_maximumInstanceCountHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceCountLimits& InstanceCountLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumInstanceCount"))
  {
    m_minimumInstanceCount = jsonValue.GetInteger("MinimumInstanceCount");

    m_minimumInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumInstanceCount"))
  {
    m_maximumInstanceCount = jsonValue.GetInteger("MaximumInstanceCount");

    m_maximumInstanceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceCountLimits::Jsonize() const
{
  JsonValue payload;

  if(m_minimumInstanceCountHasBeenSet)
  {
   payload.WithInteger("MinimumInstanceCount", m_minimumInstanceCount);

  }

  if(m_maximumInstanceCountHasBeenSet)
  {
   payload.WithInteger("MaximumInstanceCount", m_maximumInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
