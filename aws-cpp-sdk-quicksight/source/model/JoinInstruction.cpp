/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
