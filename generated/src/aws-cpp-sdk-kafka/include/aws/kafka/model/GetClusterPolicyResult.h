/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{
  class GetClusterPolicyResult
  {
  public:
    AWS_KAFKA_API GetClusterPolicyResult();
    AWS_KAFKA_API GetClusterPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API GetClusterPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersion = value; }

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersion = std::move(value); }

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersion.assign(value); }

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * 
            <p>The cluster policy.</p>
            
     */
    inline GetClusterPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetClusterPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetClusterPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetClusterPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_currentVersion;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
