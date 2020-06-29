/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ClusterListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

ClusterListEntry::ClusterListEntry() : 
    m_clusterIdHasBeenSet(false),
    m_clusterState(ClusterState::NOT_SET),
    m_clusterStateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ClusterListEntry::ClusterListEntry(JsonView jsonValue) : 
    m_clusterIdHasBeenSet(false),
    m_clusterState(ClusterState::NOT_SET),
    m_clusterStateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterListEntry& ClusterListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterState"))
  {
    m_clusterState = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("ClusterState"));

    m_clusterStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_clusterStateHasBeenSet)
  {
   payload.WithString("ClusterState", ClusterStateMapper::GetNameForClusterState(m_clusterState));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
