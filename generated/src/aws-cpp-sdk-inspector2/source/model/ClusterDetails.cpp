/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ClusterDetails.h>
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

ClusterDetails::ClusterDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterDetails& ClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastInUse"))
  {
    m_lastInUse = jsonValue.GetDouble("lastInUse");
    m_lastInUseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runningUnitCount"))
  {
    m_runningUnitCount = jsonValue.GetInt64("runningUnitCount");
    m_runningUnitCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stoppedUnitCount"))
  {
    m_stoppedUnitCount = jsonValue.GetInt64("stoppedUnitCount");
    m_stoppedUnitCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterMetadata"))
  {
    m_clusterMetadata = jsonValue.GetObject("clusterMetadata");
    m_clusterMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lastInUseHasBeenSet)
  {
   payload.WithDouble("lastInUse", m_lastInUse.SecondsWithMSPrecision());
  }

  if(m_runningUnitCountHasBeenSet)
  {
   payload.WithInt64("runningUnitCount", m_runningUnitCount);

  }

  if(m_stoppedUnitCountHasBeenSet)
  {
   payload.WithInt64("stoppedUnitCount", m_stoppedUnitCount);

  }

  if(m_clusterMetadataHasBeenSet)
  {
   payload.WithObject("clusterMetadata", m_clusterMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
