/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterOperationInfo.h>
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
  class DescribeClusterOperationResult
  {
  public:
    AWS_KAFKA_API DescribeClusterOperationResult();
    AWS_KAFKA_API DescribeClusterOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeClusterOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline const ClusterOperationInfo& GetClusterOperationInfo() const{ return m_clusterOperationInfo; }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline void SetClusterOperationInfo(const ClusterOperationInfo& value) { m_clusterOperationInfo = value; }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline void SetClusterOperationInfo(ClusterOperationInfo&& value) { m_clusterOperationInfo = std::move(value); }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline DescribeClusterOperationResult& WithClusterOperationInfo(const ClusterOperationInfo& value) { SetClusterOperationInfo(value); return *this;}

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline DescribeClusterOperationResult& WithClusterOperationInfo(ClusterOperationInfo&& value) { SetClusterOperationInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeClusterOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeClusterOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeClusterOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ClusterOperationInfo m_clusterOperationInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
