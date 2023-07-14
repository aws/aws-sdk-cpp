/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/NetworkResourceUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

NetworkResourceUtilization::NetworkResourceUtilization() : 
    m_networkInBytesPerSecondHasBeenSet(false),
    m_networkOutBytesPerSecondHasBeenSet(false),
    m_networkPacketsInPerSecondHasBeenSet(false),
    m_networkPacketsOutPerSecondHasBeenSet(false)
{
}

NetworkResourceUtilization::NetworkResourceUtilization(JsonView jsonValue) : 
    m_networkInBytesPerSecondHasBeenSet(false),
    m_networkOutBytesPerSecondHasBeenSet(false),
    m_networkPacketsInPerSecondHasBeenSet(false),
    m_networkPacketsOutPerSecondHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkResourceUtilization& NetworkResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkInBytesPerSecond"))
  {
    m_networkInBytesPerSecond = jsonValue.GetString("NetworkInBytesPerSecond");

    m_networkInBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkOutBytesPerSecond"))
  {
    m_networkOutBytesPerSecond = jsonValue.GetString("NetworkOutBytesPerSecond");

    m_networkOutBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkPacketsInPerSecond"))
  {
    m_networkPacketsInPerSecond = jsonValue.GetString("NetworkPacketsInPerSecond");

    m_networkPacketsInPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkPacketsOutPerSecond"))
  {
    m_networkPacketsOutPerSecond = jsonValue.GetString("NetworkPacketsOutPerSecond");

    m_networkPacketsOutPerSecondHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_networkInBytesPerSecondHasBeenSet)
  {
   payload.WithString("NetworkInBytesPerSecond", m_networkInBytesPerSecond);

  }

  if(m_networkOutBytesPerSecondHasBeenSet)
  {
   payload.WithString("NetworkOutBytesPerSecond", m_networkOutBytesPerSecond);

  }

  if(m_networkPacketsInPerSecondHasBeenSet)
  {
   payload.WithString("NetworkPacketsInPerSecond", m_networkPacketsInPerSecond);

  }

  if(m_networkPacketsOutPerSecondHasBeenSet)
  {
   payload.WithString("NetworkPacketsOutPerSecond", m_networkPacketsOutPerSecond);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
