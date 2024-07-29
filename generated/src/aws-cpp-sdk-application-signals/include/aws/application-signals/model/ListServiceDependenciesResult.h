/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceDependency.h>
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
  class ListServiceDependenciesResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceDependenciesResult();
    AWS_APPLICATIONSIGNALS_API ListServiceDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServiceDependenciesResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListServiceDependenciesResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
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
    inline ListServiceDependenciesResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListServiceDependenciesResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array, where each object in the array contains information about one of
     * the dependencies of this service.</p>
     */
    inline const Aws::Vector<ServiceDependency>& GetServiceDependencies() const{ return m_serviceDependencies; }
    inline void SetServiceDependencies(const Aws::Vector<ServiceDependency>& value) { m_serviceDependencies = value; }
    inline void SetServiceDependencies(Aws::Vector<ServiceDependency>&& value) { m_serviceDependencies = std::move(value); }
    inline ListServiceDependenciesResult& WithServiceDependencies(const Aws::Vector<ServiceDependency>& value) { SetServiceDependencies(value); return *this;}
    inline ListServiceDependenciesResult& WithServiceDependencies(Aws::Vector<ServiceDependency>&& value) { SetServiceDependencies(std::move(value)); return *this;}
    inline ListServiceDependenciesResult& AddServiceDependencies(const ServiceDependency& value) { m_serviceDependencies.push_back(value); return *this; }
    inline ListServiceDependenciesResult& AddServiceDependencies(ServiceDependency&& value) { m_serviceDependencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of service
     * dependencies.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceDependenciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceDependenciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceDependenciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceDependenciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceDependenciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceDependenciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<ServiceDependency> m_serviceDependencies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
