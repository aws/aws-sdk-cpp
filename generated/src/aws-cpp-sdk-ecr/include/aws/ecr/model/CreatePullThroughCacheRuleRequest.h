/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class CreatePullThroughCacheRuleRequest : public ECRRequest
  {
  public:
    AWS_ECR_API CreatePullThroughCacheRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePullThroughCacheRule"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = value; }

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::move(value); }

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix.assign(value); }

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}

    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}


    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const{ return m_upstreamRegistryUrl; }

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline void SetUpstreamRegistryUrl(const Aws::String& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = value; }

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline void SetUpstreamRegistryUrl(Aws::String&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::move(value); }

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline void SetUpstreamRegistryUrl(const char* value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl.assign(value); }

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(const Aws::String& value) { SetUpstreamRegistryUrl(value); return *this;}

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(Aws::String&& value) { SetUpstreamRegistryUrl(std::move(value)); return *this;}

    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(const char* value) { SetUpstreamRegistryUrl(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
