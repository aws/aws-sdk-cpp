/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the
   * <code>DescribeReservedInstances</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstancesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstancesRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstances"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const{ return m_reservedInstanceId; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline bool ReservedInstanceIdHasBeenSet() const { return m_reservedInstanceIdHasBeenSet; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline void SetReservedInstanceId(const Aws::String& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = value; }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline void SetReservedInstanceId(Aws::String&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::move(value); }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline void SetReservedInstanceId(const char* value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId.assign(value); }

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline DescribeReservedInstancesRequest& WithReservedInstanceId(const Aws::String& value) { SetReservedInstanceId(value); return *this;}

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline DescribeReservedInstancesRequest& WithReservedInstanceId(Aws::String&& value) { SetReservedInstanceId(std::move(value)); return *this;}

    /**
     * <p>The reserved instance identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reserved OpenSearch instance
     * ID.</p>
     */
    inline DescribeReservedInstancesRequest& WithReservedInstanceId(const char* value) { SetReservedInstanceId(value); return *this;}


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline DescribeReservedInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline DescribeReservedInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline DescribeReservedInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>DescribeReservedInstances</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>DescribeReservedInstances</code> operations, which returns
     * results in the next page.</p>
     */
    inline DescribeReservedInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
