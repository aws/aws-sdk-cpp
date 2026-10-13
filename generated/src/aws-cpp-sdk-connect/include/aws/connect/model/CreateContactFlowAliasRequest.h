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
class CreateContactFlowAliasRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateContactFlowAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateContactFlowAlias"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
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
  CreateContactFlowAliasRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the alias.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateContactFlowAliasRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the flow.</p>
   */
  inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
  inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
  template <typename ContactFlowIdT = Aws::String>
  void SetContactFlowId(ContactFlowIdT&& value) {
    m_contactFlowIdHasBeenSet = true;
    m_contactFlowId = std::forward<ContactFlowIdT>(value);
  }
  template <typename ContactFlowIdT = Aws::String>
  CreateContactFlowAliasRequest& WithContactFlowId(ContactFlowIdT&& value) {
    SetContactFlowId(std::forward<ContactFlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow.</p>
   */
  inline long long GetContactFlowVersion() const { return m_contactFlowVersion; }
  inline bool ContactFlowVersionHasBeenSet() const { return m_contactFlowVersionHasBeenSet; }
  inline void SetContactFlowVersion(long long value) {
    m_contactFlowVersionHasBeenSet = true;
    m_contactFlowVersion = value;
  }
  inline CreateContactFlowAliasRequest& WithContactFlowVersion(long long value) {
    SetContactFlowVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  CreateContactFlowAliasRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_description;

  Aws::String m_contactFlowId;

  long long m_contactFlowVersion{0};

  Aws::String m_aliasName;
  bool m_instanceIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_contactFlowIdHasBeenSet = false;
  bool m_contactFlowVersionHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
