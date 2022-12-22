/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterOperationTargetVisualsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FilterOperationTargetVisualsConfiguration::FilterOperationTargetVisualsConfiguration() : 
    m_sameSheetTargetVisualConfigurationHasBeenSet(false)
{
}

FilterOperationTargetVisualsConfiguration::FilterOperationTargetVisualsConfiguration(JsonView jsonValue) : 
    m_sameSheetTargetVisualConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FilterOperationTargetVisualsConfiguration& FilterOperationTargetVisualsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SameSheetTargetVisualConfiguration"))
  {
    m_sameSheetTargetVisualConfiguration = jsonValue.GetObject("SameSheetTargetVisualConfiguration");

    m_sameSheetTargetVisualConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterOperationTargetVisualsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sameSheetTargetVisualConfigurationHasBeenSet)
  {
   payload.WithObject("SameSheetTargetVisualConfiguration", m_sameSheetTargetVisualConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
