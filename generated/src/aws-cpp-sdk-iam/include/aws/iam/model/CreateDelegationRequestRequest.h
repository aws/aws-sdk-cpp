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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
   * <p/>
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
  bool m_ownerAccountIdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  DelegationPermission m_permissions;
  bool m_permissionsHasBeenSet = false;

  Aws::String m_requestMessage;
  bool m_requestMessageHasBeenSet = false;

  Aws::String m_requestorWorkflowId;
  bool m_requestorWorkflowIdHasBeenSet = false;

  Aws::String m_redirectUrl;
  bool m_redirectUrlHasBeenSet = false;

  Aws::String m_notificationChannel;
  bool m_notificationChannelHasBeenSet = false;

  int m_sessionDuration{0};
  bool m_sessionDurationHasBeenSet = false;

  bool m_onlySendByOwner{false};
  bool m_onlySendByOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
