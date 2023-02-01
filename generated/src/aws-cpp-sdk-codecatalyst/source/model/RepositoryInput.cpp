/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/RepositoryInput.h>
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

RepositoryInput::RepositoryInput() : 
    m_repositoryNameHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
}

RepositoryInput::RepositoryInput(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryInput& RepositoryInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryInput::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
