/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineVariableDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineVariableDeclaration::PipelineVariableDeclaration() : 
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

PipelineVariableDeclaration::PipelineVariableDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineVariableDeclaration& PipelineVariableDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineVariableDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
