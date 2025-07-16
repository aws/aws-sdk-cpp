/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>A condensed representation of a browser session in Amazon Bedrock. This
   * structure contains key information about a browser session, including
   * identifiers, status, and timestamps, without the full details of the session
   * configuration and streams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserSessionSummary">AWS
   * API Reference</a></p>
   */
  class BrowserSessionSummary
  {
  public:
    AWS_BEDROCKAGENTCORE_API BrowserSessionSummary() = default;
    AWS_BEDROCKAGENTCORE_API BrowserSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API BrowserSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the browser associated with the session. This
     * identifier specifies which browser environment is used for the session.</p>
     */
    inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
    inline bool BrowserIdentifierHasBeenSet() const { return m_browserIdentifierHasBeenSet; }
    template<typename BrowserIdentifierT = Aws::String>
    void SetBrowserIdentifier(BrowserIdentifierT&& value) { m_browserIdentifierHasBeenSet = true; m_browserIdentifier = std::forward<BrowserIdentifierT>(value); }
    template<typename BrowserIdentifierT = Aws::String>
    BrowserSessionSummary& WithBrowserIdentifier(BrowserIdentifierT&& value) { SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the browser session. This identifier is used in
     * operations that interact with the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    BrowserSessionSummary& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the browser session. This name helps identify and manage the
     * session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BrowserSessionSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the browser session. Possible values include ACTIVE,
     * STOPPING, and STOPPED.</p>
     */
    inline BrowserSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BrowserSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BrowserSessionSummary& WithStatus(BrowserSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the browser session was created. This value is in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BrowserSessionSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the browser session was last updated. This value is in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    BrowserSessionSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserIdentifier;
    bool m_browserIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BrowserSessionStatus m_status{BrowserSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
