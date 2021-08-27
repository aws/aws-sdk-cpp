/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingStatisticSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingStatisticSummary::SamplingStatisticSummary() : 
    m_ruleNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_borrowCount(0),
    m_borrowCountHasBeenSet(false),
    m_sampledCount(0),
    m_sampledCountHasBeenSet(false)
{
}

SamplingStatisticSummary::SamplingStatisticSummary(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_requestCount(0),
    m_requestCountHasBeenSet(false),
    m_borrowCount(0),
    m_borrowCountHasBeenSet(false),
    m_sampledCount(0),
    m_sampledCountHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingStatisticSummary& SamplingStatisticSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestCount"))
  {
    m_requestCount = jsonValue.GetInteger("RequestCount");

    m_requestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorrowCount"))
  {
    m_borrowCount = jsonValue.GetInteger("BorrowCount");

    m_borrowCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampledCount"))
  {
    m_sampledCount = jsonValue.GetInteger("SampledCount");

    m_sampledCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingStatisticSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_requestCountHasBeenSet)
  {
   payload.WithInteger("RequestCount", m_requestCount);

  }

  if(m_borrowCountHasBeenSet)
  {
   payload.WithInteger("BorrowCount", m_borrowCount);

  }

  if(m_sampledCountHasBeenSet)
  {
   payload.WithInteger("SampledCount", m_sampledCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
