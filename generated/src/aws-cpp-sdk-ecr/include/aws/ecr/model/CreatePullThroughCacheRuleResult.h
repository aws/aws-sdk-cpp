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
    AWS_ECR_API CreatePullThroughCacheRuleResult();
    AWS_ECR_API CreatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API CreatePullThroughCacheRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefix = value; }
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefix = std::move(value); }
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefix.assign(value); }
    inline CreatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upstream registry URL associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const{ return m_upstreamRegistryUrl; }
    inline void SetUpstreamRegistryUrl(const Aws::String& value) { m_upstreamRegistryUrl = value; }
    inline void SetUpstreamRegistryUrl(Aws::String&& value) { m_upstreamRegistryUrl = std::move(value); }
    inline void SetUpstreamRegistryUrl(const char* value) { m_upstreamRegistryUrl.assign(value); }
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(const Aws::String& value) { SetUpstreamRegistryUrl(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(Aws::String&& value) { SetUpstreamRegistryUrl(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistryUrl(const char* value) { SetUpstreamRegistryUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreatePullThroughCacheRuleResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline CreatePullThroughCacheRuleResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upstream registry associated with the pull through cache
     * rule.</p>
     */
    inline const UpstreamRegistry& GetUpstreamRegistry() const{ return m_upstreamRegistry; }
    inline void SetUpstreamRegistry(const UpstreamRegistry& value) { m_upstreamRegistry = value; }
    inline void SetUpstreamRegistry(UpstreamRegistry&& value) { m_upstreamRegistry = std::move(value); }
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistry(const UpstreamRegistry& value) { SetUpstreamRegistry(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithUpstreamRegistry(UpstreamRegistry&& value) { SetUpstreamRegistry(std::move(value)); return *this;}
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
    inline CreatePullThroughCacheRuleResult& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleResult& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePullThroughCacheRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePullThroughCacheRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePullThroughCacheRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;

    Aws::String m_upstreamRegistryUrl;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_registryId;

    UpstreamRegistry m_upstreamRegistry;

    Aws::String m_credentialArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
