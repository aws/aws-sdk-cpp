/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Service.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetServiceResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API GetServiceResult();
    AWS_APPLICATIONSIGNALS_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing information about the service.</p>
     */
    inline const Service& GetService() const{ return m_service; }
    inline void SetService(const Service& value) { m_service = value; }
    inline void SetService(Service&& value) { m_service = std::move(value); }
    inline GetServiceResult& WithService(const Service& value) { SetService(value); return *this;}
    inline GetServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the data included in the response. In a raw HTTP Query API,
     * it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code>.</p> <p>This displays the time that Application Signals
     * used for the request. It might not match your request exactly, because it was
     * rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetServiceResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetServiceResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the data included in the response. In a raw HTTP Query API,
     * it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code>.</p> <p>This displays the time that Application Signals
     * used for the request. It might not match your request exactly, because it was
     * rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetServiceResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetServiceResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string-to-string maps that each contain information about one log
     * group associated with this service. Each string-to-string map includes the
     * following fields:</p> <ul> <li> <p> <code>"Type": "AWS::Resource"</code> </p>
     * </li> <li> <p> <code>"ResourceType": "AWS::Logs::LogGroup"</code> </p> </li>
     * <li> <p> <code>"Identifier": "<i>name-of-log-group</i>"</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetLogGroupReferences() const{ return m_logGroupReferences; }
    inline void SetLogGroupReferences(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_logGroupReferences = value; }
    inline void SetLogGroupReferences(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_logGroupReferences = std::move(value); }
    inline GetServiceResult& WithLogGroupReferences(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetLogGroupReferences(value); return *this;}
    inline GetServiceResult& WithLogGroupReferences(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetLogGroupReferences(std::move(value)); return *this;}
    inline GetServiceResult& AddLogGroupReferences(const Aws::Map<Aws::String, Aws::String>& value) { m_logGroupReferences.push_back(value); return *this; }
    inline GetServiceResult& AddLogGroupReferences(Aws::Map<Aws::String, Aws::String>&& value) { m_logGroupReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Service m_service;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_logGroupReferences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
