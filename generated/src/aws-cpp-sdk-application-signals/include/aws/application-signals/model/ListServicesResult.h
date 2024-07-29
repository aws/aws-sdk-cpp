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
    AWS_APPLICATIONSIGNALS_API ListServicesResult();
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
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline ListServicesResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListServicesResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time period that the returned information applies to. When
     * used in a raw HTTP Query API, it is formatted as be epoch time in seconds. For
     * example: <code>1698778057</code> </p> <p>This displays the time that Application
     * Signals used for the request. It might not match your request exactly, because
     * it was rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline ListServicesResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListServicesResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure contains some information about
     * a service. To get complete information about a service, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetService.html">GetService</a>.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServiceSummaries() const{ return m_serviceSummaries; }
    inline void SetServiceSummaries(const Aws::Vector<ServiceSummary>& value) { m_serviceSummaries = value; }
    inline void SetServiceSummaries(Aws::Vector<ServiceSummary>&& value) { m_serviceSummaries = std::move(value); }
    inline ListServicesResult& WithServiceSummaries(const Aws::Vector<ServiceSummary>& value) { SetServiceSummaries(value); return *this;}
    inline ListServicesResult& WithServiceSummaries(Aws::Vector<ServiceSummary>&& value) { SetServiceSummaries(std::move(value)); return *this;}
    inline ListServicesResult& AddServiceSummaries(const ServiceSummary& value) { m_serviceSummaries.push_back(value); return *this; }
    inline ListServicesResult& AddServiceSummaries(ServiceSummary&& value) { m_serviceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of
     * services.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<ServiceSummary> m_serviceSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
