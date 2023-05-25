/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The details of an Amazon Chime SDK Voice Connector call.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CallDetails">AWS
   * API Reference</a></p>
   */
  class CallDetails
  {
  public:
    AWS_CHIMESDKVOICE_API CallDetails();
    AWS_CHIMESDKVOICE_API CallDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API CallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline CallDetails& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline CallDetails& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline CallDetails& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline CallDetails& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline CallDetails& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of a Voice Connector call.</p>
     */
    inline CallDetails& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>Identifies a person as the caller or the callee.</p>
     */
    inline bool GetIsCaller() const{ return m_isCaller; }

    /**
     * <p>Identifies a person as the caller or the callee.</p>
     */
    inline bool IsCallerHasBeenSet() const { return m_isCallerHasBeenSet; }

    /**
     * <p>Identifies a person as the caller or the callee.</p>
     */
    inline void SetIsCaller(bool value) { m_isCallerHasBeenSet = true; m_isCaller = value; }

    /**
     * <p>Identifies a person as the caller or the callee.</p>
     */
    inline CallDetails& WithIsCaller(bool value) { SetIsCaller(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    bool m_isCaller;
    bool m_isCallerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
