/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/internetmonitor/model/ClientLocation.h>
#include <aws/internetmonitor/model/InternetEventType.h>
#include <aws/internetmonitor/model/InternetEventStatus.h>
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
namespace InternetMonitor
{
namespace Model
{
  class GetInternetEventResult
  {
  public:
    AWS_INTERNETMONITOR_API GetInternetEventResult();
    AWS_INTERNETMONITOR_API GetInternetEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetInternetEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline void SetEventId(const Aws::String& value) { m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventId.assign(value); }
    inline GetInternetEventResult& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline GetInternetEventResult& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline GetInternetEventResult& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }
    inline void SetEventArn(const Aws::String& value) { m_eventArn = value; }
    inline void SetEventArn(Aws::String&& value) { m_eventArn = std::move(value); }
    inline void SetEventArn(const char* value) { m_eventArn.assign(value); }
    inline GetInternetEventResult& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}
    inline GetInternetEventResult& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}
    inline GetInternetEventResult& WithEventArn(const char* value) { SetEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the internet event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetInternetEventResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetInternetEventResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetInternetEventResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetInternetEventResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impacted location, such as a city, where clients access Amazon Web
     * Services application resources.</p>
     */
    inline const ClientLocation& GetClientLocation() const{ return m_clientLocation; }
    inline void SetClientLocation(const ClientLocation& value) { m_clientLocation = value; }
    inline void SetClientLocation(ClientLocation&& value) { m_clientLocation = std::move(value); }
    inline GetInternetEventResult& WithClientLocation(const ClientLocation& value) { SetClientLocation(value); return *this;}
    inline GetInternetEventResult& WithClientLocation(ClientLocation&& value) { SetClientLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network impairment.</p>
     */
    inline const InternetEventType& GetEventType() const{ return m_eventType; }
    inline void SetEventType(const InternetEventType& value) { m_eventType = value; }
    inline void SetEventType(InternetEventType&& value) { m_eventType = std::move(value); }
    inline GetInternetEventResult& WithEventType(const InternetEventType& value) { SetEventType(value); return *this;}
    inline GetInternetEventResult& WithEventType(InternetEventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the internet event.</p>
     */
    inline const InternetEventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline void SetEventStatus(const InternetEventStatus& value) { m_eventStatus = value; }
    inline void SetEventStatus(InternetEventStatus&& value) { m_eventStatus = std::move(value); }
    inline GetInternetEventResult& WithEventStatus(const InternetEventStatus& value) { SetEventStatus(value); return *this;}
    inline GetInternetEventResult& WithEventStatus(InternetEventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInternetEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInternetEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInternetEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;

    Aws::String m_eventArn;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_endedAt;

    ClientLocation m_clientLocation;

    InternetEventType m_eventType;

    InternetEventStatus m_eventStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
