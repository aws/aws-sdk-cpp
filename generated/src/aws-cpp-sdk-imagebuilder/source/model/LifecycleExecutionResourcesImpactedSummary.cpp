/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResourcesImpactedSummary.h>
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

LifecycleExecutionResourcesImpactedSummary::LifecycleExecutionResourcesImpactedSummary() : 
    m_hasImpactedResources(false),
    m_hasImpactedResourcesHasBeenSet(false)
{
}

LifecycleExecutionResourcesImpactedSummary::LifecycleExecutionResourcesImpactedSummary(JsonView jsonValue) : 
    m_hasImpactedResources(false),
    m_hasImpactedResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecutionResourcesImpactedSummary& LifecycleExecutionResourcesImpactedSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hasImpactedResources"))
  {
    m_hasImpactedResources = jsonValue.GetBool("hasImpactedResources");

    m_hasImpactedResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecutionResourcesImpactedSummary::Jsonize() const
{
  JsonValue payload;

  if(m_hasImpactedResourcesHasBeenSet)
  {
   payload.WithBool("hasImpactedResources", m_hasImpactedResources);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
