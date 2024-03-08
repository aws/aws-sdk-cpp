/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

WorkflowDefinition::WorkflowDefinition() : 
    m_pathHasBeenSet(false)
{
}

WorkflowDefinition::WorkflowDefinition(JsonView jsonValue) : 
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowDefinition& WorkflowDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
