/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

Cluster::Cluster() : 
    m_clusterArnHasBeenSet(false),
    m_clusterEndpointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_clusterEndpointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterEndpoints"))
  {
    Aws::Utils::Array<JsonView> clusterEndpointsJsonList = jsonValue.GetArray("ClusterEndpoints");
    for(unsigned clusterEndpointsIndex = 0; clusterEndpointsIndex < clusterEndpointsJsonList.GetLength(); ++clusterEndpointsIndex)
    {
      m_clusterEndpoints.push_back(clusterEndpointsJsonList[clusterEndpointsIndex].AsObject());
    }
    m_clusterEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_clusterEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterEndpointsJsonList(m_clusterEndpoints.size());
   for(unsigned clusterEndpointsIndex = 0; clusterEndpointsIndex < clusterEndpointsJsonList.GetLength(); ++clusterEndpointsIndex)
   {
     clusterEndpointsJsonList[clusterEndpointsIndex].AsObject(m_clusterEndpoints[clusterEndpointsIndex].Jsonize());
   }
   payload.WithArray("ClusterEndpoints", std::move(clusterEndpointsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
