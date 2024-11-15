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
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters();
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }
    inline TelephonyChannelSubtypeParameters& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline TelephonyChannelSubtypeParameters& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline TelephonyChannelSubtypeParameters& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline TelephonyChannelSubtypeParameters& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline TelephonyChannelSubtypeParameters& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline TelephonyChannelSubtypeParameters& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline TelephonyChannelSubtypeParameters& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const{ return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    inline void SetConnectSourcePhoneNumber(const Aws::String& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = value; }
    inline void SetConnectSourcePhoneNumber(Aws::String&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::move(value); }
    inline void SetConnectSourcePhoneNumber(const char* value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber.assign(value); }
    inline TelephonyChannelSubtypeParameters& WithConnectSourcePhoneNumber(const Aws::String& value) { SetConnectSourcePhoneNumber(value); return *this;}
    inline TelephonyChannelSubtypeParameters& WithConnectSourcePhoneNumber(Aws::String&& value) { SetConnectSourcePhoneNumber(std::move(value)); return *this;}
    inline TelephonyChannelSubtypeParameters& WithConnectSourcePhoneNumber(const char* value) { SetConnectSourcePhoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const{ return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    inline void SetAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = value; }
    inline void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::move(value); }
    inline TelephonyChannelSubtypeParameters& WithAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { SetAnswerMachineDetectionConfig(value); return *this;}
    inline TelephonyChannelSubtypeParameters& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { SetAnswerMachineDetectionConfig(std::move(value)); return *this;}
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
