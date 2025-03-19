/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/AnswerMachineDetectionConfig.h>
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
   * <p>Default Telephony Outbound config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TelephonyOutboundConfig">AWS
   * API Reference</a></p>
   */
  class TelephonyOutboundConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectContactFlowId() const { return m_connectContactFlowId; }
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }
    template<typename ConnectContactFlowIdT = Aws::String>
    void SetConnectContactFlowId(ConnectContactFlowIdT&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::forward<ConnectContactFlowIdT>(value); }
    template<typename ConnectContactFlowIdT = Aws::String>
    TelephonyOutboundConfig& WithConnectContactFlowId(ConnectContactFlowIdT&& value) { SetConnectContactFlowId(std::forward<ConnectContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const { return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    void SetConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::forward<ConnectSourcePhoneNumberT>(value); }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    TelephonyOutboundConfig& WithConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { SetConnectSourcePhoneNumber(std::forward<ConnectSourcePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const { return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::forward<AnswerMachineDetectionConfigT>(value); }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    TelephonyOutboundConfig& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { SetAnswerMachineDetectionConfig(std::forward<AnswerMachineDetectionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
