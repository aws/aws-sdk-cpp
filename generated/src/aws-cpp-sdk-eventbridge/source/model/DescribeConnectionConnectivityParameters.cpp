/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeConnectionConnectivityParameters.h>
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

DescribeConnectionConnectivityParameters::DescribeConnectionConnectivityParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeConnectionConnectivityParameters& DescribeConnectionConnectivityParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceParameters"))
  {
    m_resourceParameters = jsonValue.GetObject("ResourceParameters");
    m_resourceParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeConnectionConnectivityParameters::Jsonize() const
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
