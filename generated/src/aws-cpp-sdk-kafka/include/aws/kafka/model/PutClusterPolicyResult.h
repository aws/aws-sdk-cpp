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
  class PutClusterPolicyResult
  {
  public:
    AWS_KAFKA_API PutClusterPolicyResult();
    AWS_KAFKA_API PutClusterPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API PutClusterPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The policy version.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersion = value; }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersion = std::move(value); }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersion.assign(value); }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyResult& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyResult& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyResult& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutClusterPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutClusterPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutClusterPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_currentVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
