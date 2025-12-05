/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EnrollmentStatus.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class UpdateEnrollmentConfigurationRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UpdateEnrollmentConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateEnrollmentConfiguration"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The desired enrollment status. </p> <ul> <li> <p>Active - Enables the
   * Automation feature for your account.</p> </li> <li> <p>Inactive - Disables the
   * Automation feature for your account and stops all of your automation rules. If
   * you opt in again later, all rules will be inactive, and you must enable the
   * rules you want to run. You must wait at least 24 hours after opting out to opt
   * in again.</p> </li> </ul>  <p>The <code>Pending</code> and
   * <code>Failed</code> options cannot be used to update the enrollment status of an
   * account. They are returned in the response of a request to update the enrollment
   * status of an account.</p> <p>If you are a member account, your account must be
   * disassociated from your organization’s management account before you can disable
   * Automation. Contact your administrator to make this change.</p>
   */
  inline EnrollmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnrollmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateEnrollmentConfigurationRequest& WithStatus(EnrollmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Must be 1-64 characters long and contain only
   * alphanumeric characters, underscores, and hyphens.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateEnrollmentConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  EnrollmentStatus m_status{EnrollmentStatus::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_statusHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
