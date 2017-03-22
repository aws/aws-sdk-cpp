/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API GetTraceSummariesRequest : public XRayRequest
  {
  public:
    GetTraceSummariesRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline GetTraceSummariesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time frame for which to retrieve traces.</p>
     */
    inline GetTraceSummariesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline GetTraceSummariesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time frame for which to retrieve traces.</p>
     */
    inline GetTraceSummariesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>Set to <code>true</code> to get summaries for only a subset of available
     * traces.</p>
     */
    inline bool GetSampling() const{ return m_sampling; }

    /**
     * <p>Set to <code>true</code> to get summaries for only a subset of available
     * traces.</p>
     */
    inline void SetSampling(bool value) { m_samplingHasBeenSet = true; m_sampling = value; }

    /**
     * <p>Set to <code>true</code> to get summaries for only a subset of available
     * traces.</p>
     */
    inline GetTraceSummariesRequest& WithSampling(bool value) { SetSampling(value); return *this;}

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline GetTraceSummariesRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline GetTraceSummariesRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>Specify a filter expression to retrieve trace summaries for services or
     * requests that meet certain requirements.</p>
     */
    inline GetTraceSummariesRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline GetTraceSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline GetTraceSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results.</p>
     */
    inline GetTraceSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    bool m_sampling;
    bool m_samplingHasBeenSet;
    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
