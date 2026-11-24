/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryFailureReason.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/apiportal/model/DiscoveryStatusValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>The state of API discovery for one discovery source.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DiscoveryStatus">AWS
 * API Reference</a></p>
 */
class DiscoveryStatus {
 public:
  AWS_APIPORTAL_API DiscoveryStatus() = default;
  AWS_APIPORTAL_API DiscoveryStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API DiscoveryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS account ID the status applies to.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  DiscoveryStatus& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DiscoverySource GetDiscoverySource() const { return m_discoverySource; }
  inline bool DiscoverySourceHasBeenSet() const { return m_discoverySourceHasBeenSet; }
  inline void SetDiscoverySource(DiscoverySource value) {
    m_discoverySourceHasBeenSet = true;
    m_discoverySource = value;
  }
  inline DiscoveryStatus& WithDiscoverySource(DiscoverySource value) {
    SetDiscoverySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of discovery for this source.</p>
   */
  inline DiscoveryStatusValue GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DiscoveryStatusValue value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DiscoveryStatus& WithStatus(DiscoveryStatusValue value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Typed reason for failure, present only when <code>status</code> is
   * <code>FAILED</code></p>
   */
  inline DiscoveryFailureReason GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  inline void SetFailureReason(DiscoveryFailureReason value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = value;
  }
  inline DiscoveryStatus& WithFailureReason(DiscoveryFailureReason value) {
    SetFailureReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  DiscoverySource m_discoverySource{DiscoverySource::NOT_SET};

  DiscoveryStatusValue m_status{DiscoveryStatusValue::NOT_SET};

  DiscoveryFailureReason m_failureReason{DiscoveryFailureReason::NOT_SET};
  bool m_accountIdHasBeenSet = false;
  bool m_discoverySourceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
