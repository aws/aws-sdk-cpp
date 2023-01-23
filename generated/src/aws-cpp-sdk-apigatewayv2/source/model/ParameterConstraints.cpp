/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ParameterConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

ParameterConstraints::ParameterConstraints() : 
    m_required(false),
    m_requiredHasBeenSet(false)
{
}

ParameterConstraints::ParameterConstraints(JsonView jsonValue) : 
    m_required(false),
    m_requiredHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterConstraints& ParameterConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
