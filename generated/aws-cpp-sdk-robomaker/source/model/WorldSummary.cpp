/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldSummary.h>
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

WorldSummary::WorldSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_generationJobHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

WorldSummary::WorldSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_generationJobHasBeenSet(false),
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

WorldSummary& WorldSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generationJob"))
  {
    m_generationJob = jsonValue.GetString("generationJob");

    m_generationJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetString("template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_generationJobHasBeenSet)
  {
   payload.WithString("generationJob", m_generationJob);

  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
