/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Parameters for the Telephony Channel Subtype</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TelephonyChannelSubtypeParameters">AWS
   * API Reference</a></p>
   */
  class TelephonyChannelSubtypeParameters
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters() = default;
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    TelephonyChannelSubtypeParameters& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    TelephonyChannelSubtypeParameters& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    TelephonyChannelSubtypeParameters& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const { return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    void SetConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::forward<ConnectSourcePhoneNumberT>(value); }
    template<typename ConnectSourcePhoneNumberT = Aws::String>
    TelephonyChannelSubtypeParameters& WithConnectSourcePhoneNumber(ConnectSourcePhoneNumberT&& value) { SetConnectSourcePhoneNumber(std::forward<ConnectSourcePhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const { return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::forward<AnswerMachineDetectionConfigT>(value); }
    template<typename AnswerMachineDetectionConfigT = AnswerMachineDetectionConfig>
    TelephonyChannelSubtypeParameters& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfigT&& value) { SetAnswerMachineDetectionConfig(std::forward<AnswerMachineDetectionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
