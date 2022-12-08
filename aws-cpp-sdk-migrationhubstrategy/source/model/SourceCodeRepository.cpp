/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SourceCodeRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

SourceCodeRepository::SourceCodeRepository() : 
    m_branchHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false)
{
}

SourceCodeRepository::SourceCodeRepository(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCodeRepository& SourceCodeRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetString("branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repository"))
  {
    m_repository = jsonValue.GetString("repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionControlType"))
  {
    m_versionControlType = jsonValue.GetString("versionControlType");

    m_versionControlTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCodeRepository::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

  }

  if(m_versionControlTypeHasBeenSet)
  {
   payload.WithString("versionControlType", m_versionControlType);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
