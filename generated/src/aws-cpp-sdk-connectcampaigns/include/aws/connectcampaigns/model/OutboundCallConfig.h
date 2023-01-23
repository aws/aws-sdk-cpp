/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The configuration used for outbound calls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/OutboundCallConfig">AWS
   * API Reference</a></p>
   */
  class OutboundCallConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig();
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const{ return m_answerMachineDetectionConfig; }

    
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }

    
    inline void SetAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = value; }

    
    inline void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::move(value); }

    
    inline OutboundCallConfig& WithAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { SetAnswerMachineDetectionConfig(value); return *this;}

    
    inline OutboundCallConfig& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { SetAnswerMachineDetectionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetConnectContactFlowId() const{ return m_connectContactFlowId; }

    
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }

    
    inline void SetConnectContactFlowId(const Aws::String& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = value; }

    
    inline void SetConnectContactFlowId(Aws::String&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::move(value); }

    
    inline void SetConnectContactFlowId(const char* value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId.assign(value); }

    
    inline OutboundCallConfig& WithConnectContactFlowId(const Aws::String& value) { SetConnectContactFlowId(value); return *this;}

    
    inline OutboundCallConfig& WithConnectContactFlowId(Aws::String&& value) { SetConnectContactFlowId(std::move(value)); return *this;}

    
    inline OutboundCallConfig& WithConnectContactFlowId(const char* value) { SetConnectContactFlowId(value); return *this;}


    
    inline const Aws::String& GetConnectQueueId() const{ return m_connectQueueId; }

    
    inline bool ConnectQueueIdHasBeenSet() const { return m_connectQueueIdHasBeenSet; }

    
    inline void SetConnectQueueId(const Aws::String& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = value; }

    
    inline void SetConnectQueueId(Aws::String&& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = std::move(value); }

    
    inline void SetConnectQueueId(const char* value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId.assign(value); }

    
    inline OutboundCallConfig& WithConnectQueueId(const Aws::String& value) { SetConnectQueueId(value); return *this;}

    
    inline OutboundCallConfig& WithConnectQueueId(Aws::String&& value) { SetConnectQueueId(std::move(value)); return *this;}

    
    inline OutboundCallConfig& WithConnectQueueId(const char* value) { SetConnectQueueId(value); return *this;}


    
    inline const Aws::String& GetConnectSourcePhoneNumber() const{ return m_connectSourcePhoneNumber; }

    
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }

    
    inline void SetConnectSourcePhoneNumber(const Aws::String& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = value; }

    
    inline void SetConnectSourcePhoneNumber(Aws::String&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::move(value); }

    
    inline void SetConnectSourcePhoneNumber(const char* value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber.assign(value); }

    
    inline OutboundCallConfig& WithConnectSourcePhoneNumber(const Aws::String& value) { SetConnectSourcePhoneNumber(value); return *this;}

    
    inline OutboundCallConfig& WithConnectSourcePhoneNumber(Aws::String&& value) { SetConnectSourcePhoneNumber(std::move(value)); return *this;}

    
    inline OutboundCallConfig& WithConnectSourcePhoneNumber(const char* value) { SetConnectSourcePhoneNumber(value); return *this;}

  private:

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectQueueId;
    bool m_connectQueueIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
