/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/RepositorySyncDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

RepositorySyncDefinition::RepositorySyncDefinition() : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

RepositorySyncDefinition::RepositorySyncDefinition(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySyncDefinition& RepositorySyncDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Branch"))
  {
    m_branch = jsonValue.GetString("Branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Directory"))
  {
    m_directory = jsonValue.GetString("Directory");

    m_directoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parent"))
  {
    m_parent = jsonValue.GetString("Parent");

    m_parentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("Branch", m_branch);

  }

  if(m_directoryHasBeenSet)
  {
   payload.WithString("Directory", m_directory);

  }

  if(m_parentHasBeenSet)
  {
   payload.WithString("Parent", m_parent);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
