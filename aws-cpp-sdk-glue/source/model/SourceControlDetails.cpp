/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SourceControlDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SourceControlDetails::SourceControlDetails() : 
    m_provider(SourceControlProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_lastCommitIdHasBeenSet(false),
    m_authStrategy(SourceControlAuthStrategy::NOT_SET),
    m_authStrategyHasBeenSet(false),
    m_authTokenHasBeenSet(false)
{
}

SourceControlDetails::SourceControlDetails(JsonView jsonValue) : 
    m_provider(SourceControlProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_lastCommitIdHasBeenSet(false),
    m_authStrategy(SourceControlAuthStrategy::NOT_SET),
    m_authStrategyHasBeenSet(false),
    m_authTokenHasBeenSet(false)
{
  *this = jsonValue;
}

SourceControlDetails& SourceControlDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Provider"))
  {
    m_provider = SourceControlProviderMapper::GetSourceControlProviderForName(jsonValue.GetString("Provider"));

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Repository"))
  {
    m_repository = jsonValue.GetString("Repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Branch"))
  {
    m_branch = jsonValue.GetString("Branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Folder"))
  {
    m_folder = jsonValue.GetString("Folder");

    m_folderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastCommitId"))
  {
    m_lastCommitId = jsonValue.GetString("LastCommitId");

    m_lastCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthStrategy"))
  {
    m_authStrategy = SourceControlAuthStrategyMapper::GetSourceControlAuthStrategyForName(jsonValue.GetString("AuthStrategy"));

    m_authStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthToken"))
  {
    m_authToken = jsonValue.GetString("AuthToken");

    m_authTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceControlDetails::Jsonize() const
{
  JsonValue payload;

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", SourceControlProviderMapper::GetNameForSourceControlProvider(m_provider));
  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("Repository", m_repository);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_branchHasBeenSet)
  {
   payload.WithString("Branch", m_branch);

  }

  if(m_folderHasBeenSet)
  {
   payload.WithString("Folder", m_folder);

  }

  if(m_lastCommitIdHasBeenSet)
  {
   payload.WithString("LastCommitId", m_lastCommitId);

  }

  if(m_authStrategyHasBeenSet)
  {
   payload.WithString("AuthStrategy", SourceControlAuthStrategyMapper::GetNameForSourceControlAuthStrategy(m_authStrategy));
  }

  if(m_authTokenHasBeenSet)
  {
   payload.WithString("AuthToken", m_authToken);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
