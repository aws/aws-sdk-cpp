/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/CallLegType.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class StartSpeakerSearchTaskRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API StartSpeakerSearchTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSpeakerSearchTask"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of the call being analyzed.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}


    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline const CallLegType& GetCallLeg() const{ return m_callLeg; }

    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline bool CallLegHasBeenSet() const { return m_callLegHasBeenSet; }

    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline void SetCallLeg(const CallLegType& value) { m_callLegHasBeenSet = true; m_callLeg = value; }

    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline void SetCallLeg(CallLegType&& value) { m_callLegHasBeenSet = true; m_callLeg = std::move(value); }

    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithCallLeg(const CallLegType& value) { SetCallLeg(value); return *this;}

    /**
     * <p>Specifies which call leg to stream for speaker search.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithCallLeg(CallLegType&& value) { SetCallLeg(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    CallLegType m_callLeg;
    bool m_callLegHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
