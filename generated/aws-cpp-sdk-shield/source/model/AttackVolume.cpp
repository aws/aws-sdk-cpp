/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackVolume::AttackVolume() : 
    m_bitsPerSecondHasBeenSet(false),
    m_packetsPerSecondHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false)
{
}

AttackVolume::AttackVolume(JsonView jsonValue) : 
    m_bitsPerSecondHasBeenSet(false),
    m_packetsPerSecondHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false)
{
  *this = jsonValue;
}

AttackVolume& AttackVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BitsPerSecond"))
  {
    m_bitsPerSecond = jsonValue.GetObject("BitsPerSecond");

    m_bitsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PacketsPerSecond"))
  {
    m_packetsPerSecond = jsonValue.GetObject("PacketsPerSecond");

    m_packetsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestsPerSecond"))
  {
    m_requestsPerSecond = jsonValue.GetObject("RequestsPerSecond");

    m_requestsPerSecondHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackVolume::Jsonize() const
{
  JsonValue payload;

  if(m_bitsPerSecondHasBeenSet)
  {
   payload.WithObject("BitsPerSecond", m_bitsPerSecond.Jsonize());

  }

  if(m_packetsPerSecondHasBeenSet)
  {
   payload.WithObject("PacketsPerSecond", m_packetsPerSecond.Jsonize());

  }

  if(m_requestsPerSecondHasBeenSet)
  {
   payload.WithObject("RequestsPerSecond", m_requestsPerSecond.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
