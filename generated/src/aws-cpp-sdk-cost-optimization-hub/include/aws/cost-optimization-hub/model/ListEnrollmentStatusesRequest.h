/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

  /**
   */
  class ListEnrollmentStatusesRequest : public CostOptimizationHubRequest
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ListEnrollmentStatusesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnrollmentStatuses"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline ListEnrollmentStatusesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline ListEnrollmentStatusesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of a member account in the organization.</p>
     */
    inline ListEnrollmentStatusesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Indicates whether to return the enrollment status for the organization.</p>
     */
    inline bool GetIncludeOrganizationInfo() const{ return m_includeOrganizationInfo; }

    /**
     * <p>Indicates whether to return the enrollment status for the organization.</p>
     */
    inline bool IncludeOrganizationInfoHasBeenSet() const { return m_includeOrganizationInfoHasBeenSet; }

    /**
     * <p>Indicates whether to return the enrollment status for the organization.</p>
     */
    inline void SetIncludeOrganizationInfo(bool value) { m_includeOrganizationInfoHasBeenSet = true; m_includeOrganizationInfo = value; }

    /**
     * <p>Indicates whether to return the enrollment status for the organization.</p>
     */
    inline ListEnrollmentStatusesRequest& WithIncludeOrganizationInfo(bool value) { SetIncludeOrganizationInfo(value); return *this;}


    /**
     * <p>The maximum number of objects that are returned for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that are returned for the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that are returned for the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that are returned for the request.</p>
     */
    inline ListEnrollmentStatusesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_includeOrganizationInfo;
    bool m_includeOrganizationInfoHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
