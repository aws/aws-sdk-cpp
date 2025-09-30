/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/NetworkBandwidthGbpsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

NetworkBandwidthGbpsRequest::NetworkBandwidthGbpsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkBandwidthGbpsRequest& NetworkBandwidthGbpsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetDouble("min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetDouble("max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkBandwidthGbpsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithDouble("min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
