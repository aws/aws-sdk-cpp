/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationSignals
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServicesResult() = default;
    AWS_APPLICATIONSIGNALS_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The start of the time period that the returned information applies to. When
     * used in a raw HTTP Query API, it is formatted as be epoch time in seconds. For
     * example: <code>1698778057</code> </p> <p>This displays the time that Application
     * Signals used for the request. It might not match your request exactly, because
     * it was rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ListServicesResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time period that the returned information applies to. When
     * used in a raw HTTP Query API, it is formatted as be epoch time in seconds. For
     * example: <code>1698778057</code> </p> <p>This displays the time that Application
     * Signals used for the request. It might not match your request exactly, because
     * it was rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ListServicesResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains some information about
     * a service. To get complete information about a service, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetService.html">GetService</a>.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServiceSummaries() const { return m_serviceSummaries; }
    template<typename ServiceSummariesT = Aws::Vector<ServiceSummary>>
    void SetServiceSummaries(ServiceSummariesT&& value) { m_serviceSummariesHasBeenSet = true; m_serviceSummaries = std::forward<ServiceSummariesT>(value); }
    template<typename ServiceSummariesT = Aws::Vector<ServiceSummary>>
    ListServicesResult& WithServiceSummaries(ServiceSummariesT&& value) { SetServiceSummaries(std::forward<ServiceSummariesT>(value)); return *this;}
    template<typename ServiceSummariesT = ServiceSummary>
    ListServicesResult& AddServiceSummaries(ServiceSummariesT&& value) { m_serviceSummariesHasBeenSet = true; m_serviceSummaries.emplace_back(std::forward<ServiceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of
     * services.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<ServiceSummary> m_serviceSummaries;
    bool m_serviceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
