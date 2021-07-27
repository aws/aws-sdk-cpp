/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API CreateReadinessCheckResult
  {
  public:
    CreateReadinessCheckResult();
    CreateReadinessCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateReadinessCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Arn associated with ReadinessCheck
     */
    inline const Aws::String& GetReadinessCheckArn() const{ return m_readinessCheckArn; }

    /**
     * Arn associated with ReadinessCheck
     */
    inline void SetReadinessCheckArn(const Aws::String& value) { m_readinessCheckArn = value; }

    /**
     * Arn associated with ReadinessCheck
     */
    inline void SetReadinessCheckArn(Aws::String&& value) { m_readinessCheckArn = std::move(value); }

    /**
     * Arn associated with ReadinessCheck
     */
    inline void SetReadinessCheckArn(const char* value) { m_readinessCheckArn.assign(value); }

    /**
     * Arn associated with ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckArn(const Aws::String& value) { SetReadinessCheckArn(value); return *this;}

    /**
     * Arn associated with ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckArn(Aws::String&& value) { SetReadinessCheckArn(std::move(value)); return *this;}

    /**
     * Arn associated with ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckArn(const char* value) { SetReadinessCheckArn(value); return *this;}


    /**
     * Name for a ReadinessCheck
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * Name for a ReadinessCheck
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckName = value; }

    /**
     * Name for a ReadinessCheck
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckName = std::move(value); }

    /**
     * Name for a ReadinessCheck
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckName.assign(value); }

    /**
     * Name for a ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * Name for a ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * Name for a ReadinessCheck
     */
    inline CreateReadinessCheckResult& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * Name of the ResourceSet to be checked
     */
    inline const Aws::String& GetResourceSet() const{ return m_resourceSet; }

    /**
     * Name of the ResourceSet to be checked
     */
    inline void SetResourceSet(const Aws::String& value) { m_resourceSet = value; }

    /**
     * Name of the ResourceSet to be checked
     */
    inline void SetResourceSet(Aws::String&& value) { m_resourceSet = std::move(value); }

    /**
     * Name of the ResourceSet to be checked
     */
    inline void SetResourceSet(const char* value) { m_resourceSet.assign(value); }

    /**
     * Name of the ResourceSet to be checked
     */
    inline CreateReadinessCheckResult& WithResourceSet(const Aws::String& value) { SetResourceSet(value); return *this;}

    /**
     * Name of the ResourceSet to be checked
     */
    inline CreateReadinessCheckResult& WithResourceSet(Aws::String&& value) { SetResourceSet(std::move(value)); return *this;}

    /**
     * Name of the ResourceSet to be checked
     */
    inline CreateReadinessCheckResult& WithResourceSet(const char* value) { SetResourceSet(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline CreateReadinessCheckResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateReadinessCheckResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateReadinessCheckResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateReadinessCheckResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_readinessCheckArn;

    Aws::String m_readinessCheckName;

    Aws::String m_resourceSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
