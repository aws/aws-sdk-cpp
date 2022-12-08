/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class ListClustersV2Request : public KafkaRequest
  {
  public:
    AWS_KAFKA_API ListClustersV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClustersV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline const Aws::String& GetClusterNameFilter() const{ return m_clusterNameFilter; }

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline bool ClusterNameFilterHasBeenSet() const { return m_clusterNameFilterHasBeenSet; }

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline void SetClusterNameFilter(const Aws::String& value) { m_clusterNameFilterHasBeenSet = true; m_clusterNameFilter = value; }

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline void SetClusterNameFilter(Aws::String&& value) { m_clusterNameFilterHasBeenSet = true; m_clusterNameFilter = std::move(value); }

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline void SetClusterNameFilter(const char* value) { m_clusterNameFilterHasBeenSet = true; m_clusterNameFilter.assign(value); }

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline ListClustersV2Request& WithClusterNameFilter(const Aws::String& value) { SetClusterNameFilter(value); return *this;}

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline ListClustersV2Request& WithClusterNameFilter(Aws::String&& value) { SetClusterNameFilter(std::move(value)); return *this;}

    /**
     * 
            <p>Specify a prefix of the names of the clusters that you want to
     * list. The service lists all the clusters whose names start with this
     * prefix.</p>
         
     */
    inline ListClustersV2Request& WithClusterNameFilter(const char* value) { SetClusterNameFilter(value); return *this;}


    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline const Aws::String& GetClusterTypeFilter() const{ return m_clusterTypeFilter; }

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline bool ClusterTypeFilterHasBeenSet() const { return m_clusterTypeFilterHasBeenSet; }

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline void SetClusterTypeFilter(const Aws::String& value) { m_clusterTypeFilterHasBeenSet = true; m_clusterTypeFilter = value; }

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline void SetClusterTypeFilter(Aws::String&& value) { m_clusterTypeFilterHasBeenSet = true; m_clusterTypeFilter = std::move(value); }

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline void SetClusterTypeFilter(const char* value) { m_clusterTypeFilterHasBeenSet = true; m_clusterTypeFilter.assign(value); }

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline ListClustersV2Request& WithClusterTypeFilter(const Aws::String& value) { SetClusterTypeFilter(value); return *this;}

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline ListClustersV2Request& WithClusterTypeFilter(Aws::String&& value) { SetClusterTypeFilter(std::move(value)); return *this;}

    /**
     * 
            <p>Specify either PROVISIONED or SERVERLESS.</p>
         
     */
    inline ListClustersV2Request& WithClusterTypeFilter(const char* value) { SetClusterTypeFilter(value); return *this;}


    /**
     * 
            <p>The maximum number of results to return in the response. If
     * there are more results, the response includes a NextToken parameter.</p>
       
     *  
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * 
            <p>The maximum number of results to return in the response. If
     * there are more results, the response includes a NextToken parameter.</p>
       
     *  
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * 
            <p>The maximum number of results to return in the response. If
     * there are more results, the response includes a NextToken parameter.</p>
       
     *  
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * 
            <p>The maximum number of results to return in the response. If
     * there are more results, the response includes a NextToken parameter.</p>
       
     *  
     */
    inline ListClustersV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline ListClustersV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline ListClustersV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of the operation
     * is truncated, the call returns NextToken in the response. 
            To get
     * the next batch, provide this token in your next request.</p>
         
     */
    inline ListClustersV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterNameFilter;
    bool m_clusterNameFilterHasBeenSet = false;

    Aws::String m_clusterTypeFilter;
    bool m_clusterTypeFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
