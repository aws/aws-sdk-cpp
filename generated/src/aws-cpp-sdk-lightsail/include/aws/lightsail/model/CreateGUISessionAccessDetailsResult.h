/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Status.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Session.h>
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
namespace Lightsail
{
namespace Model
{
  class CreateGUISessionAccessDetailsResult
  {
  public:
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult();
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }
    inline CreateGUISessionAccessDetailsResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline CreateGUISessionAccessDetailsResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of completion for the operation.</p>
     */
    inline int GetPercentageComplete() const{ return m_percentageComplete; }
    inline void SetPercentageComplete(int value) { m_percentageComplete = value; }
    inline CreateGUISessionAccessDetailsResult& WithPercentageComplete(int value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the operation failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline CreateGUISessionAccessDetailsResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the specified NICE DCV GUI session.</p>
     */
    inline const Aws::Vector<Session>& GetSessions() const{ return m_sessions; }
    inline void SetSessions(const Aws::Vector<Session>& value) { m_sessions = value; }
    inline void SetSessions(Aws::Vector<Session>&& value) { m_sessions = std::move(value); }
    inline CreateGUISessionAccessDetailsResult& WithSessions(const Aws::Vector<Session>& value) { SetSessions(value); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithSessions(Aws::Vector<Session>&& value) { SetSessions(std::move(value)); return *this;}
    inline CreateGUISessionAccessDetailsResult& AddSessions(const Session& value) { m_sessions.push_back(value); return *this; }
    inline CreateGUISessionAccessDetailsResult& AddSessions(Session&& value) { m_sessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGUISessionAccessDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGUISessionAccessDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;

    Status m_status;

    int m_percentageComplete;

    Aws::String m_failureReason;

    Aws::Vector<Session> m_sessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
