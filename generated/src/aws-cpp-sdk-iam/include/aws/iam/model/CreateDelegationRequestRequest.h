/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DelegationPermission.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class CreateDelegationRequestRequest : public IAMRequest {
 public:
  AWS_IAM_API CreateDelegationRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDelegationRequest"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Web Services account ID this delegation request is targeted
   * to.</p> <p>If the account ID is not known, this parameter can be omitted,
   * resulting in a request that can be associated by any account. If the account ID
   * passed, then the created delegation request can only be associated with an
   * identity of that target account.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  CreateDelegationRequestRequest& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the delegation request.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDelegationRequestRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions to be delegated in this delegation request.</p>
   */
  inline const DelegationPermission& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = DelegationPermission>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = DelegationPermission>
  CreateDelegationRequestRequest& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message explaining the reason for the delegation request.</p> <p>Requesters
   * can utilize this field to add a custom note to the delegation request. This
   * field is different from the description such that this is to be utilized for a
   * custom messaging on a case-by-case basis.</p> <p>For example, if the current
   * delegation request is in response to a previous request being rejected, this
   * explanation can be added to the request via this field.</p>
   */
  inline const Aws::String& GetRequestMessage() const { return m_requestMessage; }
  inline bool RequestMessageHasBeenSet() const { return m_requestMessageHasBeenSet; }
  template <typename RequestMessageT = Aws::String>
  void SetRequestMessage(RequestMessageT&& value) {
    m_requestMessageHasBeenSet = true;
    m_requestMessage = std::forward<RequestMessageT>(value);
  }
  template <typename RequestMessageT = Aws::String>
  CreateDelegationRequestRequest& WithRequestMessage(RequestMessageT&& value) {
    SetRequestMessage(std::forward<RequestMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workflow ID associated with the requestor.</p> <p>This is the unique
   * identifier on the partner side that can be used to track the progress of the
   * request.</p> <p>IAM maintains a uniqueness check on this workflow id for each
   * request - if a workflow id for an existing request is passed, this API call will
   * fail.</p>
   */
  inline const Aws::String& GetRequestorWorkflowId() const { return m_requestorWorkflowId; }
  inline bool RequestorWorkflowIdHasBeenSet() const { return m_requestorWorkflowIdHasBeenSet; }
  template <typename RequestorWorkflowIdT = Aws::String>
  void SetRequestorWorkflowId(RequestorWorkflowIdT&& value) {
    m_requestorWorkflowIdHasBeenSet = true;
    m_requestorWorkflowId = std::forward<RequestorWorkflowIdT>(value);
  }
  template <typename RequestorWorkflowIdT = Aws::String>
  CreateDelegationRequestRequest& WithRequestorWorkflowId(RequestorWorkflowIdT&& value) {
    SetRequestorWorkflowId(std::forward<RequestorWorkflowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to redirect to after the delegation request is processed.</p> <p>This
   * URL is used by the IAM console to show a link to the customer to re-load the
   * partner workflow.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  CreateDelegationRequestRequest& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The notification channel for updates about the delegation request.</p> <p>At
   * this time,only SNS topic ARNs are accepted for notification. This topic ARN must
   * have a resource policy granting <code>SNS:Publish</code> permission to the IAM
   * service principal (<code>iam.amazonaws.com</code>). See <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies-temporary-delegation-partner-guide.html">partner
   * onboarding documentation</a> for more details. </p>
   */
  inline const Aws::String& GetNotificationChannel() const { return m_notificationChannel; }
  inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
  template <typename NotificationChannelT = Aws::String>
  void SetNotificationChannel(NotificationChannelT&& value) {
    m_notificationChannelHasBeenSet = true;
    m_notificationChannel = std::forward<NotificationChannelT>(value);
  }
  template <typename NotificationChannelT = Aws::String>
  CreateDelegationRequestRequest& WithNotificationChannel(NotificationChannelT&& value) {
    SetNotificationChannel(std::forward<NotificationChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration for which the delegated session should remain active, in
   * seconds.</p> <p>The active time window for the session starts when the customer
   * calls the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SendDelegationToken.html">SendDelegationToken</a>
   * API.</p>
   */
  inline int GetSessionDuration() const { return m_sessionDuration; }
  inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
  inline void SetSessionDuration(int value) {
    m_sessionDurationHasBeenSet = true;
    m_sessionDuration = value;
  }
  inline CreateDelegationRequestRequest& WithSessionDuration(int value) {
    SetSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the delegation token should only be sent by the owner.</p>
   * <p>This flag prevents any party other than the owner from calling
   * <code>SendDelegationToken</code> API for this delegation request. This behavior
   * becomes useful when the delegation request owner needs to be present for
   * subsequent partner interactions, but the delegation request was sent to a more
   * privileged user for approval due to the owner lacking sufficient delegation
   * permissions. </p>
   */
  inline bool GetOnlySendByOwner() const { return m_onlySendByOwner; }
  inline bool OnlySendByOwnerHasBeenSet() const { return m_onlySendByOwnerHasBeenSet; }
  inline void SetOnlySendByOwner(bool value) {
    m_onlySendByOwnerHasBeenSet = true;
    m_onlySendByOwner = value;
  }
  inline CreateDelegationRequestRequest& WithOnlySendByOwner(bool value) {
    SetOnlySendByOwner(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerAccountId;

  Aws::String m_description;

  DelegationPermission m_permissions;

  Aws::String m_requestMessage;

  Aws::String m_requestorWorkflowId;

  Aws::String m_redirectUrl;

  Aws::String m_notificationChannel;

  int m_sessionDuration{0};

  bool m_onlySendByOwner{false};
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_requestMessageHasBeenSet = false;
  bool m_requestorWorkflowIdHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
  bool m_notificationChannelHasBeenSet = false;
  bool m_sessionDurationHasBeenSet = false;
  bool m_onlySendByOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
