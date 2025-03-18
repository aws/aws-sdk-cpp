/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BooleanOperands.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

BooleanOperands::BooleanOperands(JsonView jsonValue)
{
  *this = jsonValue;
}

BooleanOperands& BooleanOperands::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operandOne"))
  {
    m_operandOne = jsonValue.GetObject("operandOne");
    m_operandOneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operandTwo"))
  {
    m_operandTwo = jsonValue.GetObject("operandTwo");
    m_operandTwoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetBool("result");
    m_resultHasBeenSet = true;
  }
  return *this;
}

JsonValue BooleanOperands::Jsonize() const
{
  JsonValue payload;

  if(m_operandOneHasBeenSet)
  {
   payload.WithObject("operandOne", m_operandOne.Jsonize());

  }

  if(m_operandTwoHasBeenSet)
  {
   payload.WithObject("operandTwo", m_operandTwo.Jsonize());

  }

  if(m_resultHasBeenSet)
  {
   payload.WithBool("result", m_result);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
