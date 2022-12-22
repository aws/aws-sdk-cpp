/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomActionFilterOperation.h>
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

CustomActionFilterOperation::CustomActionFilterOperation() : 
    m_selectedFieldsConfigurationHasBeenSet(false),
    m_targetVisualsConfigurationHasBeenSet(false)
{
}

CustomActionFilterOperation::CustomActionFilterOperation(JsonView jsonValue) : 
    m_selectedFieldsConfigurationHasBeenSet(false),
    m_targetVisualsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomActionFilterOperation& CustomActionFilterOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedFieldsConfiguration"))
  {
    m_selectedFieldsConfiguration = jsonValue.GetObject("SelectedFieldsConfiguration");

    m_selectedFieldsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetVisualsConfiguration"))
  {
    m_targetVisualsConfiguration = jsonValue.GetObject("TargetVisualsConfiguration");

    m_targetVisualsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomActionFilterOperation::Jsonize() const
{
  JsonValue payload;

  if(m_selectedFieldsConfigurationHasBeenSet)
  {
   payload.WithObject("SelectedFieldsConfiguration", m_selectedFieldsConfiguration.Jsonize());

  }

  if(m_targetVisualsConfigurationHasBeenSet)
  {
   payload.WithObject("TargetVisualsConfiguration", m_targetVisualsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
