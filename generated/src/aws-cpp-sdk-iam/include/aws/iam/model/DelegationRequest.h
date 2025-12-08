/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DelegationPermission.h>
#include <aws/iam/model/StateType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Contains information about a delegation request, including its status,
 * permissions, and associated metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DelegationRequest">AWS
 * API Reference</a></p>
 */
class DelegationRequest {
 public:
  AWS_IAM_API DelegationRequest() = default;
  AWS_IAM_API DelegationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API DelegationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The unique identifier for the delegation request.</p>
   */
  inline const Aws::String& GetDelegationRequestId() const { return m_delegationRequestId; }
  inline bool DelegationRequestIdHasBeenSet() const { return m_delegationRequestIdHasBeenSet; }
  template <typename DelegationRequestIdT = Aws::String>
  void SetDelegationRequestId(DelegationRequestIdT&& value) {
    m_delegationRequestIdHasBeenSet = true;
    m_delegationRequestId = std::forward<DelegationRequestIdT>(value);
  }
  template <typename DelegationRequestIdT = Aws::String>
  DelegationRequest& WithDelegationRequestId(DelegationRequestIdT&& value) {
    SetDelegationRequestId(std::forward<DelegationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Web Services account ID of the owner of the delegation request.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  DelegationRequest& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the delegation request. This is a message that is provided by
   * the Amazon Web Services partner that filed the delegation request.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DelegationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A custom message that is added to the delegation request by the partner.</p>
   * <p>This element is different from the <code>Description</code> element such that
   * this is a request specific message injected by the partner. The
   * <code>Description</code> is typically a generic explanation of what the
   * delegation request is targeted to do.</p>
   */
  inline const Aws::String& GetRequestMessage() const { return m_requestMessage; }
  inline bool RequestMessageHasBeenSet() const { return m_requestMessageHasBeenSet; }
  template <typename RequestMessageT = Aws::String>
  void SetRequestMessage(RequestMessageT&& value) {
    m_requestMessageHasBeenSet = true;
    m_requestMessage = std::forward<RequestMessageT>(value);
  }
  template <typename RequestMessageT = Aws::String>
  DelegationRequest& WithRequestMessage(RequestMessageT&& value) {
    SetRequestMessage(std::forward<RequestMessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DelegationPermission& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = DelegationPermission>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = DelegationPermission>
  DelegationRequest& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSON content of the associated permission policy of this delegation
   * request.</p>
   */
  inline const Aws::String& GetPermissionPolicy() const { return m_permissionPolicy; }
  inline bool PermissionPolicyHasBeenSet() const { return m_permissionPolicyHasBeenSet; }
  template <typename PermissionPolicyT = Aws::String>
  void SetPermissionPolicy(PermissionPolicyT&& value) {
    m_permissionPolicyHasBeenSet = true;
    m_permissionPolicy = std::forward<PermissionPolicyT>(value);
  }
  template <typename PermissionPolicyT = Aws::String>
  DelegationRequest& WithPermissionPolicy(PermissionPolicyT&& value) {
    SetPermissionPolicy(std::forward<PermissionPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the <code>PermissionPolicy</code> includes role creation permissions, this
   * element will include the list of permissions boundary policies associated with
   * the role creation. See <a
   * href="IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
   * boundaries for IAM entities</a> for more details about IAM permission
   * boundaries. </p>
   */
  inline const Aws::Vector<Aws::String>& GetRolePermissionRestrictionArns() const { return m_rolePermissionRestrictionArns; }
  inline bool RolePermissionRestrictionArnsHasBeenSet() const { return m_rolePermissionRestrictionArnsHasBeenSet; }
  template <typename RolePermissionRestrictionArnsT = Aws::Vector<Aws::String>>
  void SetRolePermissionRestrictionArns(RolePermissionRestrictionArnsT&& value) {
    m_rolePermissionRestrictionArnsHasBeenSet = true;
    m_rolePermissionRestrictionArns = std::forward<RolePermissionRestrictionArnsT>(value);
  }
  template <typename RolePermissionRestrictionArnsT = Aws::Vector<Aws::String>>
  DelegationRequest& WithRolePermissionRestrictionArns(RolePermissionRestrictionArnsT&& value) {
    SetRolePermissionRestrictionArns(std::forward<RolePermissionRestrictionArnsT>(value));
    return *this;
  }
  template <typename RolePermissionRestrictionArnsT = Aws::String>
  DelegationRequest& AddRolePermissionRestrictionArns(RolePermissionRestrictionArnsT&& value) {
    m_rolePermissionRestrictionArnsHasBeenSet = true;
    m_rolePermissionRestrictionArns.emplace_back(std::forward<RolePermissionRestrictionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the owner of this delegation request.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  DelegationRequest& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetApproverId() const { return m_approverId; }
  inline bool ApproverIdHasBeenSet() const { return m_approverIdHasBeenSet; }
  template <typename ApproverIdT = Aws::String>
  void SetApproverId(ApproverIdT&& value) {
    m_approverIdHasBeenSet = true;
    m_approverId = std::forward<ApproverIdT>(value);
  }
  template <typename ApproverIdT = Aws::String>
  DelegationRequest& WithApproverId(ApproverIdT&& value) {
    SetApproverId(std::forward<ApproverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of this delegation request.</p> <p>See the <a
   * href="IAM/latest/UserGuide/temporary-delegation-building-integration.html#temporary-delegation-request-lifecycle">Understanding
   * the Request Lifecycle</a> for an explanation of how these states are
   * transitioned.</p>
   */
  inline StateType GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(StateType value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DelegationRequest& WithState(StateType value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiry time of this delegation request</p> <p>See the <a
   * href="IAM/latest/UserGuide/temporary-delegation-building-integration.html#temporary-delegation-request-lifecycle">Understanding
   * the Request Lifecycle</a> for details on the life time of a delegation request
   * at each state.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  DelegationRequest& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identity of the requestor of this delegation request. This will be an Amazon
   * Web Services account ID.</p>
   */
  inline const Aws::String& GetRequestorId() const { return m_requestorId; }
  inline bool RequestorIdHasBeenSet() const { return m_requestorIdHasBeenSet; }
  template <typename RequestorIdT = Aws::String>
  void SetRequestorId(RequestorIdT&& value) {
    m_requestorIdHasBeenSet = true;
    m_requestorId = std::forward<RequestorIdT>(value);
  }
  template <typename RequestorIdT = Aws::String>
  DelegationRequest& WithRequestorId(RequestorIdT&& value) {
    SetRequestorId(std::forward<RequestorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A friendly name of the requestor.</p>
   */
  inline const Aws::String& GetRequestorName() const { return m_requestorName; }
  inline bool RequestorNameHasBeenSet() const { return m_requestorNameHasBeenSet; }
  template <typename RequestorNameT = Aws::String>
  void SetRequestorName(RequestorNameT&& value) {
    m_requestorNameHasBeenSet = true;
    m_requestorName = std::forward<RequestorNameT>(value);
  }
  template <typename RequestorNameT = Aws::String>
  DelegationRequest& WithRequestorName(RequestorNameT&& value) {
    SetRequestorName(std::forward<RequestorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creation date (timestamp) of this delegation request.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
  inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
  template <typename CreateDateT = Aws::Utils::DateTime>
  void SetCreateDate(CreateDateT&& value) {
    m_createDateHasBeenSet = true;
    m_createDate = std::forward<CreateDateT>(value);
  }
  template <typename CreateDateT = Aws::Utils::DateTime>
  DelegationRequest& WithCreateDate(CreateDateT&& value) {
    SetCreateDate(std::forward<CreateDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The life-time of the requested session credential.</p>
   */
  inline int GetSessionDuration() const { return m_sessionDuration; }
  inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
  inline void SetSessionDuration(int value) {
    m_sessionDurationHasBeenSet = true;
    m_sessionDuration = value;
  }
  inline DelegationRequest& WithSessionDuration(int value) {
    SetSessionDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URL to be redirected to once the delegation request is approved. Partners
   * provide this URL when creating the delegation request.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  DelegationRequest& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Notes added to this delegation request, if this request was updated via the
   * <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UpdateDelegationRequest.html">UpdateDelegationRequest</a>
   * API.</p>
   */
  inline const Aws::String& GetNotes() const { return m_notes; }
  inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
  template <typename NotesT = Aws::String>
  void SetNotes(NotesT&& value) {
    m_notesHasBeenSet = true;
    m_notes = std::forward<NotesT>(value);
  }
  template <typename NotesT = Aws::String>
  DelegationRequest& WithNotes(NotesT&& value) {
    SetNotes(std::forward<NotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reasons for rejecting this delegation request, if this request was rejected.
   * See also <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_RejectDelegationRequest.html">RejectDelegationRequest</a>
   * API documentation. </p>
   */
  inline const Aws::String& GetRejectionReason() const { return m_rejectionReason; }
  inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
  template <typename RejectionReasonT = Aws::String>
  void SetRejectionReason(RejectionReasonT&& value) {
    m_rejectionReasonHasBeenSet = true;
    m_rejectionReason = std::forward<RejectionReasonT>(value);
  }
  template <typename RejectionReasonT = Aws::String>
  DelegationRequest& WithRejectionReason(RejectionReasonT&& value) {
    SetRejectionReason(std::forward<RejectionReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A flag indicating whether the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SendDelegationToken.html">SendDelegationToken</a>
   * must be called by the owner of this delegation request. This is set by the
   * requesting partner.</p>
   */
  inline bool GetOnlySendByOwner() const { return m_onlySendByOwner; }
  inline bool OnlySendByOwnerHasBeenSet() const { return m_onlySendByOwnerHasBeenSet; }
  inline void SetOnlySendByOwner(bool value) {
    m_onlySendByOwnerHasBeenSet = true;
    m_onlySendByOwner = value;
  }
  inline DelegationRequest& WithOnlySendByOwner(bool value) {
    SetOnlySendByOwner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last updated timestamp of the request.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
  inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  void SetUpdatedTime(UpdatedTimeT&& value) {
    m_updatedTimeHasBeenSet = true;
    m_updatedTime = std::forward<UpdatedTimeT>(value);
  }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  DelegationRequest& WithUpdatedTime(UpdatedTimeT&& value) {
    SetUpdatedTime(std::forward<UpdatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_delegationRequestId;

  Aws::String m_ownerAccountId;

  Aws::String m_description;

  Aws::String m_requestMessage;

  DelegationPermission m_permissions;

  Aws::String m_permissionPolicy;

  Aws::Vector<Aws::String> m_rolePermissionRestrictionArns;

  Aws::String m_ownerId;

  Aws::String m_approverId;

  StateType m_state{StateType::NOT_SET};

  Aws::Utils::DateTime m_expirationTime{};

  Aws::String m_requestorId;

  Aws::String m_requestorName;

  Aws::Utils::DateTime m_createDate{};

  int m_sessionDuration{0};

  Aws::String m_redirectUrl;

  Aws::String m_notes;

  Aws::String m_rejectionReason;

  bool m_onlySendByOwner{false};

  Aws::Utils::DateTime m_updatedTime{};
  bool m_delegationRequestIdHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_requestMessageHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_permissionPolicyHasBeenSet = false;
  bool m_rolePermissionRestrictionArnsHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_approverIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
  bool m_requestorIdHasBeenSet = false;
  bool m_requestorNameHasBeenSet = false;
  bool m_createDateHasBeenSet = false;
  bool m_sessionDurationHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
  bool m_notesHasBeenSet = false;
  bool m_rejectionReasonHasBeenSet = false;
  bool m_onlySendByOwnerHasBeenSet = false;
  bool m_updatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
