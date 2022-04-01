/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryTimeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryTimeline::CanaryTimeline() : 
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastStartedHasBeenSet(false),
    m_lastStoppedHasBeenSet(false)
{
}

CanaryTimeline::CanaryTimeline(JsonView jsonValue) : 
    m_createdHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastStartedHasBeenSet(false),
    m_lastStoppedHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryTimeline& CanaryTimeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStarted"))
  {
    m_lastStarted = jsonValue.GetDouble("LastStarted");

    m_lastStartedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStopped"))
  {
    m_lastStopped = jsonValue.GetDouble("LastStopped");

    m_lastStoppedHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryTimeline::Jsonize() const
{
  JsonValue payload;

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("Created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_lastStartedHasBeenSet)
  {
   payload.WithDouble("LastStarted", m_lastStarted.SecondsWithMSPrecision());
  }

  if(m_lastStoppedHasBeenSet)
  {
   payload.WithDouble("LastStopped", m_lastStopped.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
