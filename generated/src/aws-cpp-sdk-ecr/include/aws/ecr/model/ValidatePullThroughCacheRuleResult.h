/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ValidatePullThroughCacheRuleResult
  {
  public:
    AWS_ECR_API ValidatePullThroughCacheRuleResult() = default;
    AWS_ECR_API ValidatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API ValidatePullThroughCacheRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const { return m_upstreamRegistryUrl; }
    template<typename UpstreamRegistryUrlT = Aws::String>
    void SetUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::forward<UpstreamRegistryUrlT>(value); }
    template<typename UpstreamRegistryUrlT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { SetUpstreamRegistryUrl(std::forward<UpstreamRegistryUrlT>(value)); return *this;}
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
    ValidatePullThroughCacheRuleResult& WithCredentialArn(CredentialArnT&& value) { SetCredentialArn(std::forward<CredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
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
    ValidatePullThroughCacheRuleResult& WithUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { SetUpstreamRepositoryPrefix(std::forward<UpstreamRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the pull through cache rule was validated. If
     * <code>true</code>, Amazon ECR was able to reach the upstream registry and
     * authentication was successful. If <code>false</code>, there was an issue and
     * validation failed. The <code>failure</code> reason indicates the cause.</p>
     */
    inline bool GetIsValid() const { return m_isValid; }
    inline void SetIsValid(bool value) { m_isValidHasBeenSet = true; m_isValid = value; }
    inline ValidatePullThroughCacheRuleResult& WithIsValid(bool value) { SetIsValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the validation failed. For more details about possible causes and
     * how to address them, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/pull-through-cache.html">Using
     * pull through cache rules</a> in the <i>Amazon Elastic Container Registry User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetFailure() const { return m_failure; }
    template<typename FailureT = Aws::String>
    void SetFailure(FailureT&& value) { m_failureHasBeenSet = true; m_failure = std::forward<FailureT>(value); }
    template<typename FailureT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithFailure(FailureT&& value) { SetFailure(std::forward<FailureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidatePullThroughCacheRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::String m_credentialArn;
    bool m_credentialArnHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;

    Aws::String m_upstreamRepositoryPrefix;
    bool m_upstreamRepositoryPrefixHasBeenSet = false;

    bool m_isValid{false};
    bool m_isValidHasBeenSet = false;

    Aws::String m_failure;
    bool m_failureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
