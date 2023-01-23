/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class DescribeFlowExecutionRecordsRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DescribeFlowExecutionRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlowExecutionRecords"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeFlowExecutionRecordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
