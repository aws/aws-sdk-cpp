/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDeployConfig.h>
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

ModelDeployConfig::ModelDeployConfig() : 
    m_autoGenerateEndpointName(false),
    m_autoGenerateEndpointNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false)
{
}

ModelDeployConfig::ModelDeployConfig(JsonView jsonValue) : 
    m_autoGenerateEndpointName(false),
    m_autoGenerateEndpointNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDeployConfig& ModelDeployConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoGenerateEndpointName"))
  {
    m_autoGenerateEndpointName = jsonValue.GetBool("AutoGenerateEndpointName");

    m_autoGenerateEndpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDeployConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autoGenerateEndpointNameHasBeenSet)
  {
   payload.WithBool("AutoGenerateEndpointName", m_autoGenerateEndpointName);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
