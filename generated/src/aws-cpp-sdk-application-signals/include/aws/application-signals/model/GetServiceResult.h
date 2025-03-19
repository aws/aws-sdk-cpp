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
    AWS_APPLICATIONSIGNALS_API GetServiceResult() = default;
    AWS_APPLICATIONSIGNALS_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing information about the service.</p>
     */
    inline const Service& GetService() const { return m_service; }
    template<typename ServiceT = Service>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Service>
    GetServiceResult& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the data included in the response. In a raw HTTP Query API,
     * it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code>.</p> <p>This displays the time that Application Signals
     * used for the request. It might not match your request exactly, because it was
     * rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetServiceResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the data included in the response. In a raw HTTP Query API,
     * it is formatted as be epoch time in seconds. For example:
     * <code>1698778057</code>.</p> <p>This displays the time that Application Signals
     * used for the request. It might not match your request exactly, because it was
     * rounded to the nearest hour.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetServiceResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string-to-string maps that each contain information about one log
     * group associated with this service. Each string-to-string map includes the
     * following fields:</p> <ul> <li> <p> <code>"Type": "AWS::Resource"</code> </p>
     * </li> <li> <p> <code>"ResourceType": "AWS::Logs::LogGroup"</code> </p> </li>
     * <li> <p> <code>"Identifier": "<i>name-of-log-group</i>"</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetLogGroupReferences() const { return m_logGroupReferences; }
    template<typename LogGroupReferencesT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetLogGroupReferences(LogGroupReferencesT&& value) { m_logGroupReferencesHasBeenSet = true; m_logGroupReferences = std::forward<LogGroupReferencesT>(value); }
    template<typename LogGroupReferencesT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    GetServiceResult& WithLogGroupReferences(LogGroupReferencesT&& value) { SetLogGroupReferences(std::forward<LogGroupReferencesT>(value)); return *this;}
    template<typename LogGroupReferencesT = Aws::Map<Aws::String, Aws::String>>
    GetServiceResult& AddLogGroupReferences(LogGroupReferencesT&& value) { m_logGroupReferencesHasBeenSet = true; m_logGroupReferences.emplace_back(std::forward<LogGroupReferencesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Service m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_logGroupReferences;
    bool m_logGroupReferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
