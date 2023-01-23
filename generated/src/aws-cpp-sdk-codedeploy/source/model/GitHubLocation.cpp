/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GitHubLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

GitHubLocation::GitHubLocation() : 
    m_repositoryHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
}

GitHubLocation::GitHubLocation(JsonView jsonValue) : 
    m_repositoryHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
  *this = jsonValue;
}

GitHubLocation& GitHubLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repository"))
  {
    m_repository = jsonValue.GetString("repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

    m_commitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GitHubLocation::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

  }

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
