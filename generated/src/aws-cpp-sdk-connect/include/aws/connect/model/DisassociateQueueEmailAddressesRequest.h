/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DisassociateQueueEmailAddressesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DisassociateQueueEmailAddressesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateQueueEmailAddresses"; }

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
  DisassociateQueueEmailAddressesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the queue.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  DisassociateQueueEmailAddressesRequest& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of email address identifiers to disassociate from the queue. These are
   * the unique identifiers of email addresses that should no longer be routed to
   * this queue.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEmailAddressesId() const { return m_emailAddressesId; }
  inline bool EmailAddressesIdHasBeenSet() const { return m_emailAddressesIdHasBeenSet; }
  template <typename EmailAddressesIdT = Aws::Vector<Aws::String>>
  void SetEmailAddressesId(EmailAddressesIdT&& value) {
    m_emailAddressesIdHasBeenSet = true;
    m_emailAddressesId = std::forward<EmailAddressesIdT>(value);
  }
  template <typename EmailAddressesIdT = Aws::Vector<Aws::String>>
  DisassociateQueueEmailAddressesRequest& WithEmailAddressesId(EmailAddressesIdT&& value) {
    SetEmailAddressesId(std::forward<EmailAddressesIdT>(value));
    return *this;
  }
  template <typename EmailAddressesIdT = Aws::String>
  DisassociateQueueEmailAddressesRequest& AddEmailAddressesId(EmailAddressesIdT&& value) {
    m_emailAddressesIdHasBeenSet = true;
    m_emailAddressesId.emplace_back(std::forward<EmailAddressesIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DisassociateQueueEmailAddressesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_queueId;

  Aws::Vector<Aws::String> m_emailAddressesId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_instanceIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_emailAddressesIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
