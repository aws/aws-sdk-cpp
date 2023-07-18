/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AmiAggregationResponse.h>
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

AmiAggregationResponse::AmiAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_affectedInstances(0),
    m_affectedInstancesHasBeenSet(false),
    m_amiHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

AmiAggregationResponse::AmiAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_affectedInstances(0),
    m_affectedInstancesHasBeenSet(false),
    m_amiHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

AmiAggregationResponse& AmiAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("affectedInstances"))
  {
    m_affectedInstances = jsonValue.GetInt64("affectedInstances");

    m_affectedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ami"))
  {
    m_ami = jsonValue.GetString("ami");

    m_amiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue AmiAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_affectedInstancesHasBeenSet)
  {
   payload.WithInt64("affectedInstances", m_affectedInstances);

  }

  if(m_amiHasBeenSet)
  {
   payload.WithString("ami", m_ami);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
