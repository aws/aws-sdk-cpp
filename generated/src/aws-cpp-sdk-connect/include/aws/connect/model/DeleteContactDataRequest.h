/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactField.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DeleteContactDataRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DeleteContactDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteContactData"; }

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
  DeleteContactDataRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the contact. PII can be deleted only from a contact that
   * has been disconnected (is in a terminated state).</p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  DeleteContactDataRequest& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories of PII to redact from the contact. Valid values are
   * <code>CUSTOMER_ENDPOINT</code>, <code>ADDITIONAL_EMAIL_RECIPIENTS</code>, and
   * <code>EMAIL_SUBJECT</code>. <code>ADDITIONAL_EMAIL_RECIPIENTS</code> and
   * <code>EMAIL_SUBJECT</code> are supported only for contacts in the email
   * channel.</p>
   */
  inline const Aws::Vector<ContactField>& GetContactFields() const { return m_contactFields; }
  inline bool ContactFieldsHasBeenSet() const { return m_contactFieldsHasBeenSet; }
  template <typename ContactFieldsT = Aws::Vector<ContactField>>
  void SetContactFields(ContactFieldsT&& value) {
    m_contactFieldsHasBeenSet = true;
    m_contactFields = std::forward<ContactFieldsT>(value);
  }
  template <typename ContactFieldsT = Aws::Vector<ContactField>>
  DeleteContactDataRequest& WithContactFields(ContactFieldsT&& value) {
    SetContactFields(std::forward<ContactFieldsT>(value));
    return *this;
  }
  inline DeleteContactDataRequest& AddContactFields(ContactField value) {
    m_contactFieldsHasBeenSet = true;
    m_contactFields.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_contactId;

  Aws::Vector<ContactField> m_contactFields;
  bool m_instanceIdHasBeenSet = false;
  bool m_contactIdHasBeenSet = false;
  bool m_contactFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
