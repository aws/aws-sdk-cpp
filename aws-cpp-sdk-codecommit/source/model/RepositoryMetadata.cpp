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
#include <aws/codecommit/model/RepositoryMetadata.h>
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

RepositoryMetadata::RepositoryMetadata() : 
    m_accountIdHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryDescriptionHasBeenSet(false),
    m_defaultBranchHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_cloneUrlHttpHasBeenSet(false),
    m_cloneUrlSshHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

RepositoryMetadata::RepositoryMetadata(const JsonValue& jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryDescriptionHasBeenSet(false),
    m_defaultBranchHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_cloneUrlHttpHasBeenSet(false),
    m_cloneUrlSshHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryMetadata& RepositoryMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryId"))
  {
    m_repositoryId = jsonValue.GetString("repositoryId");

    m_repositoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryDescription"))
  {
    m_repositoryDescription = jsonValue.GetString("repositoryDescription");

    m_repositoryDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultBranch"))
  {
    m_defaultBranch = jsonValue.GetString("defaultBranch");

    m_defaultBranchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloneUrlHttp"))
  {
    m_cloneUrlHttp = jsonValue.GetString("cloneUrlHttp");

    m_cloneUrlHttpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloneUrlSsh"))
  {
    m_cloneUrlSsh = jsonValue.GetString("cloneUrlSsh");

    m_cloneUrlSshHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_repositoryIdHasBeenSet)
  {
   payload.WithString("repositoryId", m_repositoryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryDescriptionHasBeenSet)
  {
   payload.WithString("repositoryDescription", m_repositoryDescription);

  }

  if(m_defaultBranchHasBeenSet)
  {
   payload.WithString("defaultBranch", m_defaultBranch);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_cloneUrlHttpHasBeenSet)
  {
   payload.WithString("cloneUrlHttp", m_cloneUrlHttp);

  }

  if(m_cloneUrlSshHasBeenSet)
  {
   payload.WithString("cloneUrlSsh", m_cloneUrlSsh);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws