/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RestorePreviewType.h>
#include <aws/cognito-idp/model/RestoreStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The details of a point-in-time recovery of a user pool.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RestorationType">AWS
 * API Reference</a></p>
 */
class RestorationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RestorationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API RestorationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API RestorationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the recovery. Use this ID in requests to describe, start, or cancel
   * the recovery.</p>
   */
  inline const Aws::String& GetRestoreId() const { return m_restoreId; }
  inline bool RestoreIdHasBeenSet() const { return m_restoreIdHasBeenSet; }
  template <typename RestoreIdT = Aws::String>
  void SetRestoreId(RestoreIdT&& value) {
    m_restoreIdHasBeenSet = true;
    m_restoreId = std::forward<RestoreIdT>(value);
  }
  template <typename RestoreIdT = Aws::String>
  RestorationType& WithRestoreId(RestoreIdT&& value) {
    SetRestoreId(std::forward<RestoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the recovery. Can be one of the following values.</p> <dl>
   * <dt>PREVIEW_GENERATING</dt> <dd> <p>Amazon Cognito is generating the recovery
   * preview, which might not be available immediately. Write operations in the user
   * pool are paused.</p> </dd> <dt>PREVIEW_GENERATED</dt> <dd> <p>The recovery
   * preview is ready for review. Write operations in the user pool are paused.
   * Within 24 hours after you initiate the recovery, apply it with a
   * <code>StartPointInTimeRecovery</code> request or discard it with a
   * <code>CancelPointInTimeRecovery</code> request.</p> </dd>
   * <dt>PREVIEW_CANCELLED</dt> <dd> <p>You canceled the recovery. Amazon Cognito
   * resumed write operations and didn't change your user pool data.</p> </dd>
   * <dt>PREVIEW_GENERATION_FAILED</dt> <dd> <p>Amazon Cognito couldn't generate the
   * recovery preview. Amazon Cognito resumed write operations and didn't change your
   * user pool data. You can initiate a new recovery.</p> </dd>
   * <dt>PREVIEW_EXPIRED</dt> <dd> <p>You didn't start or cancel the recovery within
   * 24 hours after you initiated it. Amazon Cognito resumed write operations and
   * didn't change your user pool data.</p> </dd> <dt>RESTORING</dt> <dd> <p>Amazon
   * Cognito is restoring user data in the user pool to its state at the recovery
   * point. Write operations in the user pool are paused.</p> </dd>
   * <dt>RESTORE_COMPLETED</dt> <dd> <p>Amazon Cognito restored your user pool to its
   * state at the recovery point and resumed write operations.</p> </dd>
   * <dt>TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE</dt> <dd> <p>The recovery
   * encountered an internal error. Write operations in the user pool remain paused.
   * Amazon Web Services Support contacts you through a support case to resolve the
   * issue.</p> </dd> <dt>AWS_ABORTED</dt> <dd> <p>Amazon Cognito stopped the
   * recovery because of an internal failure. Write operations in the user pool
   * remain paused, and you can't cancel or retry the recovery. Amazon Web Services
   * Support contacts you through a support case to resolve the issue.</p> </dd>
   * </dl>
   */
  inline RestoreStatusType GetRestoreStatus() const { return m_restoreStatus; }
  inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
  inline void SetRestoreStatus(RestoreStatusType value) {
    m_restoreStatusHasBeenSet = true;
    m_restoreStatus = value;
  }
  inline RestorationType& WithRestoreStatus(RestoreStatusType value) {
    SetRestoreStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The point in time that the recovery restores the user pool to.</p>
   */
  inline const Aws::Utils::DateTime& GetRestoreTimestamp() const { return m_restoreTimestamp; }
  inline bool RestoreTimestampHasBeenSet() const { return m_restoreTimestampHasBeenSet; }
  template <typename RestoreTimestampT = Aws::Utils::DateTime>
  void SetRestoreTimestamp(RestoreTimestampT&& value) {
    m_restoreTimestampHasBeenSet = true;
    m_restoreTimestamp = std::forward<RestoreTimestampT>(value);
  }
  template <typename RestoreTimestampT = Aws::Utils::DateTime>
  RestorationType& WithRestoreTimestamp(RestoreTimestampT&& value) {
    SetRestoreTimestamp(std::forward<RestoreTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the period of changes that the recovery reverts. This time is
   * shortly after the time that you initiated the recovery. The recovery reverts
   * changes to user data that occurred between <code>RestoreTimestamp</code> and
   * <code>TriggerTimestamp</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetTriggerTimestamp() const { return m_triggerTimestamp; }
  inline bool TriggerTimestampHasBeenSet() const { return m_triggerTimestampHasBeenSet; }
  template <typename TriggerTimestampT = Aws::Utils::DateTime>
  void SetTriggerTimestamp(TriggerTimestampT&& value) {
    m_triggerTimestampHasBeenSet = true;
    m_triggerTimestamp = std::forward<TriggerTimestampT>(value);
  }
  template <typename TriggerTimestampT = Aws::Utils::DateTime>
  RestorationType& WithTriggerTimestamp(TriggerTimestampT&& value) {
    SetTriggerTimestamp(std::forward<TriggerTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recovery preview. For each type of entity, the preview shows the number
   * of entities that the recovery creates, updates, and deletes. The preview doesn't
   * include user data. Amazon Cognito returns the preview when it's available.</p>
   */
  inline const Aws::Vector<RestorePreviewType>& GetRestorePreview() const { return m_restorePreview; }
  inline bool RestorePreviewHasBeenSet() const { return m_restorePreviewHasBeenSet; }
  template <typename RestorePreviewT = Aws::Vector<RestorePreviewType>>
  void SetRestorePreview(RestorePreviewT&& value) {
    m_restorePreviewHasBeenSet = true;
    m_restorePreview = std::forward<RestorePreviewT>(value);
  }
  template <typename RestorePreviewT = Aws::Vector<RestorePreviewType>>
  RestorationType& WithRestorePreview(RestorePreviewT&& value) {
    SetRestorePreview(std::forward<RestorePreviewT>(value));
    return *this;
  }
  template <typename RestorePreviewT = RestorePreviewType>
  RestorationType& AddRestorePreview(RestorePreviewT&& value) {
    m_restorePreviewHasBeenSet = true;
    m_restorePreview.emplace_back(std::forward<RestorePreviewT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_restoreId;

  RestoreStatusType m_restoreStatus{RestoreStatusType::NOT_SET};

  Aws::Utils::DateTime m_restoreTimestamp{};

  Aws::Utils::DateTime m_triggerTimestamp{};

  Aws::Vector<RestorePreviewType> m_restorePreview;
  bool m_restoreIdHasBeenSet = false;
  bool m_restoreStatusHasBeenSet = false;
  bool m_restoreTimestampHasBeenSet = false;
  bool m_triggerTimestampHasBeenSet = false;
  bool m_restorePreviewHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
