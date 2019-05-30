/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KAFKA_API ListClustersResult
  {
  public:
    ListClustersResult();
    ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline const Aws::Vector<ClusterInfo>& GetClusterInfoList() const{ return m_clusterInfoList; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline void SetClusterInfoList(const Aws::Vector<ClusterInfo>& value) { m_clusterInfoList = value; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline void SetClusterInfoList(Aws::Vector<ClusterInfo>&& value) { m_clusterInfoList = std::move(value); }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersResult& WithClusterInfoList(const Aws::Vector<ClusterInfo>& value) { SetClusterInfoList(value); return *this;}

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersResult& WithClusterInfoList(Aws::Vector<ClusterInfo>&& value) { SetClusterInfoList(std::move(value)); return *this;}

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersResult& AddClusterInfoList(const ClusterInfo& value) { m_clusterInfoList.push_back(value); return *this; }

    /**
     * 
            <p>Information on each of the MSK clusters in the response.</p>
   
     *      
     */
    inline ListClustersResult& AddClusterInfoList(ClusterInfo&& value) { m_clusterInfoList.push_back(std::move(value)); return *this; }


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
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a ListClusters
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of clusters, provide this token in your next request.</p>
 
     *        
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ClusterInfo> m_clusterInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
