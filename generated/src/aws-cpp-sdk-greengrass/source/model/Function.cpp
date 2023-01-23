/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/Function.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

Function::Function() : 
    m_functionArnHasBeenSet(false),
    m_functionConfigurationHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Function::Function(JsonView jsonValue) : 
    m_functionArnHasBeenSet(false),
    m_functionConfigurationHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

Function& Function::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionConfiguration"))
  {
    m_functionConfiguration = jsonValue.GetObject("FunctionConfiguration");

    m_functionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue Function::Jsonize() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_functionConfigurationHasBeenSet)
  {
   payload.WithObject("FunctionConfiguration", m_functionConfiguration.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
