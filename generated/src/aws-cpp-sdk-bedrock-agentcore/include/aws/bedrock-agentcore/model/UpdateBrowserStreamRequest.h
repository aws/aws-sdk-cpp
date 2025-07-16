/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/StreamUpdate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class UpdateBrowserStreamRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API UpdateBrowserStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrowserStream"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the browser.</p>
     */
    inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
    inline bool BrowserIdentifierHasBeenSet() const { return m_browserIdentifierHasBeenSet; }
    template<typename BrowserIdentifierT = Aws::String>
    void SetBrowserIdentifier(BrowserIdentifierT&& value) { m_browserIdentifierHasBeenSet = true; m_browserIdentifier = std::forward<BrowserIdentifierT>(value); }
    template<typename BrowserIdentifierT = Aws::String>
    UpdateBrowserStreamRequest& WithBrowserIdentifier(BrowserIdentifierT&& value) { SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the browser session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UpdateBrowserStreamRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update to apply to the browser stream.</p>
     */
    inline const StreamUpdate& GetStreamUpdate() const { return m_streamUpdate; }
    inline bool StreamUpdateHasBeenSet() const { return m_streamUpdateHasBeenSet; }
    template<typename StreamUpdateT = StreamUpdate>
    void SetStreamUpdate(StreamUpdateT&& value) { m_streamUpdateHasBeenSet = true; m_streamUpdate = std::forward<StreamUpdateT>(value); }
    template<typename StreamUpdateT = StreamUpdate>
    UpdateBrowserStreamRequest& WithStreamUpdate(StreamUpdateT&& value) { SetStreamUpdate(std::forward<StreamUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateBrowserStreamRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserIdentifier;
    bool m_browserIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    StreamUpdate m_streamUpdate;
    bool m_streamUpdateHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
