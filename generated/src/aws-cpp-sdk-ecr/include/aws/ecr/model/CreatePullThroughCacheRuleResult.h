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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{
  class CreatePullThroughCacheRuleResult
  {
  public:
    AWS_ECR_API CreatePullThroughCacheRuleResult() = default;
    AWS_ECR_API CreatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API CreatePullThroughCacheRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    CreatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const { return m_upstreamRegistryUrl; }
    template<typename UpstreamRegistryUrlT = Aws::String>
    void SetUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::forward<UpstreamRegistryUrlT>(value); }
    template<typename UpstreamRegistryUrlT = Aws::String>
    CreatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { SetUpstreamRegistryUrl(std::forward<UpstreamRegistryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreatePullThroughCacheRuleResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    CreatePullThroughCacheRuleResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream registry associated with the pull through cache
     * rule.</p>
     */
    inline UpstreamRegistry GetUpstreamRegistry() const { return m_upstreamRegistry; }
    inline void SetUpstreamRegistry(UpstreamRegistry value) { m_upstreamRegistryHasBeenSet = true; m_upstreamRegistry = value; }
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistry(UpstreamRegistry value) { SetUpstreamRegistry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCredentialArn() const { return m_credentialArn; }
    template<typename CredentialArnT = Aws::String>
    void SetCredentialArn(CredentialArnT&& value) { m_credentialArnHasBeenSet = true; m_credentialArn = std::forward<CredentialArnT>(value); }
    template<typename CredentialArnT = Aws::String>
    CreatePullThroughCacheRuleResult& WithCredentialArn(CredentialArnT&& value) { SetCredentialArn(std::forward<CredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    CreatePullThroughCacheRuleResult& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetUpstreamRepositoryPrefix() const { return m_upstreamRepositoryPrefix; }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    void SetUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { m_upstreamRepositoryPrefixHasBeenSet = true; m_upstreamRepositoryPrefix = std::forward<UpstreamRepositoryPrefixT>(value); }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    CreatePullThroughCacheRuleResult& WithUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { SetUpstreamRepositoryPrefix(std::forward<UpstreamRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePullThroughCacheRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    UpstreamRegistry m_upstreamRegistry{UpstreamRegistry::NOT_SET};
    bool m_upstreamRegistryHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;

    Aws::String m_upstreamRepositoryPrefix;
    bool m_upstreamRepositoryPrefixHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
