/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/VoiceConnectorAwsRegion.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateVoiceConnectorRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateVoiceConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceConnector"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Chime Voice Connector.</p>
     */
    inline CreateVoiceConnectorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline const VoiceConnectorAwsRegion& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline void SetAwsRegion(const VoiceConnectorAwsRegion& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline void SetAwsRegion(VoiceConnectorAwsRegion&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline CreateVoiceConnectorRequest& WithAwsRegion(const VoiceConnectorAwsRegion& value) { SetAwsRegion(value); return *this;}

    /**
     * <p> The AWS Region in which the Amazon Chime Voice Connector is created. Default
     * value: <code>us-east-1</code> . </p>
     */
    inline CreateVoiceConnectorRequest& WithAwsRegion(VoiceConnectorAwsRegion&& value) { SetAwsRegion(std::move(value)); return *this;}


    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline bool GetRequireEncryption() const{ return m_requireEncryption; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline bool RequireEncryptionHasBeenSet() const { return m_requireEncryptionHasBeenSet; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
    inline void SetRequireEncryption(bool value) { m_requireEncryptionHasBeenSet = true; m_requireEncryption = value; }

    /**
     * <p>When enabled, requires encryption for the Amazon Chime Voice Connector.</p>
     */
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
} // namespace Chime
} // namespace Aws
