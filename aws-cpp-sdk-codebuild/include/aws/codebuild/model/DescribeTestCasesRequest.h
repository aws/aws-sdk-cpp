/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/TestCaseFilter.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class DescribeTestCasesRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API DescribeTestCasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTestCases"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline const Aws::String& GetReportArn() const{ return m_reportArn; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(const Aws::String& value) { m_reportArnHasBeenSet = true; m_reportArn = value; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(Aws::String&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::move(value); }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(const char* value) { m_reportArnHasBeenSet = true; m_reportArn.assign(value); }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeTestCasesRequest& WithReportArn(const Aws::String& value) { SetReportArn(value); return *this;}

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeTestCasesRequest& WithReportArn(Aws::String&& value) { SetReportArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeTestCasesRequest& WithReportArn(const char* value) { SetReportArn(value); return *this;}


    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline DescribeTestCasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline DescribeTestCasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline DescribeTestCasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of paginated test cases returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>TestCase</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of paginated test cases returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>TestCase</code> objects. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of paginated test cases returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>TestCase</code> objects. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of paginated test cases returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>TestCase</code> objects. The default value is 100. </p>
     */
    inline DescribeTestCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline const TestCaseFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline void SetFilter(const TestCaseFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline void SetFilter(TestCaseFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline DescribeTestCasesRequest& WithFilter(const TestCaseFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> A <code>TestCaseFilter</code> object used to filter the returned reports.
     * </p>
     */
    inline DescribeTestCasesRequest& WithFilter(TestCaseFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_reportArn;
    bool m_reportArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TestCaseFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
