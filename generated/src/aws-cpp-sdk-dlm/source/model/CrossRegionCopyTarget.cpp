/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CrossRegionCopyTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

CrossRegionCopyTarget::CrossRegionCopyTarget() : 
    m_targetRegionHasBeenSet(false)
{
}

CrossRegionCopyTarget::CrossRegionCopyTarget(JsonView jsonValue) : 
    m_targetRegionHasBeenSet(false)
{
  *this = jsonValue;
}

CrossRegionCopyTarget& CrossRegionCopyTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetRegion"))
  {
    m_targetRegion = jsonValue.GetString("TargetRegion");

    m_targetRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue CrossRegionCopyTarget::Jsonize() const
{
  JsonValue payload;

  if(m_targetRegionHasBeenSet)
  {
   payload.WithString("TargetRegion", m_targetRegion);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
