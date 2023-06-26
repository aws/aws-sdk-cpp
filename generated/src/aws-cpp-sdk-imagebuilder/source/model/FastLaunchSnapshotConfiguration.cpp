/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/FastLaunchSnapshotConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

FastLaunchSnapshotConfiguration::FastLaunchSnapshotConfiguration() : 
    m_targetResourceCount(0),
    m_targetResourceCountHasBeenSet(false)
{
}

FastLaunchSnapshotConfiguration::FastLaunchSnapshotConfiguration(JsonView jsonValue) : 
    m_targetResourceCount(0),
    m_targetResourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

FastLaunchSnapshotConfiguration& FastLaunchSnapshotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetResourceCount"))
  {
    m_targetResourceCount = jsonValue.GetInteger("targetResourceCount");

    m_targetResourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue FastLaunchSnapshotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetResourceCountHasBeenSet)
  {
   payload.WithInteger("targetResourceCount", m_targetResourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
