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
  class UpdateReadinessCheckResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult();
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckArn() const{ return m_readinessCheckArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(const Aws::String& value) { m_readinessCheckArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(Aws::String&& value) { m_readinessCheckArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline void SetReadinessCheckArn(const char* value) { m_readinessCheckArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckArn(const Aws::String& value) { SetReadinessCheckArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckArn(Aws::String&& value) { SetReadinessCheckArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckArn(const char* value) { SetReadinessCheckArn(value); return *this;}


    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckName = value; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckName = std::move(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckName.assign(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckResult& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSet() const{ return m_resourceSet; }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(const Aws::String& value) { m_resourceSet = value; }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(Aws::String&& value) { m_resourceSet = std::move(value); }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline void SetResourceSet(const char* value) { m_resourceSet.assign(value); }

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckResult& WithResourceSet(const Aws::String& value) { SetResourceSet(value); return *this;}

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckResult& WithResourceSet(Aws::String&& value) { SetResourceSet(std::move(value)); return *this;}

    /**
     * <p>Name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckResult& WithResourceSet(const char* value) { SetResourceSet(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline UpdateReadinessCheckResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline UpdateReadinessCheckResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline UpdateReadinessCheckResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateReadinessCheckResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_readinessCheckArn;

    Aws::String m_readinessCheckName;

    Aws::String m_resourceSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
