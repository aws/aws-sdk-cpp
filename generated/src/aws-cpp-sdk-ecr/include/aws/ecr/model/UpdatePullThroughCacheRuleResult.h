/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdatePullThroughCacheRuleResult
  {
  public:
    AWS_ECR_API UpdatePullThroughCacheRuleResult();
    AWS_ECR_API UpdatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API UpdatePullThroughCacheRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const{ return m_ecrRepositoryPrefix; }

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline void SetEcrRepositoryPrefix(const Aws::String& value) { m_ecrRepositoryPrefix = value; }

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline void SetEcrRepositoryPrefix(Aws::String&& value) { m_ecrRepositoryPrefix = std::move(value); }

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline void SetEcrRepositoryPrefix(const char* value) { m_ecrRepositoryPrefix.assign(value); }

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const Aws::String& value) { SetEcrRepositoryPrefix(value); return *this;}

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(Aws::String&& value) { SetEcrRepositoryPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECR repository prefix associated with the pull through cache
     * rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithEcrRepositoryPrefix(const char* value) { SetEcrRepositoryPrefix(value); return *this;}


    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was updated.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in JavaScript date format, when the pull through cache
     * rule was updated.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetCredentialArn() const{ return m_credentialArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline void SetCredentialArn(const Aws::String& value) { m_credentialArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline void SetCredentialArn(Aws::String&& value) { m_credentialArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline void SetCredentialArn(const char* value) { m_credentialArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithCredentialArn(const Aws::String& value) { SetCredentialArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithCredentialArn(Aws::String&& value) { SetCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
     * secret associated with the pull through cache rule.</p>
     */
    inline UpdatePullThroughCacheRuleResult& WithCredentialArn(const char* value) { SetCredentialArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePullThroughCacheRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePullThroughCacheRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePullThroughCacheRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_ecrRepositoryPrefix;

    Aws::String m_registryId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_credentialArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
