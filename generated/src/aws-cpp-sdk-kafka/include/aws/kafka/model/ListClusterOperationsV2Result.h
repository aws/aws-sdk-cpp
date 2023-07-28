/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterOperationV2Summary.h>
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
  class ListClusterOperationsV2Result
  {
  public:
    AWS_KAFKA_API ListClusterOperationsV2Result();
    AWS_KAFKA_API ListClusterOperationsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClusterOperationsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline const Aws::Vector<ClusterOperationV2Summary>& GetClusterOperationInfoList() const{ return m_clusterOperationInfoList; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline void SetClusterOperationInfoList(const Aws::Vector<ClusterOperationV2Summary>& value) { m_clusterOperationInfoList = value; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline void SetClusterOperationInfoList(Aws::Vector<ClusterOperationV2Summary>&& value) { m_clusterOperationInfoList = std::move(value); }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline ListClusterOperationsV2Result& WithClusterOperationInfoList(const Aws::Vector<ClusterOperationV2Summary>& value) { SetClusterOperationInfoList(value); return *this;}

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline ListClusterOperationsV2Result& WithClusterOperationInfoList(Aws::Vector<ClusterOperationV2Summary>&& value) { SetClusterOperationInfoList(std::move(value)); return *this;}

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline ListClusterOperationsV2Result& AddClusterOperationInfoList(const ClusterOperationV2Summary& value) { m_clusterOperationInfoList.push_back(value); return *this; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
     */
    inline ListClusterOperationsV2Result& AddClusterOperationInfoList(ClusterOperationV2Summary&& value) { m_clusterOperationInfoList.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline ListClusterOperationsV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline ListClusterOperationsV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>If the response of ListClusterOperationsV2 is truncated, it
     * returns a NextToken in the response. This NextToken should be sent in the
     * subsequent request to ListClusterOperationsV2.</p>
     */
    inline ListClusterOperationsV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListClusterOperationsV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListClusterOperationsV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListClusterOperationsV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ClusterOperationV2Summary> m_clusterOperationInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
