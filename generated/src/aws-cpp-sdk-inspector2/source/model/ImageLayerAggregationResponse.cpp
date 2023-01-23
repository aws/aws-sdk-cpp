/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ImageLayerAggregationResponse.h>
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

ImageLayerAggregationResponse::ImageLayerAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_layerHashHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

ImageLayerAggregationResponse::ImageLayerAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_layerHashHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageLayerAggregationResponse& ImageLayerAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layerHash"))
  {
    m_layerHash = jsonValue.GetString("layerHash");

    m_layerHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repository"))
  {
    m_repository = jsonValue.GetString("repository");

    m_repositoryHasBeenSet = true;
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

JsonValue ImageLayerAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_layerHashHasBeenSet)
  {
   payload.WithString("layerHash", m_layerHash);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

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
