/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectSchedulingRequest.h>
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectScheduling {
namespace Model {

/**
 * <p>The request for <code>CancelTimeOff</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/CancelTimeOffRequest">AWS
 * API Reference</a></p>
 */
class CancelTimeOffRequest : public ConnectSchedulingRequest {
 public:
  AWS_CONNECTSCHEDULING_API CancelTimeOffRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelTimeOff"; }

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
  CancelTimeOffRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who the time off request belongs to. This can be
   * the ID or the ARN of the user.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  CancelTimeOffRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the time off request to cancel. If the time off
   * request doesn't belong to <code>UserId</code>, the operation returns
   * <code>ResourceNotFoundException</code>.</p>
   */
  inline const Aws::String& GetTimeOffId() const { return m_timeOffId; }
  inline bool TimeOffIdHasBeenSet() const { return m_timeOffIdHasBeenSet; }
  template <typename TimeOffIdT = Aws::String>
  void SetTimeOffId(TimeOffIdT&& value) {
    m_timeOffIdHasBeenSet = true;
    m_timeOffId = std::forward<TimeOffIdT>(value);
  }
  template <typename TimeOffIdT = Aws::String>
  CancelTimeOffRequest& WithTimeOffId(TimeOffIdT&& value) {
    SetTimeOffId(std::forward<TimeOffIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description recorded with the cancellation. It replaces the description of
   * the time off request. If you omit it, the request's description is removed.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CancelTimeOffRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_userId;

  Aws::String m_timeOffId;

  Aws::String m_description;
  bool m_instanceIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_timeOffIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
