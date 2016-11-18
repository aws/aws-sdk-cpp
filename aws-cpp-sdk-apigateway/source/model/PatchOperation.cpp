/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/PatchOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

PatchOperation::PatchOperation() : 
    m_op(Op::NOT_SET),
    m_opHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_fromHasBeenSet(false)
{
}

PatchOperation::PatchOperation(const JsonValue& jsonValue) : 
    m_op(Op::NOT_SET),
    m_opHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_fromHasBeenSet(false)
{
  *this = jsonValue;
}

PatchOperation& PatchOperation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("op"))
  {
    m_op = OpMapper::GetOpForName(jsonValue.GetString("op"));

    m_opHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");

    m_fromHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchOperation::Jsonize() const
{
  JsonValue payload;

  if(m_opHasBeenSet)
  {
   payload.WithString("op", OpMapper::GetNameForOp(m_op));
  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws