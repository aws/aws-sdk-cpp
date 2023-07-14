/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAPIConflictResolution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendAPIConflictResolution::BackendAPIConflictResolution() : 
    m_resolutionStrategy(ResolutionStrategy::NOT_SET),
    m_resolutionStrategyHasBeenSet(false)
{
}

BackendAPIConflictResolution::BackendAPIConflictResolution(JsonView jsonValue) : 
    m_resolutionStrategy(ResolutionStrategy::NOT_SET),
    m_resolutionStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAPIConflictResolution& BackendAPIConflictResolution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resolutionStrategy"))
  {
    m_resolutionStrategy = ResolutionStrategyMapper::GetResolutionStrategyForName(jsonValue.GetString("resolutionStrategy"));

    m_resolutionStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAPIConflictResolution::Jsonize() const
{
  JsonValue payload;

  if(m_resolutionStrategyHasBeenSet)
  {
   payload.WithString("resolutionStrategy", ResolutionStrategyMapper::GetNameForResolutionStrategy(m_resolutionStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
