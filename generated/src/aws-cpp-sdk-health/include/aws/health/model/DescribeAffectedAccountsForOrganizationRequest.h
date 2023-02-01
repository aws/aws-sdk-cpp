/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeAffectedAccountsForOrganizationRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAffectedAccountsForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline DescribeAffectedAccountsForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
