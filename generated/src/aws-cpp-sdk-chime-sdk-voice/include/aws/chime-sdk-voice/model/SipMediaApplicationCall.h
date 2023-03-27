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
   * <p>A <code>Call</code> instance for a SIP media application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipMediaApplicationCall">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationCall
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplicationCall();
    AWS_CHIMESDKVOICE_API SipMediaApplicationCall(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplicationCall& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The call's transaction ID.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The call's transaction ID.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The call's transaction ID.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The call's transaction ID.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The call's transaction ID.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The call's transaction ID.</p>
     */
    inline SipMediaApplicationCall& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The call's transaction ID.</p>
     */
    inline SipMediaApplicationCall& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The call's transaction ID.</p>
     */
    inline SipMediaApplicationCall& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
