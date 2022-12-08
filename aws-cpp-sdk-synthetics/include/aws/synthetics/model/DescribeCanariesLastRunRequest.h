/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class DescribeCanariesLastRunRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API DescribeCanariesLastRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCanariesLastRun"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeCanariesLastRunRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeLastRun</code> operation. If you omit this parameter, the
     * default of 100 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeLastRun</code> operation. If you omit this parameter, the
     * default of 100 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeLastRun</code> operation. If you omit this parameter, the
     * default of 100 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeLastRun</code> operation. If you omit this parameter, the
     * default of 100 is used.</p>
     */
    inline DescribeCanariesLastRunRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline DescribeCanariesLastRunRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline DescribeCanariesLastRunRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline DescribeCanariesLastRunRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline DescribeCanariesLastRunRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>Use this parameter to return only canaries that match the names that you
     * specify here. You can specify as many as five canary names.</p> <p>If you
     * specify this parameter, the operation is successful only if you have
     * authorization to view all the canaries that you specify in your request. If you
     * do not have permission to view any of the canaries, the request fails with a 403
     * response.</p> <p>You are required to use the <code>Names</code> parameter if you
     * are logged on to a user or role that has an IAM policy that restricts which
     * canaries that you are allowed to view. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
     * Limiting a user to viewing specific canaries</a>.</p>
     */
    inline DescribeCanariesLastRunRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
