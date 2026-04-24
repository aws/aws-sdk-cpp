/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DescriptorType.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class ListRegistryRecordsRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListRegistryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRegistryRecords"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the registry to list records from. You can specify either
   * the Amazon Resource Name (ARN) or the ID of the registry.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  ListRegistryRecordsRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response. If the total number
   * of results is greater than this value, use the token returned in the response in
   * the <code>nextToken</code> field when making another request to return the next
   * batch of results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRegistryRecordsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, enter the token returned in the
   * <code>nextToken</code> field in the response in this field to return the next
   * batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRegistryRecordsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter registry records by name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListRegistryRecordsRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter registry records by their current status. Possible values include
   * <code>CREATING</code>, <code>DRAFT</code>, <code>APPROVED</code>,
   * <code>PENDING_APPROVAL</code>, <code>REJECTED</code>, <code>DEPRECATED</code>,
   * <code>UPDATING</code>, <code>CREATE_FAILED</code>, and
   * <code>UPDATE_FAILED</code>.</p>
   */
  inline RegistryRecordStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RegistryRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListRegistryRecordsRequest& WithStatus(RegistryRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter registry records by their descriptor type. Possible values are
   * <code>MCP</code>, <code>A2A</code>, <code>CUSTOM</code>, and
   * <code>AGENT_SKILLS</code>.</p>
   */
  inline DescriptorType GetDescriptorType() const { return m_descriptorType; }
  inline bool DescriptorTypeHasBeenSet() const { return m_descriptorTypeHasBeenSet; }
  inline void SetDescriptorType(DescriptorType value) {
    m_descriptorTypeHasBeenSet = true;
    m_descriptorType = value;
  }
  inline ListRegistryRecordsRequest& WithDescriptorType(DescriptorType value) {
    SetDescriptorType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_name;

  RegistryRecordStatus m_status{RegistryRecordStatus::NOT_SET};

  DescriptorType m_descriptorType{DescriptorType::NOT_SET};
  bool m_registryIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
