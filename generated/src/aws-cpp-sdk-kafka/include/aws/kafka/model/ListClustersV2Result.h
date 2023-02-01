/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/Cluster.h>
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
  class ListClustersV2Result
  {
  public:
    AWS_KAFKA_API ListClustersV2Result();
    AWS_KAFKA_API ListClustersV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClustersV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline const Aws::Vector<Cluster>& GetClusterInfoList() const{ return m_clusterInfoList; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline void SetClusterInfoList(const Aws::Vector<Cluster>& value) { m_clusterInfoList = value; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline void SetClusterInfoList(Aws::Vector<Cluster>&& value) { m_clusterInfoList = std::move(value); }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersV2Result& WithClusterInfoList(const Aws::Vector<Cluster>& value) { SetClusterInfoList(value); return *this;}

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersV2Result& WithClusterInfoList(Aws::Vector<Cluster>&& value) { SetClusterInfoList(std::move(value)); return *this;}

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersV2Result& AddClusterInfoList(const Cluster& value) { m_clusterInfoList.push_back(value); return *this; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersV2Result& AddClusterInfoList(Cluster&& value) { m_clusterInfoList.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline ListClustersV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline ListClustersV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline ListClustersV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Cluster> m_clusterInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
