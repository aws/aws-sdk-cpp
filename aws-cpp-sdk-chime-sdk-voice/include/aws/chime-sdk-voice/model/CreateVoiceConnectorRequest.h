/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateVoiceConnectorRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateVoiceConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnector"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateVoiceConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateVoiceConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateVoiceConnectorRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const VoiceConnectorAwsRegion& GetAwsRegion() const{ return m_awsRegion; }

    
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    
    inline void SetAwsRegion(const VoiceConnectorAwsRegion& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    
    inline void SetAwsRegion(VoiceConnectorAwsRegion&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    
    inline CreateVoiceConnectorRequest& WithAwsRegion(const VoiceConnectorAwsRegion& value) { SetAwsRegion(value); return *this;}

    
    inline CreateVoiceConnectorRequest& WithAwsRegion(VoiceConnectorAwsRegion&& value) { SetAwsRegion(std::move(value)); return *this;}


    
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }

    
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }

    
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }

    
    inline CreateVoiceConnectorRequest& WithRequireEncryption(bool value) { SetRequireEncryption(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VoiceConnectorAwsRegion m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    bool m_requireEncryption;
    bool m_requireEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
