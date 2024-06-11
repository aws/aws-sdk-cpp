﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterInfo.h>
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
  class ListClustersResult
  {
  public:
    AWS_KAFKA_API ListClustersResult();
    AWS_KAFKA_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline const Aws::Vector<ClusterInfo>& GetClusterInfoList() const{ return m_clusterInfoList; }
    inline void SetClusterInfoList(const Aws::Vector<ClusterInfo>& value) { m_clusterInfoList = value; }
    inline void SetClusterInfoList(Aws::Vector<ClusterInfo>&& value) { m_clusterInfoList = std::move(value); }
    inline ListClustersResult& WithClusterInfoList(const Aws::Vector<ClusterInfo>& value) { SetClusterInfoList(value); return *this;}
    inline ListClustersResult& WithClusterInfoList(Aws::Vector<ClusterInfo>&& value) { SetClusterInfoList(std::move(value)); return *this;}
    inline ListClustersResult& AddClusterInfoList(const ClusterInfo& value) { m_clusterInfoList.push_back(value); return *this; }
    inline ListClustersResult& AddClusterInfoList(ClusterInfo&& value) { m_clusterInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterInfo> m_clusterInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
