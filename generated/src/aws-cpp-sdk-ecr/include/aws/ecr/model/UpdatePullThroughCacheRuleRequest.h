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
  class UpdatePullThroughCacheRuleRequest : public ECRRequest
  {
  public:
    AWS_ECR_API UpdatePullThroughCacheRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePullThroughCacheRule"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry associated
     * with the pull through cache rule. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    UpdatePullThroughCacheRuleRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name prefix to use when caching images from the source
     * registry.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    UpdatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
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
    UpdatePullThroughCacheRuleRequest& WithCredentialArn(CredentialArnT&& value) { SetCredentialArn(std::forward<CredentialArnT>(value)); return *this;}
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
    UpdatePullThroughCacheRuleRequest& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
