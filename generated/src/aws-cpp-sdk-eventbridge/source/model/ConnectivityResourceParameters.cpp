/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectivityResourceParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ConnectivityResourceParameters::ConnectivityResourceParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectivityResourceParameters& ConnectivityResourceParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceParameters"))
  {
    m_resourceParameters = jsonValue.GetObject("ResourceParameters");
    m_resourceParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectivityResourceParameters::Jsonize() const
{
  JsonValue payload;

  if(m_resourceParametersHasBeenSet)
  {
   payload.WithObject("ResourceParameters", m_resourceParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
