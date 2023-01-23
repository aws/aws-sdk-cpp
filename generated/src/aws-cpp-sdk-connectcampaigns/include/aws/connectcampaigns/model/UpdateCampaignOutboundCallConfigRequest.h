/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONNECTCAMPAIGNS_API UpdateCampaignOutboundCallConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignOutboundCallConfig"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const{ return m_answerMachineDetectionConfig; }

    
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }

    
    inline void SetAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = value; }

    
    inline void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::move(value); }

    
    inline UpdateCampaignOutboundCallConfigRequest& WithAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { SetAnswerMachineDetectionConfig(value); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { SetAnswerMachineDetectionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetConnectContactFlowId() const{ return m_connectContactFlowId; }

    
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }

    
    inline void SetConnectContactFlowId(const Aws::String& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = value; }

    
    inline void SetConnectContactFlowId(Aws::String&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::move(value); }

    
    inline void SetConnectContactFlowId(const char* value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId.assign(value); }

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectContactFlowId(const Aws::String& value) { SetConnectContactFlowId(value); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectContactFlowId(Aws::String&& value) { SetConnectContactFlowId(std::move(value)); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectContactFlowId(const char* value) { SetConnectContactFlowId(value); return *this;}


    
    inline const Aws::String& GetConnectSourcePhoneNumber() const{ return m_connectSourcePhoneNumber; }

    
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }

    
    inline void SetConnectSourcePhoneNumber(const Aws::String& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = value; }

    
    inline void SetConnectSourcePhoneNumber(Aws::String&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::move(value); }

    
    inline void SetConnectSourcePhoneNumber(const char* value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber.assign(value); }

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectSourcePhoneNumber(const Aws::String& value) { SetConnectSourcePhoneNumber(value); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectSourcePhoneNumber(Aws::String&& value) { SetConnectSourcePhoneNumber(std::move(value)); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithConnectSourcePhoneNumber(const char* value) { SetConnectSourcePhoneNumber(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline UpdateCampaignOutboundCallConfigRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateCampaignOutboundCallConfigRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
