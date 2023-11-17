/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PullThroughCacheRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

PullThroughCacheRule::PullThroughCacheRule() : 
    m_ecrRepositoryPrefixHasBeenSet(false),
    m_upstreamRegistryUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_credentialArnHasBeenSet(false),
    m_upstreamRegistry(UpstreamRegistry::NOT_SET),
    m_upstreamRegistryHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

PullThroughCacheRule::PullThroughCacheRule(JsonView jsonValue) : 
    m_ecrRepositoryPrefixHasBeenSet(false),
    m_upstreamRegistryUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_credentialArnHasBeenSet(false),
    m_upstreamRegistry(UpstreamRegistry::NOT_SET),
    m_upstreamRegistryHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

PullThroughCacheRule& PullThroughCacheRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ecrRepositoryPrefix"))
  {
    m_ecrRepositoryPrefix = jsonValue.GetString("ecrRepositoryPrefix");

    m_ecrRepositoryPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upstreamRegistryUrl"))
  {
    m_upstreamRegistryUrl = jsonValue.GetString("upstreamRegistryUrl");

    m_upstreamRegistryUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialArn"))
  {
    m_credentialArn = jsonValue.GetString("credentialArn");

    m_credentialArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upstreamRegistry"))
  {
    m_upstreamRegistry = UpstreamRegistryMapper::GetUpstreamRegistryForName(jsonValue.GetString("upstreamRegistry"));

    m_upstreamRegistryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue PullThroughCacheRule::Jsonize() const
{
  JsonValue payload;

  if(m_ecrRepositoryPrefixHasBeenSet)
  {
   payload.WithString("ecrRepositoryPrefix", m_ecrRepositoryPrefix);

  }

  if(m_upstreamRegistryUrlHasBeenSet)
  {
   payload.WithString("upstreamRegistryUrl", m_upstreamRegistryUrl);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_credentialArnHasBeenSet)
  {
   payload.WithString("credentialArn", m_credentialArn);

  }

  if(m_upstreamRegistryHasBeenSet)
  {
   payload.WithString("upstreamRegistry", UpstreamRegistryMapper::GetNameForUpstreamRegistry(m_upstreamRegistry));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
