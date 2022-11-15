/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RequiredField.h>
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

RequiredField::RequiredField() : 
    m_fieldIdHasBeenSet(false)
{
}

RequiredField::RequiredField(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false)
{
  *this = jsonValue;
}

RequiredField& RequiredField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");

    m_fieldIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RequiredField::Jsonize() const
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
