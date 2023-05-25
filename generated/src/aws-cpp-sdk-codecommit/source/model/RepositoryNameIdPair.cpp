/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/RepositoryNameIdPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

RepositoryNameIdPair::RepositoryNameIdPair() : 
    m_repositoryNameHasBeenSet(false),
    m_repositoryIdHasBeenSet(false)
{
}

RepositoryNameIdPair::RepositoryNameIdPair(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_repositoryIdHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryNameIdPair& RepositoryNameIdPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryId"))
  {
    m_repositoryId = jsonValue.GetString("repositoryId");

    m_repositoryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryNameIdPair::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryIdHasBeenSet)
  {
   payload.WithString("repositoryId", m_repositoryId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
