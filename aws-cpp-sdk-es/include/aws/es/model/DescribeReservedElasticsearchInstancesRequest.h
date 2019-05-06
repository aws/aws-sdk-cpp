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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for parameters to
   * <code>DescribeReservedElasticsearchInstances</code></p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstancesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesRequest : public ElasticsearchServiceRequest
  {
  public:
    DescribeReservedElasticsearchInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedElasticsearchInstances"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const{ return m_reservedElasticsearchInstanceId; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline bool ReservedElasticsearchInstanceIdHasBeenSet() const { return m_reservedElasticsearchInstanceIdHasBeenSet; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline void SetReservedElasticsearchInstanceId(const Aws::String& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = value; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline void SetReservedElasticsearchInstanceId(Aws::String&& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = std::move(value); }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline void SetReservedElasticsearchInstanceId(const char* value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId.assign(value); }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(const Aws::String& value) { SetReservedElasticsearchInstanceId(value); return *this;}

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(Aws::String&& value) { SetReservedElasticsearchInstanceId(std::move(value)); return *this;}

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(const char* value) { SetReservedElasticsearchInstanceId(value); return *this;}


    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_reservedElasticsearchInstanceId;
    bool m_reservedElasticsearchInstanceIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
