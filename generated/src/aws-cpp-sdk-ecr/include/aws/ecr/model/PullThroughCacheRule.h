/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/UpstreamRegistry.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of a pull through cache rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PullThroughCacheRule">AWS
   * API Reference</a></p>
   */
  class PullThroughCacheRule
  {
  public:
    AWS_ECR_API PullThroughCacheRule() = default;
    AWS_ECR_API PullThroughCacheRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API PullThroughCacheRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    PullThroughCacheRule& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const { return m_upstreamRegistryUrl; }
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }
    template<typename UpstreamRegistryUrlT = Aws::String>
    void SetUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::forward<UpstreamRegistryUrlT>(value); }
    template<typename UpstreamRegistryUrlT = Aws::String>
    PullThroughCacheRule& WithUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { SetUpstreamRegistryUrl(std::forward<UpstreamRegistryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pull through cache was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PullThroughCacheRule& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry the pull
     * through cache rule is associated with.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PullThroughCacheRule& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetCredentialArn() const { return m_credentialArn; }
    inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
    template<typename CredentialArnT = Aws::String>
    void SetCredentialArn(CredentialArnT&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::forward<CredentialArnT>(value); }
    template<typename CredentialArnT = Aws::String>
    PullThroughCacheRule& WithCredentialArn(CredentialArnT&& value) { SetCredentialArn(std::forward<CredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    PullThroughCacheRule& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetUpstreamRepositoryPrefix() const { return m_upstreamRepositoryPrefix; }
    inline bool UpstreamRepositoryPrefixHasBeenSet() const { return m_upstreamRepositoryPrefixHasBeenSet; }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    void SetUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { m_upstreamRepositoryPrefixHasBeenSet = true; m_upstreamRepositoryPrefix = std::forward<UpstreamRepositoryPrefixT>(value); }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    PullThroughCacheRule& WithUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { SetUpstreamRepositoryPrefix(std::forward<UpstreamRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream source registry associated with the pull through
     * cache rule.</p>
     */
    inline UpstreamRegistry GetUpstreamRegistry() const { return m_upstreamRegistry; }
    inline bool UpstreamRegistryHasBeenSet() const { return m_upstreamRegistryHasBeenSet; }
    inline void SetUpstreamRegistry(UpstreamRegistry value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = value; }
    inline PullThroughCacheRule& WithUpstreamRegistry(UpstreamRegistry value) { SetUpstreamRegistry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    PullThroughCacheRule& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;

    Aws::String m_upstreamRepositoryPrefix;
    bool m_upstreamRepositoryPrefixHasBeenSet = false;

    UpstreamRegistry m_upstreamRegistry{UpstreamRegistry::NOT_SET};
    bool m_upstreamRegistryHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
