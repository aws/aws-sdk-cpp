/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterOperationInfo.h>
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
  class ListClusterOperationsResult
  {
  public:
    AWS_KAFKA_API ListClusterOperationsResult();
    AWS_KAFKA_API ListClusterOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClusterOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline const Aws::Vector<ClusterOperationInfo>& GetClusterOperationInfoList() const{ return m_clusterOperationInfoList; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline void SetClusterOperationInfoList(const Aws::Vector<ClusterOperationInfo>& value) { m_clusterOperationInfoList = value; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline void SetClusterOperationInfoList(Aws::Vector<ClusterOperationInfo>&& value) { m_clusterOperationInfoList = std::move(value); }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline ListClusterOperationsResult& WithClusterOperationInfoList(const Aws::Vector<ClusterOperationInfo>& value) { SetClusterOperationInfoList(value); return *this;}

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline ListClusterOperationsResult& WithClusterOperationInfoList(Aws::Vector<ClusterOperationInfo>&& value) { SetClusterOperationInfoList(std::move(value)); return *this;}

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline ListClusterOperationsResult& AddClusterOperationInfoList(const ClusterOperationInfo& value) { m_clusterOperationInfoList.push_back(value); return *this; }

    /**
     * 
            <p>An array of cluster operation information objects.</p>
         
     */
    inline ListClusterOperationsResult& AddClusterOperationInfoList(ClusterOperationInfo&& value) { m_clusterOperationInfoList.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline ListClusterOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline ListClusterOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>If the response of ListClusterOperations is truncated, it
     * returns a NextToken in the response. This Nexttoken should be sent in the
     * subsequent request to ListClusterOperations.</p>
         
     */
    inline ListClusterOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ClusterOperationInfo> m_clusterOperationInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
