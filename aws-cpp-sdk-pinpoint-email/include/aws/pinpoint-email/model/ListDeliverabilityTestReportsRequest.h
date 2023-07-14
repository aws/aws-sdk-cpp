﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to list all of the predictive inbox placement tests that you've
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDeliverabilityTestReportsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListDeliverabilityTestReportsRequest : public PinpointEmailRequest
  {
  public:
    ListDeliverabilityTestReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeliverabilityTestReports"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
