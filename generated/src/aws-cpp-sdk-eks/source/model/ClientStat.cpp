/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClientStat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ClientStat::ClientStat() : 
    m_userAgentHasBeenSet(false),
    m_numberOfRequestsLast30Days(0),
    m_numberOfRequestsLast30DaysHasBeenSet(false),
    m_lastRequestTimeHasBeenSet(false)
{
}

ClientStat::ClientStat(JsonView jsonValue) : 
    m_userAgentHasBeenSet(false),
    m_numberOfRequestsLast30Days(0),
    m_numberOfRequestsLast30DaysHasBeenSet(false),
    m_lastRequestTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ClientStat& ClientStat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");

    m_userAgentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRequestsLast30Days"))
  {
    m_numberOfRequestsLast30Days = jsonValue.GetInteger("numberOfRequestsLast30Days");

    m_numberOfRequestsLast30DaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRequestTime"))
  {
    m_lastRequestTime = jsonValue.GetDouble("lastRequestTime");

    m_lastRequestTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientStat::Jsonize() const
{
  JsonValue payload;

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  if(m_numberOfRequestsLast30DaysHasBeenSet)
  {
   payload.WithInteger("numberOfRequestsLast30Days", m_numberOfRequestsLast30Days);

  }

  if(m_lastRequestTimeHasBeenSet)
  {
   payload.WithDouble("lastRequestTime", m_lastRequestTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
