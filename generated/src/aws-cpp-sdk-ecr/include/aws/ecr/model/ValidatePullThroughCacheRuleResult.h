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
    AWS_ECR_API ValidatePullThroughCacheRuleResult();
    AWS_ECR_API ValidatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API ValidatePullThroughCacheRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefix = value; }
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefix = std::move(value); }
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefix.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const{ return m_upstreamRegistryUrl; }
    inline void SetUpstreamRegistryUrl(const Aws::String& value) { m_upstreamRegistryUrl = value; }
    inline void SetUpstreamRegistryUrl(Aws::String&& value) { m_upstreamRegistryUrl = std::move(value); }
    inline void SetUpstreamRegistryUrl(const char* value) { m_upstreamRegistryUrl.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(const Aws::String& value) { SetUpstreamRegistryUrl(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(Aws::String&& value) { SetUpstreamRegistryUrl(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(const char* value) { SetUpstreamRegistryUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCredentialArn() const{ return m_credentialArn; }
    inline void SetCredentialArn(const Aws::String& value) { m_credentialArn = value; }
    inline void SetCredentialArn(Aws::String&& value) { m_credentialArn = std::move(value); }
    inline void SetCredentialArn(const char* value) { m_credentialArn.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the pull through cache rule was validated. If
     * <code>true</code>, Amazon ECR was able to reach the upstream registry and
     * authentication was successful. If <code>false</code>, there was an issue and
     * validation failed. The <code>failure</code> reason indicates the cause.</p>
     */
    inline bool GetIsValid() const{ return m_isValid; }
    inline void SetIsValid(bool value) { m_isValid = value; }
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
    inline const Aws::String& GetFailure() const{ return m_failure; }
    inline void SetFailure(const Aws::String& value) { m_failure = value; }
    inline void SetFailure(Aws::String&& value) { m_failure = std::move(value); }
    inline void SetFailure(const char* value) { m_failure.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithFailure(const Aws::String& value) { SetFailure(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithFailure(Aws::String&& value) { SetFailure(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithFailure(const char* value) { SetFailure(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidatePullThroughCacheRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidatePullThroughCacheRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;

    Aws::String m_registryId;

    Aws::String m_upstreamRegistryUrl;

    Aws::String m_credentialArn;

    bool m_isValid;

    Aws::String m_failure;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
