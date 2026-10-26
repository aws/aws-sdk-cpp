/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UpdateOutboundEmailContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateOutboundEmailContactMessageRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateOutboundEmailContactMessageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOutboundEmailContactMessage"; }

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
  UpdateOutboundEmailContactMessageRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the contact in this instance of Connect Customer. </p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  UpdateOutboundEmailContactMessageRequest& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email message body to update on the outbound email draft.</p>
   */
  inline const UpdateOutboundEmailContent& GetEmailMessage() const { return m_emailMessage; }
  inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
  template <typename EmailMessageT = UpdateOutboundEmailContent>
  void SetEmailMessage(EmailMessageT&& value) {
    m_emailMessageHasBeenSet = true;
    m_emailMessage = std::forward<EmailMessageT>(value);
  }
  template <typename EmailMessageT = UpdateOutboundEmailContent>
  UpdateOutboundEmailContactMessageRequest& WithEmailMessage(EmailMessageT&& value) {
    SetEmailMessage(std::forward<EmailMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_contactId;

  UpdateOutboundEmailContent m_emailMessage;
  bool m_instanceIdHasBeenSet = false;
  bool m_contactIdHasBeenSet = false;
  bool m_emailMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
