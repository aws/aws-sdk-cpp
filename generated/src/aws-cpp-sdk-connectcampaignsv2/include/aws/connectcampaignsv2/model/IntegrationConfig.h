/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationConfig.h>
#include <aws/connectcampaignsv2/model/QConnectIntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Integration config for Connect Instance</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/IntegrationConfig">AWS
   * API Reference</a></p>
   */
  class IntegrationConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API IntegrationConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API IntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API IntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CustomerProfilesIntegrationConfig& GetCustomerProfiles() const { return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    template<typename CustomerProfilesT = CustomerProfilesIntegrationConfig>
    void SetCustomerProfiles(CustomerProfilesT&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::forward<CustomerProfilesT>(value); }
    template<typename CustomerProfilesT = CustomerProfilesIntegrationConfig>
    IntegrationConfig& WithCustomerProfiles(CustomerProfilesT&& value) { SetCustomerProfiles(std::forward<CustomerProfilesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const QConnectIntegrationConfig& GetQConnect() const { return m_qConnect; }
    inline bool QConnectHasBeenSet() const { return m_qConnectHasBeenSet; }
    template<typename QConnectT = QConnectIntegrationConfig>
    void SetQConnect(QConnectT&& value) { m_qConnectHasBeenSet = true; m_qConnect = std::forward<QConnectT>(value); }
    template<typename QConnectT = QConnectIntegrationConfig>
    IntegrationConfig& WithQConnect(QConnectT&& value) { SetQConnect(std::forward<QConnectT>(value)); return *this;}
    ///@}
  private:

    CustomerProfilesIntegrationConfig m_customerProfiles;
    bool m_customerProfilesHasBeenSet = false;

    QConnectIntegrationConfig m_qConnect;
    bool m_qConnectHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
