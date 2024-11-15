/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationIdentifier.h>
#include <aws/connectcampaignsv2/model/QConnectIntegrationIdentifier.h>
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
   * <p>Integration identifier for Connect instance</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/IntegrationIdentifier">AWS
   * API Reference</a></p>
   */
  class IntegrationIdentifier
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier();
    AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API IntegrationIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CustomerProfilesIntegrationIdentifier& GetCustomerProfiles() const{ return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    inline void SetCustomerProfiles(const CustomerProfilesIntegrationIdentifier& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = value; }
    inline void SetCustomerProfiles(CustomerProfilesIntegrationIdentifier&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::move(value); }
    inline IntegrationIdentifier& WithCustomerProfiles(const CustomerProfilesIntegrationIdentifier& value) { SetCustomerProfiles(value); return *this;}
    inline IntegrationIdentifier& WithCustomerProfiles(CustomerProfilesIntegrationIdentifier&& value) { SetCustomerProfiles(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const QConnectIntegrationIdentifier& GetQConnect() const{ return m_qConnect; }
    inline bool QConnectHasBeenSet() const { return m_qConnectHasBeenSet; }
    inline void SetQConnect(const QConnectIntegrationIdentifier& value) { m_qConnectHasBeenSet = true; m_qConnect = value; }
    inline void SetQConnect(QConnectIntegrationIdentifier&& value) { m_qConnectHasBeenSet = true; m_qConnect = std::move(value); }
    inline IntegrationIdentifier& WithQConnect(const QConnectIntegrationIdentifier& value) { SetQConnect(value); return *this;}
    inline IntegrationIdentifier& WithQConnect(QConnectIntegrationIdentifier&& value) { SetQConnect(std::move(value)); return *this;}
    ///@}
  private:

    CustomerProfilesIntegrationIdentifier m_customerProfiles;
    bool m_customerProfilesHasBeenSet = false;

    QConnectIntegrationIdentifier m_qConnect;
    bool m_qConnectHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
