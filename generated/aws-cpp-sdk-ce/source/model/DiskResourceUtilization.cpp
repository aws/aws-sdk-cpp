/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/DiskResourceUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

DiskResourceUtilization::DiskResourceUtilization() : 
    m_diskReadOpsPerSecondHasBeenSet(false),
    m_diskWriteOpsPerSecondHasBeenSet(false),
    m_diskReadBytesPerSecondHasBeenSet(false),
    m_diskWriteBytesPerSecondHasBeenSet(false)
{
}

DiskResourceUtilization::DiskResourceUtilization(JsonView jsonValue) : 
    m_diskReadOpsPerSecondHasBeenSet(false),
    m_diskWriteOpsPerSecondHasBeenSet(false),
    m_diskReadBytesPerSecondHasBeenSet(false),
    m_diskWriteBytesPerSecondHasBeenSet(false)
{
  *this = jsonValue;
}

DiskResourceUtilization& DiskResourceUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DiskReadOpsPerSecond"))
  {
    m_diskReadOpsPerSecond = jsonValue.GetString("DiskReadOpsPerSecond");

    m_diskReadOpsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskWriteOpsPerSecond"))
  {
    m_diskWriteOpsPerSecond = jsonValue.GetString("DiskWriteOpsPerSecond");

    m_diskWriteOpsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskReadBytesPerSecond"))
  {
    m_diskReadBytesPerSecond = jsonValue.GetString("DiskReadBytesPerSecond");

    m_diskReadBytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskWriteBytesPerSecond"))
  {
    m_diskWriteBytesPerSecond = jsonValue.GetString("DiskWriteBytesPerSecond");

    m_diskWriteBytesPerSecondHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskResourceUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_diskReadOpsPerSecondHasBeenSet)
  {
   payload.WithString("DiskReadOpsPerSecond", m_diskReadOpsPerSecond);

  }

  if(m_diskWriteOpsPerSecondHasBeenSet)
  {
   payload.WithString("DiskWriteOpsPerSecond", m_diskWriteOpsPerSecond);

  }

  if(m_diskReadBytesPerSecondHasBeenSet)
  {
   payload.WithString("DiskReadBytesPerSecond", m_diskReadBytesPerSecond);

  }

  if(m_diskWriteBytesPerSecondHasBeenSet)
  {
   payload.WithString("DiskWriteBytesPerSecond", m_diskWriteBytesPerSecond);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
