/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaLayerAggregationResponse.h>
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

LambdaLayerAggregationResponse::LambdaLayerAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_layerArnHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

LambdaLayerAggregationResponse::LambdaLayerAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_layerArnHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaLayerAggregationResponse& LambdaLayerAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layerArn"))
  {
    m_layerArn = jsonValue.GetString("layerArn");

    m_layerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaLayerAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_layerArnHasBeenSet)
  {
   payload.WithString("layerArn", m_layerArn);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

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
