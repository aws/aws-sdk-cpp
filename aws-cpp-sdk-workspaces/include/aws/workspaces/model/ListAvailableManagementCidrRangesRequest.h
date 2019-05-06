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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API ListAvailableManagementCidrRangesRequest : public WorkSpacesRequest
  {
  public:
    ListAvailableManagementCidrRangesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAvailableManagementCidrRanges"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline const Aws::String& GetManagementCidrRangeConstraint() const{ return m_managementCidrRangeConstraint; }

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline bool ManagementCidrRangeConstraintHasBeenSet() const { return m_managementCidrRangeConstraintHasBeenSet; }

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline void SetManagementCidrRangeConstraint(const Aws::String& value) { m_managementCidrRangeConstraintHasBeenSet = true; m_managementCidrRangeConstraint = value; }

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline void SetManagementCidrRangeConstraint(Aws::String&& value) { m_managementCidrRangeConstraintHasBeenSet = true; m_managementCidrRangeConstraint = std::move(value); }

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline void SetManagementCidrRangeConstraint(const char* value) { m_managementCidrRangeConstraintHasBeenSet = true; m_managementCidrRangeConstraint.assign(value); }

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithManagementCidrRangeConstraint(const Aws::String& value) { SetManagementCidrRangeConstraint(value); return *this;}

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithManagementCidrRangeConstraint(Aws::String&& value) { SetManagementCidrRangeConstraint(std::move(value)); return *this;}

    /**
     * <p>The IP address range to search. Specify an IP address range that is
     * compatible with your network and in CIDR notation (that is, specify the range as
     * an IPv4 CIDR block).</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithManagementCidrRangeConstraint(const char* value) { SetManagementCidrRangeConstraint(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline ListAvailableManagementCidrRangesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_managementCidrRangeConstraint;
    bool m_managementCidrRangeConstraintHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
