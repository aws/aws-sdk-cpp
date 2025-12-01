/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationIdentifier.h>
#include <aws/connectcampaignsv2/model/LambdaIntegrationIdentifier.h>
#include <aws/connectcampaignsv2/model/QConnectIntegrationIdentifier.h>

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
 * <p>Integration identifier for Connect instance</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/IntegrationIdentifier">AWS
 * API Reference</a></p>
 */
class IntegrationIdentifier {
 public:
  AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier() = default;
  AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const CustomerProfilesIntegrationIdentifier& GetCustomerProfiles() const { return m_customerProfiles; }
  inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
  template <typename CustomerProfilesT = CustomerProfilesIntegrationIdentifier>
  void SetCustomerProfiles(CustomerProfilesT&& value) {
    m_customerProfilesHasBeenSet = true;
    m_customerProfiles = std::forward<CustomerProfilesT>(value);
  }
  template <typename CustomerProfilesT = CustomerProfilesIntegrationIdentifier>
  IntegrationIdentifier& WithCustomerProfiles(CustomerProfilesT&& value) {
    SetCustomerProfiles(std::forward<CustomerProfilesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const QConnectIntegrationIdentifier& GetQConnect() const { return m_qConnect; }
  inline bool QConnectHasBeenSet() const { return m_qConnectHasBeenSet; }
  template <typename QConnectT = QConnectIntegrationIdentifier>
  void SetQConnect(QConnectT&& value) {
    m_qConnectHasBeenSet = true;
    m_qConnect = std::forward<QConnectT>(value);
  }
  template <typename QConnectT = QConnectIntegrationIdentifier>
  IntegrationIdentifier& WithQConnect(QConnectT&& value) {
    SetQConnect(std::forward<QConnectT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LambdaIntegrationIdentifier& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = LambdaIntegrationIdentifier>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = LambdaIntegrationIdentifier>
  IntegrationIdentifier& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}
 private:
  CustomerProfilesIntegrationIdentifier m_customerProfiles;
  bool m_customerProfilesHasBeenSet = false;

  QConnectIntegrationIdentifier m_qConnect;
  bool m_qConnectHasBeenSet = false;

  LambdaIntegrationIdentifier m_lambda;
  bool m_lambdaHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
