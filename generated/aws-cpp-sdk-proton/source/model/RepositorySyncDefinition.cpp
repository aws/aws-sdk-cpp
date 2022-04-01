/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositorySyncDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
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
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetString("branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directory"))
  {
    m_directory = jsonValue.GetString("directory");

    m_directoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parent"))
  {
    m_parent = jsonValue.GetString("parent");

    m_parentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_directoryHasBeenSet)
  {
   payload.WithString("directory", m_directory);

  }

  if(m_parentHasBeenSet)
  {
   payload.WithString("parent", m_parent);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
