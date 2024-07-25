/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceDependent.h>
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
  class ListServiceDependentsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceDependentsResult();
    AWS_APPLICATIONSIGNALS_API ListServiceDependentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceDependentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServiceDependentsResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListServiceDependentsResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
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
    inline ListServiceDependentsResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListServiceDependentsResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array, where each object in the array contains information about one of
     * the dependents of this service.</p>
     */
    inline const Aws::Vector<ServiceDependent>& GetServiceDependents() const{ return m_serviceDependents; }
    inline void SetServiceDependents(const Aws::Vector<ServiceDependent>& value) { m_serviceDependents = value; }
    inline void SetServiceDependents(Aws::Vector<ServiceDependent>&& value) { m_serviceDependents = std::move(value); }
    inline ListServiceDependentsResult& WithServiceDependents(const Aws::Vector<ServiceDependent>& value) { SetServiceDependents(value); return *this;}
    inline ListServiceDependentsResult& WithServiceDependents(Aws::Vector<ServiceDependent>&& value) { SetServiceDependents(std::move(value)); return *this;}
    inline ListServiceDependentsResult& AddServiceDependents(const ServiceDependent& value) { m_serviceDependents.push_back(value); return *this; }
    inline ListServiceDependentsResult& AddServiceDependents(ServiceDependent&& value) { m_serviceDependents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of service
     * dependents.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceDependentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceDependentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceDependentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceDependentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceDependentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceDependentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<ServiceDependent> m_serviceDependents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
