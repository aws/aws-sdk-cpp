/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceOperation.h>
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
  class ListServiceOperationsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceOperationsResult();
    AWS_APPLICATIONSIGNALS_API ListServiceOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServiceOperationsResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListServiceOperationsResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
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
    inline ListServiceOperationsResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListServiceOperationsResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one operation of
     * this service.</p>
     */
    inline const Aws::Vector<ServiceOperation>& GetServiceOperations() const{ return m_serviceOperations; }
    inline void SetServiceOperations(const Aws::Vector<ServiceOperation>& value) { m_serviceOperations = value; }
    inline void SetServiceOperations(Aws::Vector<ServiceOperation>&& value) { m_serviceOperations = std::move(value); }
    inline ListServiceOperationsResult& WithServiceOperations(const Aws::Vector<ServiceOperation>& value) { SetServiceOperations(value); return *this;}
    inline ListServiceOperationsResult& WithServiceOperations(Aws::Vector<ServiceOperation>&& value) { SetServiceOperations(std::move(value)); return *this;}
    inline ListServiceOperationsResult& AddServiceOperations(const ServiceOperation& value) { m_serviceOperations.push_back(value); return *this; }
    inline ListServiceOperationsResult& AddServiceOperations(ServiceOperation&& value) { m_serviceOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of service
     * operations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<ServiceOperation> m_serviceOperations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
