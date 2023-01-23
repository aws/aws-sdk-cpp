/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CodeGenEdge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CodeGenEdge::CodeGenEdge() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetParameterHasBeenSet(false)
{
}

CodeGenEdge::CodeGenEdge(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetParameterHasBeenSet(false)
{
  *this = jsonValue;
}

CodeGenEdge& CodeGenEdge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetParameter"))
  {
    m_targetParameter = jsonValue.GetString("TargetParameter");

    m_targetParameterHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeGenEdge::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_targetParameterHasBeenSet)
  {
   payload.WithString("TargetParameter", m_targetParameter);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
