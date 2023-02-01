/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/Definition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

Definition::Definition() : 
    m_iamActionDefinitionHasBeenSet(false),
    m_scpActionDefinitionHasBeenSet(false),
    m_ssmActionDefinitionHasBeenSet(false)
{
}

Definition::Definition(JsonView jsonValue) : 
    m_iamActionDefinitionHasBeenSet(false),
    m_scpActionDefinitionHasBeenSet(false),
    m_ssmActionDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

Definition& Definition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamActionDefinition"))
  {
    m_iamActionDefinition = jsonValue.GetObject("IamActionDefinition");

    m_iamActionDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScpActionDefinition"))
  {
    m_scpActionDefinition = jsonValue.GetObject("ScpActionDefinition");

    m_scpActionDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SsmActionDefinition"))
  {
    m_ssmActionDefinition = jsonValue.GetObject("SsmActionDefinition");

    m_ssmActionDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue Definition::Jsonize() const
{
  JsonValue payload;

  if(m_iamActionDefinitionHasBeenSet)
  {
   payload.WithObject("IamActionDefinition", m_iamActionDefinition.Jsonize());

  }

  if(m_scpActionDefinitionHasBeenSet)
  {
   payload.WithObject("ScpActionDefinition", m_scpActionDefinition.Jsonize());

  }

  if(m_ssmActionDefinitionHasBeenSet)
  {
   payload.WithObject("SsmActionDefinition", m_ssmActionDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
