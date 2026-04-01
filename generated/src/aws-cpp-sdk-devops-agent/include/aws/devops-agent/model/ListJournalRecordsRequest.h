/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/OrderType.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for listing journal records with filtering and pagination
 * support</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListJournalRecordsRequest">AWS
 * API Reference</a></p>
 */
class ListJournalRecordsRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListJournalRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListJournalRecords"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the execution</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListJournalRecordsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the execution whose journal records to retrieve</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  ListJournalRecordsRequest& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of records to return in a single response (1-100, default:
   * 100)</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListJournalRecordsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListJournalRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter records by type (empty string returns all types)</p>
   */
  inline const Aws::String& GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  template <typename RecordTypeT = Aws::String>
  void SetRecordType(RecordTypeT&& value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = std::forward<RecordTypeT>(value);
  }
  template <typename RecordTypeT = Aws::String>
  ListJournalRecordsRequest& WithRecordType(RecordTypeT&& value) {
    SetRecordType(std::forward<RecordTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sort order for the records based on timestamp (default: DESC)</p>
   */
  inline OrderType GetOrder() const { return m_order; }
  inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
  inline void SetOrder(OrderType value) {
    m_orderHasBeenSet = true;
    m_order = value;
  }
  inline ListJournalRecordsRequest& WithOrder(OrderType value) {
    SetOrder(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_executionId;

  int m_limit{0};

  Aws::String m_nextToken;

  Aws::String m_recordType;

  OrderType m_order{OrderType::NOT_SET};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_executionIdHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_orderHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
