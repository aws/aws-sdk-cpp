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
    AWS_ECR_API CreatePullThroughCacheRuleRequest() = default;

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
     * registry.</p>  <p>There is always an assumed <code>/</code> applied
     * to the end of the prefix. If you specify <code>ecr-public</code> as the prefix,
     * Amazon ECR treats that as <code>ecr-public/</code>.</p> 
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry URL of the upstream public registry to use as the source for the
     * pull through cache rule. The following is the syntax to use for each supported
     * upstream registry.</p> <ul> <li> <p>Amazon ECR (<code>ecr</code>) –
     * <code>&lt;accountId&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com</code> </p> </li>
     * <li> <p>Amazon ECR Public (<code>ecr-public</code>) –
     * <code>public.ecr.aws</code> </p> </li> <li> <p>Docker Hub
     * (<code>docker-hub</code>) – <code>registry-1.docker.io</code> </p> </li> <li>
     * <p>GitHub Container Registry (<code>github-container-registry</code>) –
     * <code>ghcr.io</code> </p> </li> <li> <p>GitLab Container Registry
     * (<code>gitlab-container-registry</code>) – <code>registry.gitlab.com</code> </p>
     * </li> <li> <p>Kubernetes (<code>k8s</code>) – <code>registry.k8s.io</code> </p>
     * </li> <li> <p>Microsoft Azure Container Registry
     * (<code>azure-container-registry</code>) – <code>&lt;custom&gt;.azurecr.io</code>
     * </p> </li> <li> <p>Quay (<code>quay</code>) – <code>quay.io</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const { return m_upstreamRegistryUrl; }
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }
    template<typename UpstreamRegistryUrlT = Aws::String>
    void SetUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::forward<UpstreamRegistryUrlT>(value); }
    template<typename UpstreamRegistryUrlT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { SetUpstreamRegistryUrl(std::forward<UpstreamRegistryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * pull through cache rule for. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream registry.</p>
     */
    inline UpstreamRegistry GetUpstreamRegistry() const { return m_upstreamRegistry; }
    inline bool UpstreamRegistryHasBeenSet() const { return m_upstreamRegistryHasBeenSet; }
    inline void SetUpstreamRegistry(UpstreamRegistry value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = value; }
    inline CreatePullThroughCacheRuleRequest& WithUpstreamRegistry(UpstreamRegistry value) { SetUpstreamRegistry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret that identifies the credentials to authenticate to the upstream
     * registry.</p>
     */
    inline const Aws::String& GetCredentialArn() const { return m_credentialArn; }
    inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
    template<typename CredentialArnT = Aws::String>
    void SetCredentialArn(CredentialArnT&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::forward<CredentialArnT>(value); }
    template<typename CredentialArnT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithCredentialArn(CredentialArnT&& value) { SetCredentialArn(std::forward<CredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the IAM role to be assumed by Amazon ECR to
     * authenticate to the ECR upstream registry. This role must be in the same account
     * as the registry that you are configuring.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name prefix of the upstream registry to match with the
     * upstream repository name. When this field isn't specified, Amazon ECR will use
     * the <code>ROOT</code>.</p>
     */
    inline const Aws::String& GetUpstreamRepositoryPrefix() const { return m_upstreamRepositoryPrefix; }
    inline bool UpstreamRepositoryPrefixHasBeenSet() const { return m_upstreamRepositoryPrefixHasBeenSet; }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    void SetUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { m_upstreamRepositoryPrefixHasBeenSet = true; m_upstreamRepositoryPrefix = std::forward<UpstreamRepositoryPrefixT>(value); }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    CreatePullThroughCacheRuleRequest& WithUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { SetUpstreamRepositoryPrefix(std::forward<UpstreamRepositoryPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    UpstreamRegistry m_upstreamRegistry{UpstreamRegistry::NOT_SET};
    bool m_upstreamRegistryHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;

    Aws::String m_upstreamRepositoryPrefix;
    bool m_upstreamRepositoryPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
