/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ClusterSnapshotInList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

ClusterSnapshotInList::ClusterSnapshotInList() : 
    m_clusterArnHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ClusterSnapshotInList::ClusterSnapshotInList(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterSnapshotInList& ClusterSnapshotInList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotArn"))
  {
    m_snapshotArn = jsonValue.GetString("snapshotArn");

    m_snapshotArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCreationTime"))
  {
    m_snapshotCreationTime = jsonValue.GetString("snapshotCreationTime");

    m_snapshotCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotName"))
  {
    m_snapshotName = jsonValue.GetString("snapshotName");

    m_snapshotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterSnapshotInList::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_snapshotCreationTimeHasBeenSet)
  {
   payload.WithString("snapshotCreationTime", m_snapshotCreationTime);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
