/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensUpgradeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

LensUpgradeSummary::LensUpgradeSummary() : 
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_currentLensVersionHasBeenSet(false),
    m_latestLensVersionHasBeenSet(false)
{
}

LensUpgradeSummary::LensUpgradeSummary(JsonView jsonValue) : 
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_currentLensVersionHasBeenSet(false),
    m_latestLensVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LensUpgradeSummary& LensUpgradeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentLensVersion"))
  {
    m_currentLensVersion = jsonValue.GetString("CurrentLensVersion");

    m_currentLensVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestLensVersion"))
  {
    m_latestLensVersion = jsonValue.GetString("LatestLensVersion");

    m_latestLensVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LensUpgradeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_currentLensVersionHasBeenSet)
  {
   payload.WithString("CurrentLensVersion", m_currentLensVersion);

  }

  if(m_latestLensVersionHasBeenSet)
  {
   payload.WithString("LatestLensVersion", m_latestLensVersion);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
