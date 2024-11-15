/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationSummary.h>
#include <aws/connectcampaignsv2/model/QConnectIntegrationSummary.h>
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
   * <p>Integration summary for Connect instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/IntegrationSummary">AWS
   * API Reference</a></p>
   */
  class IntegrationSummary
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary();
    AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API IntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CustomerProfilesIntegrationSummary& GetCustomerProfiles() const{ return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    inline void SetCustomerProfiles(const CustomerProfilesIntegrationSummary& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = value; }
    inline void SetCustomerProfiles(CustomerProfilesIntegrationSummary&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::move(value); }
    inline IntegrationSummary& WithCustomerProfiles(const CustomerProfilesIntegrationSummary& value) { SetCustomerProfiles(value); return *this;}
    inline IntegrationSummary& WithCustomerProfiles(CustomerProfilesIntegrationSummary&& value) { SetCustomerProfiles(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const QConnectIntegrationSummary& GetQConnect() const{ return m_qConnect; }
    inline bool QConnectHasBeenSet() const { return m_qConnectHasBeenSet; }
    inline void SetQConnect(const QConnectIntegrationSummary& value) { m_qConnectHasBeenSet = true; m_qConnect = value; }
    inline void SetQConnect(QConnectIntegrationSummary&& value) { m_qConnectHasBeenSet = true; m_qConnect = std::move(value); }
    inline IntegrationSummary& WithQConnect(const QConnectIntegrationSummary& value) { SetQConnect(value); return *this;}
    inline IntegrationSummary& WithQConnect(QConnectIntegrationSummary&& value) { SetQConnect(std::move(value)); return *this;}
    ///@}
  private:

    CustomerProfilesIntegrationSummary m_customerProfiles;
    bool m_customerProfilesHasBeenSet = false;

    QConnectIntegrationSummary m_qConnect;
    bool m_qConnectHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
