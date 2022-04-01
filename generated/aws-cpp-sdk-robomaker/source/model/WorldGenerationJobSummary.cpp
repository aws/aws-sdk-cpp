/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldGenerationJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

WorldGenerationJobSummary::WorldGenerationJobSummary() : 
    m_arnHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(WorldGenerationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_worldCountHasBeenSet(false),
    m_succeededWorldCount(0),
    m_succeededWorldCountHasBeenSet(false),
    m_failedWorldCount(0),
    m_failedWorldCountHasBeenSet(false)
{
}

WorldGenerationJobSummary::WorldGenerationJobSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(WorldGenerationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_worldCountHasBeenSet(false),
    m_succeededWorldCount(0),
    m_succeededWorldCountHasBeenSet(false),
    m_failedWorldCount(0),
    m_failedWorldCountHasBeenSet(false)
{
  *this = jsonValue;
}

WorldGenerationJobSummary& WorldGenerationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetString("template");

    m_templateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorldGenerationJobStatusMapper::GetWorldGenerationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("worldCount"))
  {
    m_worldCount = jsonValue.GetObject("worldCount");

    m_worldCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeededWorldCount"))
  {
    m_succeededWorldCount = jsonValue.GetInteger("succeededWorldCount");

    m_succeededWorldCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedWorldCount"))
  {
    m_failedWorldCount = jsonValue.GetInteger("failedWorldCount");

    m_failedWorldCountHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldGenerationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorldGenerationJobStatusMapper::GetNameForWorldGenerationJobStatus(m_status));
  }

  if(m_worldCountHasBeenSet)
  {
   payload.WithObject("worldCount", m_worldCount.Jsonize());

  }

  if(m_succeededWorldCountHasBeenSet)
  {
   payload.WithInteger("succeededWorldCount", m_succeededWorldCount);

  }

  if(m_failedWorldCountHasBeenSet)
  {
   payload.WithInteger("failedWorldCount", m_failedWorldCount);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
