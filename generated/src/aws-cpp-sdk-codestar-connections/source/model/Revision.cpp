/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/Revision.h>
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

Revision::Revision() : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_shaHasBeenSet(false)
{
}

Revision::Revision(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_shaHasBeenSet(false)
{
  *this = jsonValue;
}

Revision& Revision::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sha"))
  {
    m_sha = jsonValue.GetString("Sha");

    m_shaHasBeenSet = true;
  }

  return *this;
}

JsonValue Revision::Jsonize() const
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

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_shaHasBeenSet)
  {
   payload.WithString("Sha", m_sha);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
