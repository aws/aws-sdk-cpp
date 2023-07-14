/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DedicatedIp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DedicatedIp::DedicatedIp() : 
    m_ipHasBeenSet(false),
    m_warmupStatus(WarmupStatus::NOT_SET),
    m_warmupStatusHasBeenSet(false),
    m_warmupPercentage(0),
    m_warmupPercentageHasBeenSet(false),
    m_poolNameHasBeenSet(false)
{
}

DedicatedIp::DedicatedIp(JsonView jsonValue) : 
    m_ipHasBeenSet(false),
    m_warmupStatus(WarmupStatus::NOT_SET),
    m_warmupStatusHasBeenSet(false),
    m_warmupPercentage(0),
    m_warmupPercentageHasBeenSet(false),
    m_poolNameHasBeenSet(false)
{
  *this = jsonValue;
}

DedicatedIp& DedicatedIp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");

    m_ipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmupStatus"))
  {
    m_warmupStatus = WarmupStatusMapper::GetWarmupStatusForName(jsonValue.GetString("WarmupStatus"));

    m_warmupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmupPercentage"))
  {
    m_warmupPercentage = jsonValue.GetInteger("WarmupPercentage");

    m_warmupPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolName"))
  {
    m_poolName = jsonValue.GetString("PoolName");

    m_poolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DedicatedIp::Jsonize() const
{
  JsonValue payload;

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  if(m_warmupStatusHasBeenSet)
  {
   payload.WithString("WarmupStatus", WarmupStatusMapper::GetNameForWarmupStatus(m_warmupStatus));
  }

  if(m_warmupPercentageHasBeenSet)
  {
   payload.WithInteger("WarmupPercentage", m_warmupPercentage);

  }

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
