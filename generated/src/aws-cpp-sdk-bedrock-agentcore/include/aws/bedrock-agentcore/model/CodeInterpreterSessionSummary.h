/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterSessionStatus.h>
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
   * <p>A condensed representation of a code interpreter session in Amazon Bedrock.
   * This structure contains key information about a code interpreter session,
   * including identifiers, status, and timestamps, without the full details of the
   * session configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CodeInterpreterSessionSummary">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterSessionSummary
  {
  public:
    AWS_BEDROCKAGENTCORE_API CodeInterpreterSessionSummary() = default;
    AWS_BEDROCKAGENTCORE_API CodeInterpreterSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API CodeInterpreterSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the code interpreter associated with the session.
     * This identifier specifies which code interpreter environment is used for the
     * session.</p>
     */
    inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
    inline bool CodeInterpreterIdentifierHasBeenSet() const { return m_codeInterpreterIdentifierHasBeenSet; }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { m_codeInterpreterIdentifierHasBeenSet = true; m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value); }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    CodeInterpreterSessionSummary& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the code interpreter session. This identifier is
     * used in operations that interact with the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    CodeInterpreterSessionSummary& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the code interpreter session. This name helps identify and manage
     * the session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CodeInterpreterSessionSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code interpreter session. Possible values include
     * ACTIVE, STOPPING, and STOPPED.</p>
     */
    inline CodeInterpreterSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CodeInterpreterSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CodeInterpreterSessionSummary& WithStatus(CodeInterpreterSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter session was created. This value is in
     * ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CodeInterpreterSessionSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter session was last updated. This value
     * is in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CodeInterpreterSessionSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterIdentifier;
    bool m_codeInterpreterIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CodeInterpreterSessionStatus m_status{CodeInterpreterSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
