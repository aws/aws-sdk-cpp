/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ResolvedPipelineVariable.h>
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

ResolvedPipelineVariable::ResolvedPipelineVariable() : 
    m_nameHasBeenSet(false),
    m_resolvedValueHasBeenSet(false)
{
}

ResolvedPipelineVariable::ResolvedPipelineVariable(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_resolvedValueHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedPipelineVariable& ResolvedPipelineVariable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedValue"))
  {
    m_resolvedValue = jsonValue.GetString("resolvedValue");

    m_resolvedValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedPipelineVariable::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resolvedValueHasBeenSet)
  {
   payload.WithString("resolvedValue", m_resolvedValue);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
