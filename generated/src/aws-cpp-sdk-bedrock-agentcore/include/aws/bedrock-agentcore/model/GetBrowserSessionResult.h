/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore/model/ViewPort.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStatus.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStream.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class GetBrowserSessionResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetBrowserSessionResult() = default;
    AWS_BEDROCKAGENTCORE_API GetBrowserSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API GetBrowserSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the browser.</p>
     */
    inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
    template<typename BrowserIdentifierT = Aws::String>
    void SetBrowserIdentifier(BrowserIdentifierT&& value) { m_browserIdentifierHasBeenSet = true; m_browserIdentifier = std::forward<BrowserIdentifierT>(value); }
    template<typename BrowserIdentifierT = Aws::String>
    GetBrowserSessionResult& WithBrowserIdentifier(BrowserIdentifierT&& value) { SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the browser session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetBrowserSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the browser session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetBrowserSessionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the browser session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetBrowserSessionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ViewPort& GetViewPort() const { return m_viewPort; }
    template<typename ViewPortT = ViewPort>
    void SetViewPort(ViewPortT&& value) { m_viewPortHasBeenSet = true; m_viewPort = std::forward<ViewPortT>(value); }
    template<typename ViewPortT = ViewPort>
    GetBrowserSessionResult& WithViewPort(ViewPortT&& value) { SetViewPort(std::forward<ViewPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout period for the browser session in seconds.</p>
     */
    inline int GetSessionTimeoutSeconds() const { return m_sessionTimeoutSeconds; }
    inline void SetSessionTimeoutSeconds(int value) { m_sessionTimeoutSecondsHasBeenSet = true; m_sessionTimeoutSeconds = value; }
    inline GetBrowserSessionResult& WithSessionTimeoutSeconds(int value) { SetSessionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the browser session. Possible values include ACTIVE,
     * STOPPING, and STOPPED.</p>
     */
    inline BrowserSessionStatus GetStatus() const { return m_status; }
    inline void SetStatus(BrowserSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBrowserSessionResult& WithStatus(BrowserSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streams associated with this browser session. These include the
     * automation stream and live view stream.</p>
     */
    inline const BrowserSessionStream& GetStreams() const { return m_streams; }
    template<typename StreamsT = BrowserSessionStream>
    void SetStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams = std::forward<StreamsT>(value); }
    template<typename StreamsT = BrowserSessionStream>
    GetBrowserSessionResult& WithStreams(StreamsT&& value) { SetStreams(std::forward<StreamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact containing the session replay information.</p>
     */
    inline const Aws::String& GetSessionReplayArtifact() const { return m_sessionReplayArtifact; }
    template<typename SessionReplayArtifactT = Aws::String>
    void SetSessionReplayArtifact(SessionReplayArtifactT&& value) { m_sessionReplayArtifactHasBeenSet = true; m_sessionReplayArtifact = std::forward<SessionReplayArtifactT>(value); }
    template<typename SessionReplayArtifactT = Aws::String>
    GetBrowserSessionResult& WithSessionReplayArtifact(SessionReplayArtifactT&& value) { SetSessionReplayArtifact(std::forward<SessionReplayArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the browser session was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetBrowserSessionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBrowserSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserIdentifier;
    bool m_browserIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ViewPort m_viewPort;
    bool m_viewPortHasBeenSet = false;

    int m_sessionTimeoutSeconds{0};
    bool m_sessionTimeoutSecondsHasBeenSet = false;

    BrowserSessionStatus m_status{BrowserSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    BrowserSessionStream m_streams;
    bool m_streamsHasBeenSet = false;

    Aws::String m_sessionReplayArtifact;
    bool m_sessionReplayArtifactHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
