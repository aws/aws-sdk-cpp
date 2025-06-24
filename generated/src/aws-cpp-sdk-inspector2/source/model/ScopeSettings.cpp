/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScopeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ScopeSettings::ScopeSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ScopeSettings& ScopeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectSelectionScope"))
  {
    m_projectSelectionScope = ProjectSelectionScopeMapper::GetProjectSelectionScopeForName(jsonValue.GetString("projectSelectionScope"));
    m_projectSelectionScopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_projectSelectionScopeHasBeenSet)
  {
   payload.WithString("projectSelectionScope", ProjectSelectionScopeMapper::GetNameForProjectSelectionScope(m_projectSelectionScope));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
