/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectSchedulingRequest.h>
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/Duration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectScheduling {
namespace Model {

/**
 * <p>The request for <code>PutTimeOffBalance</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/PutTimeOffBalanceRequest">AWS
 * API Reference</a></p>
 */
class PutTimeOffBalanceRequest : public ConnectSchedulingRequest {
 public:
  AWS_CONNECTSCHEDULING_API PutTimeOffBalanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTimeOffBalance"; }

  AWS_CONNECTSCHEDULING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. This can be the ID or the
   * ARN of the instance. You can <a
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
  PutTimeOffBalanceRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user whose balance is being updated. This can be the ID
   * or the ARN of the user.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  PutTimeOffBalanceRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the shift activity that the balance applies to. This can be
   * the ID or the ARN of the shift activity.</p>
   */
  inline const Aws::String& GetShiftActivityId() const { return m_shiftActivityId; }
  inline bool ShiftActivityIdHasBeenSet() const { return m_shiftActivityIdHasBeenSet; }
  template <typename ShiftActivityIdT = Aws::String>
  void SetShiftActivityId(ShiftActivityIdT&& value) {
    m_shiftActivityIdHasBeenSet = true;
    m_shiftActivityId = std::forward<ShiftActivityIdT>(value);
  }
  template <typename ShiftActivityIdT = Aws::String>
  PutTimeOffBalanceRequest& WithShiftActivityId(ShiftActivityIdT&& value) {
    SetShiftActivityId(std::forward<ShiftActivityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new time off balance for the user and activity. It replaces the existing
   * balance.</p>
   */
  inline const Duration& GetBalance() const { return m_balance; }
  inline bool BalanceHasBeenSet() const { return m_balanceHasBeenSet; }
  template <typename BalanceT = Duration>
  void SetBalance(BalanceT&& value) {
    m_balanceHasBeenSet = true;
    m_balance = std::forward<BalanceT>(value);
  }
  template <typename BalanceT = Duration>
  PutTimeOffBalanceRequest& WithBalance(BalanceT&& value) {
    SetBalance(std::forward<BalanceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_userId;

  Aws::String m_shiftActivityId;

  Duration m_balance;
  bool m_instanceIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_shiftActivityIdHasBeenSet = false;
  bool m_balanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
