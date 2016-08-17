/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

GitHubLocation::GitHubLocation(const JsonValue& jsonValue) : 
    m_repositoryHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
  *this = jsonValue;
}

GitHubLocation& GitHubLocation::operator =(const JsonValue& jsonValue)
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