/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetVpnConnectionDeviceTypesRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetVpnConnectionDeviceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpnConnectionDeviceTypes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The maximum number of results returned by
     * <code>GetVpnConnectionDeviceTypes</code> in paginated output. When this
     * parameter is used, <code>GetVpnConnectionDeviceTypes</code> only returns
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>GetVpnConnectionDeviceTypes</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 200 and 1000. If this parameter is not used, then
     * <code>GetVpnConnectionDeviceTypes</code> returns all results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results returned by
     * <code>GetVpnConnectionDeviceTypes</code> in paginated output. When this
     * parameter is used, <code>GetVpnConnectionDeviceTypes</code> only returns
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>GetVpnConnectionDeviceTypes</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 200 and 1000. If this parameter is not used, then
     * <code>GetVpnConnectionDeviceTypes</code> returns all results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results returned by
     * <code>GetVpnConnectionDeviceTypes</code> in paginated output. When this
     * parameter is used, <code>GetVpnConnectionDeviceTypes</code> only returns
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>GetVpnConnectionDeviceTypes</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 200 and 1000. If this parameter is not used, then
     * <code>GetVpnConnectionDeviceTypes</code> returns all results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results returned by
     * <code>GetVpnConnectionDeviceTypes</code> in paginated output. When this
     * parameter is used, <code>GetVpnConnectionDeviceTypes</code> only returns
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>GetVpnConnectionDeviceTypes</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 200 and 1000. If this parameter is not used, then
     * <code>GetVpnConnectionDeviceTypes</code> returns all results.</p>
     */
    inline GetVpnConnectionDeviceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline GetVpnConnectionDeviceTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline GetVpnConnectionDeviceTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>GetVpnConnectionDeviceTypes</code> request where <code>MaxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>NextToken</code> value. This value is null when there are no more results
     * to return. </p>
     */
    inline GetVpnConnectionDeviceTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetVpnConnectionDeviceTypesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
