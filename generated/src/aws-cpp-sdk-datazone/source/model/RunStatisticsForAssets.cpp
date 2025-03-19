/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RunStatisticsForAssets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RunStatisticsForAssets::RunStatisticsForAssets(JsonView jsonValue)
{
  *this = jsonValue;
}

RunStatisticsForAssets& RunStatisticsForAssets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("added"))
  {
    m_added = jsonValue.GetInteger("added");
    m_addedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("skipped"))
  {
    m_skipped = jsonValue.GetInteger("skipped");
    m_skippedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unchanged"))
  {
    m_unchanged = jsonValue.GetInteger("unchanged");
    m_unchangedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updated"))
  {
    m_updated = jsonValue.GetInteger("updated");
    m_updatedHasBeenSet = true;
  }
  return *this;
}

JsonValue RunStatisticsForAssets::Jsonize() const
{
  JsonValue payload;

  if(m_addedHasBeenSet)
  {
   payload.WithInteger("added", m_added);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithInteger("skipped", m_skipped);

  }

  if(m_unchangedHasBeenSet)
  {
   payload.WithInteger("unchanged", m_unchanged);

  }

  if(m_updatedHasBeenSet)
  {
   payload.WithInteger("updated", m_updated);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
