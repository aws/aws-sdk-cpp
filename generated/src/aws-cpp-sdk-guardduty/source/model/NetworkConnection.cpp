/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/NetworkConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

NetworkConnection::NetworkConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkConnection& NetworkConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("direction"))
  {
    m_direction = NetworkDirectionMapper::GetNetworkDirectionForName(jsonValue.GetString("direction"));
    m_directionHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnection::Jsonize() const
{
  JsonValue payload;

  if(m_directionHasBeenSet)
  {
   payload.WithString("direction", NetworkDirectionMapper::GetNameForNetworkDirection(m_direction));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
