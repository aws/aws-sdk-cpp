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
namespace Connect {
namespace Model {

/**
 */
class CreateContactFlowModuleVersionRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateContactFlowModuleVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateContactFlowModuleVersion"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
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
  CreateContactFlowModuleVersionRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the flow module version.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateContactFlowModuleVersionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleId() const { return m_contactFlowModuleId; }
  inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }
  template <typename ContactFlowModuleIdT = Aws::String>
  void SetContactFlowModuleId(ContactFlowModuleIdT&& value) {
    m_contactFlowModuleIdHasBeenSet = true;
    m_contactFlowModuleId = std::forward<ContactFlowModuleIdT>(value);
  }
  template <typename ContactFlowModuleIdT = Aws::String>
  CreateContactFlowModuleVersionRequest& WithContactFlowModuleId(ContactFlowModuleIdT&& value) {
    SetContactFlowModuleId(std::forward<ContactFlowModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the checksum value of the flow module content.</p>
   */
  inline const Aws::String& GetFlowModuleContentSha256() const { return m_flowModuleContentSha256; }
  inline bool FlowModuleContentSha256HasBeenSet() const { return m_flowModuleContentSha256HasBeenSet; }
  template <typename FlowModuleContentSha256T = Aws::String>
  void SetFlowModuleContentSha256(FlowModuleContentSha256T&& value) {
    m_flowModuleContentSha256HasBeenSet = true;
    m_flowModuleContentSha256 = std::forward<FlowModuleContentSha256T>(value);
  }
  template <typename FlowModuleContentSha256T = Aws::String>
  CreateContactFlowModuleVersionRequest& WithFlowModuleContentSha256(FlowModuleContentSha256T&& value) {
    SetFlowModuleContentSha256(std::forward<FlowModuleContentSha256T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_contactFlowModuleId;
  bool m_contactFlowModuleIdHasBeenSet = false;

  Aws::String m_flowModuleContentSha256;
  bool m_flowModuleContentSha256HasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
