/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AccountAggregationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AccountAggregationResponse::AccountAggregationResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountAggregationResponse& AccountAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exploitAvailableCount"))
  {
    m_exploitAvailableCount = jsonValue.GetInt64("exploitAvailableCount");
    m_exploitAvailableCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixAvailableCount"))
  {
    m_fixAvailableCount = jsonValue.GetInt64("fixAvailableCount");
    m_fixAvailableCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  if(m_exploitAvailableCountHasBeenSet)
  {
   payload.WithInt64("exploitAvailableCount", m_exploitAvailableCount);

  }

  if(m_fixAvailableCountHasBeenSet)
  {
   payload.WithInt64("fixAvailableCount", m_fixAvailableCount);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
