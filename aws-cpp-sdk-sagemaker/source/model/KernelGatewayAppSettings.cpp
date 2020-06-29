/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
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

KernelGatewayAppSettings::KernelGatewayAppSettings() : 
    m_defaultResourceSpecHasBeenSet(false)
{
}

KernelGatewayAppSettings::KernelGatewayAppSettings(JsonView jsonValue) : 
    m_defaultResourceSpecHasBeenSet(false)
{
  *this = jsonValue;
}

KernelGatewayAppSettings& KernelGatewayAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultResourceSpec"))
  {
    m_defaultResourceSpec = jsonValue.GetObject("DefaultResourceSpec");

    m_defaultResourceSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue KernelGatewayAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultResourceSpecHasBeenSet)
  {
   payload.WithObject("DefaultResourceSpec", m_defaultResourceSpec.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
