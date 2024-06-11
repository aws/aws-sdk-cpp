/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeReservedElasticsearchInstancesRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedElasticsearchInstances"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved Elasticsearch instance
     * ID.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const{ return m_reservedElasticsearchInstanceId; }
    inline bool ReservedElasticsearchInstanceIdHasBeenSet() const { return m_reservedElasticsearchInstanceIdHasBeenSet; }
    inline void SetReservedElasticsearchInstanceId(const Aws::String& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = value; }
    inline void SetReservedElasticsearchInstanceId(Aws::String&& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = std::move(value); }
    inline void SetReservedElasticsearchInstanceId(const char* value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId.assign(value); }
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(const Aws::String& value) { SetReservedElasticsearchInstanceId(value); return *this;}
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(Aws::String&& value) { SetReservedElasticsearchInstanceId(std::move(value)); return *this;}
    inline DescribeReservedElasticsearchInstancesRequest& WithReservedElasticsearchInstanceId(const char* value) { SetReservedElasticsearchInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReservedElasticsearchInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeReservedElasticsearchInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceId;
    bool m_reservedElasticsearchInstanceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
