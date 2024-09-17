/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/UpstreamRegistry.h>
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


    ///@{
    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = value; }
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::move(value); }
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix.assign(value); }
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule. The following is the syntax to use for each supported
     * upstream registry.</p> <ul> <li> <p>Amazon ECR Public (<code>ecr-public</code>)
     * - <code>public.ecr.aws</code> </p> </li> <li> <p>Docker Hub
     * (<code>docker-hub</code>) - <code>registry-1.docker.io</code> </p> </li> <li>
     * <p>Quay (<code>quay</code>) - <code>quay.io</code> </p> </li> <li> <p>Kubernetes
     * (<code>k8s</code>) - <code>registry.k8s.io</code> </p> </li> <li> <p>GitHub
     * Container Registry (<code>github-container-registry</code>) -
     * <code>ghcr.io</code> </p> </li> <li> <p>Microsoft Azure Container Registry
     * (<code>azure-container-registry</code>) - <code>&lt;custom&gt;.azurecr.io</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const{ return m_upstreamRegistryUrl; }
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }
    inline void SetUpstreamRegistryUrl(const Aws::String& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = value; }
    inline void SetUpstreamRegistryUrl(Aws::String&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::move(value); }
    inline void SetUpstreamRegistryUrl(const char* value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl.assign(value); }
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(const Aws::String& value) { SetUpstreamRegistryUrl(value); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(Aws::String&& value) { SetUpstreamRegistryUrl(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(const char* value) { SetUpstreamRegistryUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream registry.</p>
     */
    inline const UpstreamRegistry& GetUpstreamRegistry() const{ return m_upstreamRegistry; }
    inline bool UpstreamRegistryHasBeenSet() const { return m_upstreamRegistryHasBeenSet; }
    inline void SetUpstreamRegistry(const UpstreamRegistry& value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = value; }
    inline void SetUpstreamRegistry(UpstreamRegistry&& value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = std::move(value); }
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistry(const UpstreamRegistry& value) { SetUpstreamRegistry(value); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistry(UpstreamRegistry&& value) { SetUpstreamRegistry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that identifies the credentials to authenticate to the upstream
     * registry.</p>
     */
    inline const Aws::String& GetCredentialArn() const{ return m_credentialArn; }
    inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
    inline void SetCredentialArn(const Aws::String& value) { m_credentialArnHasBeenSet = true; m_credentialArn = value; }
    inline void SetCredentialArn(Aws::String&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::move(value); }
    inline void SetCredentialArn(const char* value) { m_credentialArnHasBeenSet = true; m_credentialArn.assign(value); }
    inline CreatePullThroughCacheRuleRequest& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleRequest& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    UpstreamRegistry m_upstreamRegistry;
    bool m_upstreamRegistryHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
