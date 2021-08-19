/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ShardDetail.h>
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

ShardDetail::ShardDetail() : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false)
{
}

ShardDetail::ShardDetail(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_snapshotCreationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ShardDetail& ShardDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetString("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCreationTime"))
  {
    m_snapshotCreationTime = jsonValue.GetDouble("SnapshotCreationTime");

    m_snapshotCreationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ShardDetail::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithString("Size", m_size);

  }

  if(m_snapshotCreationTimeHasBeenSet)
  {
   payload.WithDouble("SnapshotCreationTime", m_snapshotCreationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
