/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RestoreStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A summary of a point-in-time recovery of a user pool.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RestorationDescriptionType">AWS
 * API Reference</a></p>
 */
class RestorationDescriptionType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RestorationDescriptionType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API RestorationDescriptionType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API RestorationDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the recovery.</p>
   */
  inline const Aws::String& GetRestoreId() const { return m_restoreId; }
  inline bool RestoreIdHasBeenSet() const { return m_restoreIdHasBeenSet; }
  template <typename RestoreIdT = Aws::String>
  void SetRestoreId(RestoreIdT&& value) {
    m_restoreIdHasBeenSet = true;
    m_restoreId = std::forward<RestoreIdT>(value);
  }
  template <typename RestoreIdT = Aws::String>
  RestorationDescriptionType& WithRestoreId(RestoreIdT&& value) {
    SetRestoreId(std::forward<RestoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the recovery. For a description of each status, see the
   * <code>RestoreStatus</code> parameter of <code>RestorationType</code>.</p>
   */
  inline RestoreStatusType GetRestoreStatus() const { return m_restoreStatus; }
  inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
  inline void SetRestoreStatus(RestoreStatusType value) {
    m_restoreStatusHasBeenSet = true;
    m_restoreStatus = value;
  }
  inline RestorationDescriptionType& WithRestoreStatus(RestoreStatusType value) {
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
  RestorationDescriptionType& WithRestoreTimestamp(RestoreTimestampT&& value) {
    SetRestoreTimestamp(std::forward<RestoreTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_restoreId;

  RestoreStatusType m_restoreStatus{RestoreStatusType::NOT_SET};

  Aws::Utils::DateTime m_restoreTimestamp{};
  bool m_restoreIdHasBeenSet = false;
  bool m_restoreStatusHasBeenSet = false;
  bool m_restoreTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
