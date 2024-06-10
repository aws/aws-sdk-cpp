/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class ListServicesRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONSIGNALS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline ListServicesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period to retrieve information about. When used in a
     * raw HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline ListServicesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline ListServicesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period to retrieve information about. When used in a raw
     * HTTP Query API, it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code> </p>
     */
    inline ListServicesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default of 50 is used. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default of 50 is used. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default of 50 is used. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return in one operation. If you omit this
     * parameter, the default of 50 is used. </p>
     */
    inline ListServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline ListServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline ListServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of services.</p>
     */
    inline ListServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
