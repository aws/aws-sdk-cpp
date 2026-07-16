/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AuthScope.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateAuthCodeRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateAuthCodeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAuthCode"; }

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
  CreateAuthCodeRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope for the authorization code. Defines the permissions and access
   * boundaries for the session.</p>
   */
  inline const AuthScope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = AuthScope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = AuthScope>
  CreateAuthCodeRequest& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration of the session, in minutes. Minimum value of 1440 (24
   * hours). Maximum value of 43200 (30 days). If no value is provided, the session
   * will expire after 400 days.</p>
   */
  inline int GetMaxSessionDurationMinutes() const { return m_maxSessionDurationMinutes; }
  inline bool MaxSessionDurationMinutesHasBeenSet() const { return m_maxSessionDurationMinutesHasBeenSet; }
  inline void SetMaxSessionDurationMinutes(int value) {
    m_maxSessionDurationMinutesHasBeenSet = true;
    m_maxSessionDurationMinutes = value;
  }
  inline CreateAuthCodeRequest& WithMaxSessionDurationMinutes(int value) {
    SetMaxSessionDurationMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of inactivity, in minutes, after which the session expires.
   * Minimum value of 1440 (24 hours). Maximum value of 20160 (14 days).</p>
   */
  inline int GetSessionInactivityDurationMinutes() const { return m_sessionInactivityDurationMinutes; }
  inline bool SessionInactivityDurationMinutesHasBeenSet() const { return m_sessionInactivityDurationMinutesHasBeenSet; }
  inline void SetSessionInactivityDurationMinutes(int value) {
    m_sessionInactivityDurationMinutesHasBeenSet = true;
    m_sessionInactivityDurationMinutes = value;
  }
  inline CreateAuthCodeRequest& WithSessionInactivityDurationMinutes(int value) {
    SetSessionInactivityDurationMinutes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  AuthScope m_scope;

  int m_maxSessionDurationMinutes{0};

  int m_sessionInactivityDurationMinutes{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_maxSessionDurationMinutesHasBeenSet = false;
  bool m_sessionInactivityDurationMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
