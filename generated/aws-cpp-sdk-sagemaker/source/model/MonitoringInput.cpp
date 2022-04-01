﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringInput::MonitoringInput() : 
    m_endpointInputHasBeenSet(false)
{
}

MonitoringInput::MonitoringInput(JsonView jsonValue) : 
    m_endpointInputHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringInput& MonitoringInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointInput"))
  {
    m_endpointInput = jsonValue.GetObject("EndpointInput");

    m_endpointInputHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringInput::Jsonize() const
{
  JsonValue payload;

  if(m_endpointInputHasBeenSet)
  {
   payload.WithObject("EndpointInput", m_endpointInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
