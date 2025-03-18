/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
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
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig() = default;
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API OutboundCallConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectContactFlowId() const { return m_connectContactFlowId; }
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }
    template<typename ConnectContactFlowIdT = Aws::String>
    void SetConnectContactFlowId(ConnectContactFlowIdT&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::forward<ConnectContactFlowIdT>(value); }
    template<typename ConnectContactFlowIdT = Aws::String>
    OutboundCallConfig& WithConnectContactFlowId(ConnectContactFlowIdT&& value) { SetConnectContactFlowId(std::forward<ConnectContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const { return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    void SetConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::forward<ConnectSourcePhoneNumberT>(value); }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    OutboundCallConfig& WithConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { SetConnectSourcePhoneNumber(std::forward<ConnectSourcePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectQueueId() const { return m_connectQueueId; }
    inline bool ConnectQueueIdHasBeenSet() const { return m_connectQueueIdHasBeenSet; }
    template<typename ConnectQueueIdT = Aws::String>
    void SetConnectQueueId(ConnectQueueIdT&& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = std::forward<ConnectQueueIdT>(value); }
    template<typename ConnectQueueIdT = Aws::String>
    OutboundCallConfig& WithConnectQueueId(ConnectQueueIdT&& value) { SetConnectQueueId(std::forward<ConnectQueueIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const { return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::forward<AnswerMachineDetectionConfigT>(value); }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    OutboundCallConfig& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { SetAnswerMachineDetectionConfig(std::forward<AnswerMachineDetectionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    Aws::String m_connectQueueId;
    bool m_connectQueueIdHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
