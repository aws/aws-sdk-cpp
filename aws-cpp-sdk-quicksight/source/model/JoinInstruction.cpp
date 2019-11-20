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

#include <aws/quicksight/model/JoinInstruction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

JoinInstruction::JoinInstruction() : 
    m_leftOperandHasBeenSet(false),
    m_rightOperandHasBeenSet(false),
    m_type(JoinType::NOT_SET),
    m_typeHasBeenSet(false),
    m_onClauseHasBeenSet(false)
{
}

JoinInstruction::JoinInstruction(JsonView jsonValue) : 
    m_leftOperandHasBeenSet(false),
    m_rightOperandHasBeenSet(false),
    m_type(JoinType::NOT_SET),
    m_typeHasBeenSet(false),
    m_onClauseHasBeenSet(false)
{
  *this = jsonValue;
}

JoinInstruction& JoinInstruction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LeftOperand"))
  {
    m_leftOperand = jsonValue.GetString("LeftOperand");

    m_leftOperandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RightOperand"))
  {
    m_rightOperand = jsonValue.GetString("RightOperand");

    m_rightOperandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = JoinTypeMapper::GetJoinTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnClause"))
  {
    m_onClause = jsonValue.GetString("OnClause");

    m_onClauseHasBeenSet = true;
  }

  return *this;
}

JsonValue JoinInstruction::Jsonize() const
{
  JsonValue payload;

  if(m_leftOperandHasBeenSet)
  {
   payload.WithString("LeftOperand", m_leftOperand);

  }

  if(m_rightOperandHasBeenSet)
  {
   payload.WithString("RightOperand", m_rightOperand);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", JoinTypeMapper::GetNameForJoinType(m_type));
  }

  if(m_onClauseHasBeenSet)
  {
   payload.WithString("OnClause", m_onClause);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
