/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeDeclarativePoliciesReportsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeDeclarativePoliciesReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeclarativePoliciesReports"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeDeclarativePoliciesReportsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeDeclarativePoliciesReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDeclarativePoliciesReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDeclarativePoliciesReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDeclarativePoliciesReportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more report IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReportIds() const{ return m_reportIds; }
    inline bool ReportIdsHasBeenSet() const { return m_reportIdsHasBeenSet; }
    inline void SetReportIds(const Aws::Vector<Aws::String>& value) { m_reportIdsHasBeenSet = true; m_reportIds = value; }
    inline void SetReportIds(Aws::Vector<Aws::String>&& value) { m_reportIdsHasBeenSet = true; m_reportIds = std::move(value); }
    inline DescribeDeclarativePoliciesReportsRequest& WithReportIds(const Aws::Vector<Aws::String>& value) { SetReportIds(value); return *this;}
    inline DescribeDeclarativePoliciesReportsRequest& WithReportIds(Aws::Vector<Aws::String>&& value) { SetReportIds(std::move(value)); return *this;}
    inline DescribeDeclarativePoliciesReportsRequest& AddReportIds(const Aws::String& value) { m_reportIdsHasBeenSet = true; m_reportIds.push_back(value); return *this; }
    inline DescribeDeclarativePoliciesReportsRequest& AddReportIds(Aws::String&& value) { m_reportIdsHasBeenSet = true; m_reportIds.push_back(std::move(value)); return *this; }
    inline DescribeDeclarativePoliciesReportsRequest& AddReportIds(const char* value) { m_reportIdsHasBeenSet = true; m_reportIds.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_reportIds;
    bool m_reportIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
