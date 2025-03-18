/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>UpdateCampaignOutboundCallConfigRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignOutboundCallConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignOutboundCallConfigRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API UpdateCampaignOutboundCallConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignOutboundCallConfig"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateCampaignOutboundCallConfigRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectContactFlowId() const { return m_connectContactFlowId; }
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }
    template<typename ConnectContactFlowIdT = Aws::String>
    void SetConnectContactFlowId(ConnectContactFlowIdT&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::forward<ConnectContactFlowIdT>(value); }
    template<typename ConnectContactFlowIdT = Aws::String>
    UpdateCampaignOutboundCallConfigRequest& WithConnectContactFlowId(ConnectContactFlowIdT&& value) { SetConnectContactFlowId(std::forward<ConnectContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const { return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    void SetConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::forward<ConnectSourcePhoneNumberT>(value); }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    UpdateCampaignOutboundCallConfigRequest& WithConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { SetConnectSourcePhoneNumber(std::forward<ConnectSourcePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const { return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::forward<AnswerMachineDetectionConfigT>(value); }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    UpdateCampaignOutboundCallConfigRequest& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { SetAnswerMachineDetectionConfig(std::forward<AnswerMachineDetectionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
