/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ClusterSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ClusterSummary::ClusterSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
}

ClusterSummary::ClusterSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterSummary& ClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NormalizedInstanceHours"))
  {
    m_normalizedInstanceHours = jsonValue.GetInteger("NormalizedInstanceHours");

    m_normalizedInstanceHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostArn"))
  {
    m_outpostArn = jsonValue.GetString("OutpostArn");

    m_outpostArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_normalizedInstanceHoursHasBeenSet)
  {
   payload.WithInteger("NormalizedInstanceHours", m_normalizedInstanceHours);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
