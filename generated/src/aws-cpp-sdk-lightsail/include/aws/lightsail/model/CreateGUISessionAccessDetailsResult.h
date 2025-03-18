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
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult() = default;
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateGUISessionAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    CreateGUISessionAccessDetailsResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGUISessionAccessDetailsResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of completion for the operation.</p>
     */
    inline int GetPercentageComplete() const { return m_percentageComplete; }
    inline void SetPercentageComplete(int value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }
    inline CreateGUISessionAccessDetailsResult& WithPercentageComplete(int value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the operation failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    CreateGUISessionAccessDetailsResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the specified Amazon DCV GUI session.</p>
     */
    inline const Aws::Vector<Session>& GetSessions() const { return m_sessions; }
    template<typename SessionsT = Aws::Vector<Session>>
    void SetSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions = std::forward<SessionsT>(value); }
    template<typename SessionsT = Aws::Vector<Session>>
    CreateGUISessionAccessDetailsResult& WithSessions(SessionsT&& value) { SetSessions(std::forward<SessionsT>(value)); return *this;}
    template<typename SessionsT = Session>
    CreateGUISessionAccessDetailsResult& AddSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions.emplace_back(std::forward<SessionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGUISessionAccessDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_percentageComplete{0};
    bool m_percentageCompleteHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<Session> m_sessions;
    bool m_sessionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
