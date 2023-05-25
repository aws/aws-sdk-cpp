/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrConfigurationState.h>
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

EcrConfigurationState::EcrConfigurationState() : 
    m_rescanDurationStateHasBeenSet(false)
{
}

EcrConfigurationState::EcrConfigurationState(JsonView jsonValue) : 
    m_rescanDurationStateHasBeenSet(false)
{
  *this = jsonValue;
}

EcrConfigurationState& EcrConfigurationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rescanDurationState"))
  {
    m_rescanDurationState = jsonValue.GetObject("rescanDurationState");

    m_rescanDurationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue EcrConfigurationState::Jsonize() const
{
  JsonValue payload;

  if(m_rescanDurationStateHasBeenSet)
  {
   payload.WithObject("rescanDurationState", m_rescanDurationState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
