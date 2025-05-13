/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/TransitGatewayConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/CustomDNSServer.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class UpdateKxEnvironmentNetworkRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateKxEnvironmentNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxEnvironmentNetwork"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateKxEnvironmentNetworkRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const { return m_transitGatewayConfiguration; }
    inline bool TransitGatewayConfigurationHasBeenSet() const { return m_transitGatewayConfigurationHasBeenSet; }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    void SetTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = std::forward<TransitGatewayConfigurationT>(value); }
    template<typename TransitGatewayConfigurationT = TransitGatewayConfiguration>
    UpdateKxEnvironmentNetworkRequest& WithTransitGatewayConfiguration(TransitGatewayConfigurationT&& value) { SetTransitGatewayConfiguration(std::forward<TransitGatewayConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const { return m_customDNSConfiguration; }
    inline bool CustomDNSConfigurationHasBeenSet() const { return m_customDNSConfigurationHasBeenSet; }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    void SetCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = std::forward<CustomDNSConfigurationT>(value); }
    template<typename CustomDNSConfigurationT = Aws::Vector<CustomDNSServer>>
    UpdateKxEnvironmentNetworkRequest& WithCustomDNSConfiguration(CustomDNSConfigurationT&& value) { SetCustomDNSConfiguration(std::forward<CustomDNSConfigurationT>(value)); return *this;}
    template<typename CustomDNSConfigurationT = CustomDNSServer>
    UpdateKxEnvironmentNetworkRequest& AddCustomDNSConfiguration(CustomDNSConfigurationT&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.emplace_back(std::forward<CustomDNSConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateKxEnvironmentNetworkRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    TransitGatewayConfiguration m_transitGatewayConfiguration;
    bool m_transitGatewayConfigurationHasBeenSet = false;

    Aws::Vector<CustomDNSServer> m_customDNSConfiguration;
    bool m_customDNSConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
