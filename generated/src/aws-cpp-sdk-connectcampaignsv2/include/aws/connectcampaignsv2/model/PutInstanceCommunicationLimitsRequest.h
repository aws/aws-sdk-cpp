﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/InstanceCommunicationLimitsConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for PutInstanceCommunicationLimits API.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutInstanceCommunicationLimitsRequest">AWS
   * API Reference</a></p>
   */
  class PutInstanceCommunicationLimitsRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutInstanceCommunicationLimitsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInstanceCommunicationLimits"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    PutInstanceCommunicationLimitsRequest& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InstanceCommunicationLimitsConfig& GetCommunicationLimitsConfig() const { return m_communicationLimitsConfig; }
    inline bool CommunicationLimitsConfigHasBeenSet() const { return m_communicationLimitsConfigHasBeenSet; }
    template<typename CommunicationLimitsConfigT = InstanceCommunicationLimitsConfig>
    void SetCommunicationLimitsConfig(CommunicationLimitsConfigT&& value) { m_communicationLimitsConfigHasBeenSet = true; m_communicationLimitsConfig = std::forward<CommunicationLimitsConfigT>(value); }
    template<typename CommunicationLimitsConfigT = InstanceCommunicationLimitsConfig>
    PutInstanceCommunicationLimitsRequest& WithCommunicationLimitsConfig(CommunicationLimitsConfigT&& value) { SetCommunicationLimitsConfig(std::forward<CommunicationLimitsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    InstanceCommunicationLimitsConfig m_communicationLimitsConfig;
    bool m_communicationLimitsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
