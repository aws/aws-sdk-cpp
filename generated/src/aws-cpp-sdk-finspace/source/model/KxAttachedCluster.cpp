/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxAttachedCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxAttachedCluster::KxAttachedCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

KxAttachedCluster& KxAttachedCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = KxClusterTypeMapper::GetKxClusterTypeForName(jsonValue.GetString("clusterType"));
    m_clusterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterStatus"))
  {
    m_clusterStatus = KxClusterStatusMapper::GetKxClusterStatusForName(jsonValue.GetString("clusterStatus"));
    m_clusterStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue KxAttachedCluster::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", KxClusterTypeMapper::GetNameForKxClusterType(m_clusterType));
  }

  if(m_clusterStatusHasBeenSet)
  {
   payload.WithString("clusterStatus", KxClusterStatusMapper::GetNameForKxClusterStatus(m_clusterStatus));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
