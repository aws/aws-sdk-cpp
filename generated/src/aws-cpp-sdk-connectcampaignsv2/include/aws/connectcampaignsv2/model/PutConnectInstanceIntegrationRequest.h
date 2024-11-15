/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/IntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for PutConnectInstanceIntegration API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutConnectInstanceIntegrationRequest">AWS
   * API Reference</a></p>
   */
  class PutConnectInstanceIntegrationRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutConnectInstanceIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConnectInstanceIntegration"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }
    inline PutConnectInstanceIntegrationRequest& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}
    inline PutConnectInstanceIntegrationRequest& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}
    inline PutConnectInstanceIntegrationRequest& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const IntegrationConfig& GetIntegrationConfig() const{ return m_integrationConfig; }
    inline bool IntegrationConfigHasBeenSet() const { return m_integrationConfigHasBeenSet; }
    inline void SetIntegrationConfig(const IntegrationConfig& value) { m_integrationConfigHasBeenSet = true; m_integrationConfig = value; }
    inline void SetIntegrationConfig(IntegrationConfig&& value) { m_integrationConfigHasBeenSet = true; m_integrationConfig = std::move(value); }
    inline PutConnectInstanceIntegrationRequest& WithIntegrationConfig(const IntegrationConfig& value) { SetIntegrationConfig(value); return *this;}
    inline PutConnectInstanceIntegrationRequest& WithIntegrationConfig(IntegrationConfig&& value) { SetIntegrationConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    IntegrationConfig m_integrationConfig;
    bool m_integrationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
