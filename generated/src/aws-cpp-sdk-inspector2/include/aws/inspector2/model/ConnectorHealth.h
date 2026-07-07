/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorHealthStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The health and connectivity status of a connector, including the last time
 * the status was checked and any diagnostic message. Returned as part of the
 * <code>Connector</code> structure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorHealth">AWS
 * API Reference</a></p>
 */
class ConnectorHealth {
 public:
  AWS_INSPECTOR2_API ConnectorHealth() = default;
  AWS_INSPECTOR2_API ConnectorHealth(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The health status of the connector.</p>
   */
  inline ConnectorHealthStatus GetConnectorStatus() const { return m_connectorStatus; }
  inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
  inline void SetConnectorStatus(ConnectorHealthStatus value) {
    m_connectorStatusHasBeenSet = true;
    m_connectorStatus = value;
  }
  inline ConnectorHealth& WithConnectorStatus(ConnectorHealthStatus value) {
    SetConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the connector health was last checked.</p>
   */
  inline const Aws::Utils::DateTime& GetLastCheckedAt() const { return m_lastCheckedAt; }
  inline bool LastCheckedAtHasBeenSet() const { return m_lastCheckedAtHasBeenSet; }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  void SetLastCheckedAt(LastCheckedAtT&& value) {
    m_lastCheckedAtHasBeenSet = true;
    m_lastCheckedAt = std::forward<LastCheckedAtT>(value);
  }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  ConnectorHealth& WithLastCheckedAt(LastCheckedAtT&& value) {
    SetLastCheckedAt(std::forward<LastCheckedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional details about the connector health status.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ConnectorHealth& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorHealthStatus m_connectorStatus{ConnectorHealthStatus::NOT_SET};

  Aws::Utils::DateTime m_lastCheckedAt{};

  Aws::String m_message;
  bool m_connectorStatusHasBeenSet = false;
  bool m_lastCheckedAtHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
