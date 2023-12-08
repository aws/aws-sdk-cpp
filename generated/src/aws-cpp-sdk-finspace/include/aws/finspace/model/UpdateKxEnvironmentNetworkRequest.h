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
    AWS_FINSPACE_API UpdateKxEnvironmentNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxEnvironmentNetwork"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline const TransitGatewayConfiguration& GetTransitGatewayConfiguration() const{ return m_transitGatewayConfiguration; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline bool TransitGatewayConfigurationHasBeenSet() const { return m_transitGatewayConfigurationHasBeenSet; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline void SetTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = value; }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline void SetTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { m_transitGatewayConfigurationHasBeenSet = true; m_transitGatewayConfiguration = std::move(value); }

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithTransitGatewayConfiguration(const TransitGatewayConfiguration& value) { SetTransitGatewayConfiguration(value); return *this;}

    /**
     * <p>Specifies the transit gateway and network configuration to connect the kdb
     * environment to an internal network.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithTransitGatewayConfiguration(TransitGatewayConfiguration&& value) { SetTransitGatewayConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline const Aws::Vector<CustomDNSServer>& GetCustomDNSConfiguration() const{ return m_customDNSConfiguration; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline bool CustomDNSConfigurationHasBeenSet() const { return m_customDNSConfigurationHasBeenSet; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = value; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline void SetCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration = std::move(value); }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithCustomDNSConfiguration(const Aws::Vector<CustomDNSServer>& value) { SetCustomDNSConfiguration(value); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithCustomDNSConfiguration(Aws::Vector<CustomDNSServer>&& value) { SetCustomDNSConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& AddCustomDNSConfiguration(const CustomDNSServer& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of DNS server name and server IP. This is used to set up Route-53
     * outbound resolvers.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& AddCustomDNSConfiguration(CustomDNSServer&& value) { m_customDNSConfigurationHasBeenSet = true; m_customDNSConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateKxEnvironmentNetworkRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    TransitGatewayConfiguration m_transitGatewayConfiguration;
    bool m_transitGatewayConfigurationHasBeenSet = false;

    Aws::Vector<CustomDNSServer> m_customDNSConfiguration;
    bool m_customDNSConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
