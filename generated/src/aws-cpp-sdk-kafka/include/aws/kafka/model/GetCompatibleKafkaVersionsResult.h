/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/CompatibleKafkaVersion.h>
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
  class GetCompatibleKafkaVersionsResult
  {
  public:
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult();
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline const Aws::Vector<CompatibleKafkaVersion>& GetCompatibleKafkaVersions() const{ return m_compatibleKafkaVersions; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline void SetCompatibleKafkaVersions(const Aws::Vector<CompatibleKafkaVersion>& value) { m_compatibleKafkaVersions = value; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline void SetCompatibleKafkaVersions(Aws::Vector<CompatibleKafkaVersion>&& value) { m_compatibleKafkaVersions = std::move(value); }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& WithCompatibleKafkaVersions(const Aws::Vector<CompatibleKafkaVersion>& value) { SetCompatibleKafkaVersions(value); return *this;}

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& WithCompatibleKafkaVersions(Aws::Vector<CompatibleKafkaVersion>&& value) { SetCompatibleKafkaVersions(std::move(value)); return *this;}

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& AddCompatibleKafkaVersions(const CompatibleKafkaVersion& value) { m_compatibleKafkaVersions.push_back(value); return *this; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& AddCompatibleKafkaVersions(CompatibleKafkaVersion&& value) { m_compatibleKafkaVersions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCompatibleKafkaVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCompatibleKafkaVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCompatibleKafkaVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CompatibleKafkaVersion> m_compatibleKafkaVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
