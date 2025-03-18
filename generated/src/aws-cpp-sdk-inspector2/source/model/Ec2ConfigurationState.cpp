/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2ConfigurationState.h>
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

Ec2ConfigurationState::Ec2ConfigurationState(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2ConfigurationState& Ec2ConfigurationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanModeState"))
  {
    m_scanModeState = jsonValue.GetObject("scanModeState");
    m_scanModeStateHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2ConfigurationState::Jsonize() const
{
  JsonValue payload;

  if(m_scanModeStateHasBeenSet)
  {
   payload.WithObject("scanModeState", m_scanModeState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
