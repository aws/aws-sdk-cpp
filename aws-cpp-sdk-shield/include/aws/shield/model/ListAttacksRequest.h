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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API ListAttacksRequest : public ShieldRequest
  {
  public:
    ListAttacksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttacks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline ListAttacksRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline ListAttacksRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked. If this is
     * left blank, all applicable resources for this account will be included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline const TimeRange& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline void SetStartTime(const TimeRange& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline void SetStartTime(TimeRange&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline ListAttacksRequest& WithStartTime(const TimeRange& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The sample request above indicates a
     * <code>number</code> type because the default used by WAF is Unix time in
     * seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline ListAttacksRequest& WithStartTime(TimeRange&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline const TimeRange& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline void SetEndTime(const TimeRange& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline void SetEndTime(TimeRange&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline ListAttacksRequest& WithEndTime(const TimeRange& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The sample request above indicates a <code>number</code> type because the
     * default used by WAF is Unix time in seconds. However any valid <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp
     * format</a> is allowed. </p>
     */
    inline ListAttacksRequest& WithEndTime(TimeRange&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline ListAttacksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline ListAttacksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListAttacksRequest.NextMarker</code> value from a previous call to
     * <code>ListAttacksRequest</code>. Pass null if this is the first call.</p>
     */
    inline ListAttacksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of <a>AttackSummary</a> objects to be returned. If this is
     * left blank, the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>AttackSummary</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>AttackSummary</a>
     * objects yet to return. If there are more <a>AttackSummary</a> objects to return,
     * AWS WAF will always also return a <code>NextToken</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of <a>AttackSummary</a> objects to be returned. If this is
     * left blank, the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>AttackSummary</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>AttackSummary</a>
     * objects yet to return. If there are more <a>AttackSummary</a> objects to return,
     * AWS WAF will always also return a <code>NextToken</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of <a>AttackSummary</a> objects to be returned. If this is
     * left blank, the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>AttackSummary</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>AttackSummary</a>
     * objects yet to return. If there are more <a>AttackSummary</a> objects to return,
     * AWS WAF will always also return a <code>NextToken</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of <a>AttackSummary</a> objects to be returned. If this is
     * left blank, the first 20 results will be returned.</p> <p>This is a maximum
     * value; it is possible that AWS WAF will return the results in smaller batches.
     * That is, the number of <a>AttackSummary</a> objects returned could be less than
     * <code>MaxResults</code>, even if there are still more <a>AttackSummary</a>
     * objects yet to return. If there are more <a>AttackSummary</a> objects to return,
     * AWS WAF will always also return a <code>NextToken</code>.</p>
     */
    inline ListAttacksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;

    TimeRange m_startTime;
    bool m_startTimeHasBeenSet;

    TimeRange m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
