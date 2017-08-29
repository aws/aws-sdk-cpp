/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Function::Function(const JsonValue& jsonValue) : 
    m_functionArnHasBeenSet(false),
    m_functionConfigurationHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

Function& Function::operator =(const JsonValue& jsonValue)
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
