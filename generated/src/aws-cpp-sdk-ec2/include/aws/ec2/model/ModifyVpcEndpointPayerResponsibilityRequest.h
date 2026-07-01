/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PayerResponsibilityScope.h>
#include <aws/ec2/model/PayerResponsibilityType.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyVpcEndpointPayerResponsibilityRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyVpcEndpointPayerResponsibilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointPayerResponsibility"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyVpcEndpointPayerResponsibilityRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  ModifyVpcEndpointPayerResponsibilityRequest& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  ModifyVpcEndpointPayerResponsibilityRequest& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account to which the usage of VPC endpoint is
   * charged.</p>
   */
  inline PayerResponsibilityType GetPayerResponsibility() const { return m_payerResponsibility; }
  inline bool PayerResponsibilityHasBeenSet() const { return m_payerResponsibilityHasBeenSet; }
  inline void SetPayerResponsibility(PayerResponsibilityType value) {
    m_payerResponsibilityHasBeenSet = true;
    m_payerResponsibility = value;
  }
  inline ModifyVpcEndpointPayerResponsibilityRequest& WithPayerResponsibility(PayerResponsibilityType value) {
    SetPayerResponsibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of usage/charges for which the billing account is being
   * modified.</p>
   */
  inline PayerResponsibilityScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(PayerResponsibilityScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline ModifyVpcEndpointPayerResponsibilityRequest& WithScope(PayerResponsibilityScope value) {
    SetScope(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_serviceId;

  Aws::String m_vpcEndpointId;

  PayerResponsibilityType m_payerResponsibility{PayerResponsibilityType::NOT_SET};

  PayerResponsibilityScope m_scope{PayerResponsibilityScope::NOT_SET};
  bool m_dryRunHasBeenSet = false;
  bool m_serviceIdHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_payerResponsibilityHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
