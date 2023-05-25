/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class DescribeOrganizationConfigurationRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API DescribeOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationConfiguration"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

    AWS_GUARDDUTY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector to retrieve information about the delegated
     * administrator from.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the list action. For subsequent calls to
     * the action, fill <code>nextToken</code> in the request with the value of
     * <code>NextToken</code> from the previous response to continue listing data.</p>
     */
    inline DescribeOrganizationConfigurationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
