/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/OperandOne.h>
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

OperandOne::OperandOne(JsonView jsonValue)
{
  *this = jsonValue;
}

OperandOne& OperandOne::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");
    m_fieldIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OperandOne::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
