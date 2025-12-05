/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationSummary.h>
#include <aws/connectcampaignsv2/model/LambdaIntegrationSummary.h>
#include <aws/connectcampaignsv2/model/QConnectIntegrationSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Integration summary for Connect instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/IntegrationSummary">AWS
 * API Reference</a></p>
 */
class IntegrationSummary {
 public:
  AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary() = default;
  AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const CustomerProfilesIntegrationSummary& GetCustomerProfiles() const { return m_customerProfiles; }
  inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
  template <typename CustomerProfilesT = CustomerProfilesIntegrationSummary>
  void SetCustomerProfiles(CustomerProfilesT&& value) {
    m_customerProfilesHasBeenSet = true;
    m_customerProfiles = std::forward<CustomerProfilesT>(value);
  }
  template <typename CustomerProfilesT = CustomerProfilesIntegrationSummary>
  IntegrationSummary& WithCustomerProfiles(CustomerProfilesT&& value) {
    SetCustomerProfiles(std::forward<CustomerProfilesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const QConnectIntegrationSummary& GetQConnect() const { return m_qConnect; }
  inline bool QConnectHasBeenSet() const { return m_qConnectHasBeenSet; }
  template <typename QConnectT = QConnectIntegrationSummary>
  void SetQConnect(QConnectT&& value) {
    m_qConnectHasBeenSet = true;
    m_qConnect = std::forward<QConnectT>(value);
  }
  template <typename QConnectT = QConnectIntegrationSummary>
  IntegrationSummary& WithQConnect(QConnectT&& value) {
    SetQConnect(std::forward<QConnectT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LambdaIntegrationSummary& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = LambdaIntegrationSummary>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = LambdaIntegrationSummary>
  IntegrationSummary& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}
 private:
  CustomerProfilesIntegrationSummary m_customerProfiles;

  QConnectIntegrationSummary m_qConnect;

  LambdaIntegrationSummary m_lambda;
  bool m_customerProfilesHasBeenSet = false;
  bool m_qConnectHasBeenSet = false;
  bool m_lambdaHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
