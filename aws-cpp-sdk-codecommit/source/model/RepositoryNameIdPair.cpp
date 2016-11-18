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

RepositoryNameIdPair::RepositoryNameIdPair(const JsonValue& jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_repositoryIdHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryNameIdPair& RepositoryNameIdPair::operator =(const JsonValue& jsonValue)
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