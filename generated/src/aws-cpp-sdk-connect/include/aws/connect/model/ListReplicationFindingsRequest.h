/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Connect {
namespace Model {

/**
 */
class ListReplicationFindingsRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListReplicationFindingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListReplicationFindings"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can provide either the
   * instance ID or the full instance ARN. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  ListReplicationFindingsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource to list replication findings for. The following values
   * are currently supported: <code>AGENT</code>, <code>AGENT_GROUP</code>,
   * <code>AGENT_GROUP_LEVEL</code>, <code>AGENT_STATE</code>,
   * <code>ATTRIBUTE</code>, <code>CONTACT_FLOW</code>, <code>DATA_TABLE</code>,
   * <code>DATA_TABLE_ATTRIBUTE</code>, <code>DATA_TABLE_RECORD</code>,
   * <code>DATA_TABLE_VALUE</code>, <code>FLOW_MODULE</code>,
   * <code>FLOW_MODULE_ALIAS</code>, <code>FLOW_MODULE_VERSION</code>,
   * <code>METRIC</code>, <code>NOTIFICATION</code>, <code>OPERATING_HOURS</code>,
   * <code>PHONE_NUMBER</code>, <code>PROMPT</code>, <code>QUEUE</code>,
   * <code>REPORT</code>, <code>ROUTING_PROFILE</code>,
   * <code>SECURITY_PROFILE</code>, <code>TASK_TEMPLATE</code>,
   * <code>TEST_CASE</code>, <code>TRANSFER_DESTINATION</code>, <code>VIEW</code>,
   * and <code>WORKSPACE</code>. Additional resource types can be supported over
   * time. Specifying a value that is not currently supported returns an
   * <code>InvalidRequestException</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ListReplicationFindingsRequest& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListReplicationFindingsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListReplicationFindingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_resourceType;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_instanceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
