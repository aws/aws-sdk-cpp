/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Snapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Snapshot::Snapshot() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_clusterConfigurationHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
}

Snapshot::Snapshot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_clusterConfigurationHasBeenSet(false),
    m_dataTiering(DataTieringStatus::NOT_SET),
    m_dataTieringHasBeenSet(false)
{
  *this = jsonValue;
}

Snapshot& Snapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterConfiguration"))
  {
    m_clusterConfiguration = jsonValue.GetObject("ClusterConfiguration");

    m_clusterConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTiering"))
  {
    m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(jsonValue.GetString("DataTiering"));

    m_dataTieringHasBeenSet = true;
  }

  return *this;
}

JsonValue Snapshot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_clusterConfigurationHasBeenSet)
  {
   payload.WithObject("ClusterConfiguration", m_clusterConfiguration.Jsonize());

  }

  if(m_dataTieringHasBeenSet)
  {
   payload.WithString("DataTiering", DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering));
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
