/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/TitleAggregationResponse.h>
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

TitleAggregationResponse::TitleAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_vulnerabilityIdHasBeenSet(false)
{
}

TitleAggregationResponse::TitleAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_vulnerabilityIdHasBeenSet(false)
{
  *this = jsonValue;
}

TitleAggregationResponse& TitleAggregationResponse::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilityId"))
  {
    m_vulnerabilityId = jsonValue.GetString("vulnerabilityId");

    m_vulnerabilityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TitleAggregationResponse::Jsonize() const
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

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_vulnerabilityIdHasBeenSet)
  {
   payload.WithString("vulnerabilityId", m_vulnerabilityId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
