/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/RepositoryLinkInfo.h>
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

RepositoryLinkInfo::RepositoryLinkInfo() : 
    m_connectionArnHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_repositoryLinkArnHasBeenSet(false),
    m_repositoryLinkIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

RepositoryLinkInfo::RepositoryLinkInfo(JsonView jsonValue) : 
    m_connectionArnHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_repositoryLinkArnHasBeenSet(false),
    m_repositoryLinkIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryLinkInfo& RepositoryLinkInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryLinkArn"))
  {
    m_repositoryLinkArn = jsonValue.GetString("RepositoryLinkArn");

    m_repositoryLinkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryLinkId"))
  {
    m_repositoryLinkId = jsonValue.GetString("RepositoryLinkId");

    m_repositoryLinkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryLinkInfo::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_repositoryLinkArnHasBeenSet)
  {
   payload.WithString("RepositoryLinkArn", m_repositoryLinkArn);

  }

  if(m_repositoryLinkIdHasBeenSet)
  {
   payload.WithString("RepositoryLinkId", m_repositoryLinkId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
