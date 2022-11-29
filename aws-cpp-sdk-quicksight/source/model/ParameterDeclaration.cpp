/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterDeclaration.h>
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

ParameterDeclaration::ParameterDeclaration() : 
    m_stringParameterDeclarationHasBeenSet(false),
    m_decimalParameterDeclarationHasBeenSet(false),
    m_integerParameterDeclarationHasBeenSet(false),
    m_dateTimeParameterDeclarationHasBeenSet(false)
{
}

ParameterDeclaration::ParameterDeclaration(JsonView jsonValue) : 
    m_stringParameterDeclarationHasBeenSet(false),
    m_decimalParameterDeclarationHasBeenSet(false),
    m_integerParameterDeclarationHasBeenSet(false),
    m_dateTimeParameterDeclarationHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterDeclaration& ParameterDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringParameterDeclaration"))
  {
    m_stringParameterDeclaration = jsonValue.GetObject("StringParameterDeclaration");

    m_stringParameterDeclarationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalParameterDeclaration"))
  {
    m_decimalParameterDeclaration = jsonValue.GetObject("DecimalParameterDeclaration");

    m_decimalParameterDeclarationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerParameterDeclaration"))
  {
    m_integerParameterDeclaration = jsonValue.GetObject("IntegerParameterDeclaration");

    m_integerParameterDeclarationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeParameterDeclaration"))
  {
    m_dateTimeParameterDeclaration = jsonValue.GetObject("DateTimeParameterDeclaration");

    m_dateTimeParameterDeclarationHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_stringParameterDeclarationHasBeenSet)
  {
   payload.WithObject("StringParameterDeclaration", m_stringParameterDeclaration.Jsonize());

  }

  if(m_decimalParameterDeclarationHasBeenSet)
  {
   payload.WithObject("DecimalParameterDeclaration", m_decimalParameterDeclaration.Jsonize());

  }

  if(m_integerParameterDeclarationHasBeenSet)
  {
   payload.WithObject("IntegerParameterDeclaration", m_integerParameterDeclaration.Jsonize());

  }

  if(m_dateTimeParameterDeclarationHasBeenSet)
  {
   payload.WithObject("DateTimeParameterDeclaration", m_dateTimeParameterDeclaration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
