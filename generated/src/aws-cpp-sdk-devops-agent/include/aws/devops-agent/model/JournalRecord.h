/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/UserReference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a journal record containing execution details and
 * content</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/JournalRecord">AWS
 * API Reference</a></p>
 */
class JournalRecord {
 public:
  AWS_DEVOPSAGENT_API JournalRecord() = default;
  AWS_DEVOPSAGENT_API JournalRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API JournalRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing this record</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  JournalRecord& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution ID associated with this journal record</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  JournalRecord& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this journal record</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  JournalRecord& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of this journal record</p>
   */
  inline Aws::Utils::DocumentView GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Utils::Document>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Utils::Document>
  JournalRecord& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this journal record was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  JournalRecord& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of this journal record</p>
   */
  inline const Aws::String& GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  template <typename RecordTypeT = Aws::String>
  void SetRecordType(RecordTypeT&& value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = std::forward<RecordTypeT>(value);
  }
  template <typename RecordTypeT = Aws::String>
  JournalRecord& WithRecordType(RecordTypeT&& value) {
    SetRecordType(std::forward<RecordTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reference to the user associated with this journal record</p>
   */
  inline const UserReference& GetUserReference() const { return m_userReference; }
  inline bool UserReferenceHasBeenSet() const { return m_userReferenceHasBeenSet; }
  template <typename UserReferenceT = UserReference>
  void SetUserReference(UserReferenceT&& value) {
    m_userReferenceHasBeenSet = true;
    m_userReference = std::forward<UserReferenceT>(value);
  }
  template <typename UserReferenceT = UserReference>
  JournalRecord& WithUserReference(UserReferenceT&& value) {
    SetUserReference(std::forward<UserReferenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_executionId;

  Aws::String m_recordId;

  Aws::Utils::Document m_content;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_recordType;

  UserReference m_userReference;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_userReferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
