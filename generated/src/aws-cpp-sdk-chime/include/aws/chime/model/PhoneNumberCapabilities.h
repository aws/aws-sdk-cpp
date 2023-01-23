/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>

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
namespace Chime
{
namespace Model
{

  /**
   * <p>The phone number capabilities for Amazon Chime Business Calling phone
   * numbers, such as enabled inbound and outbound calling and text
   * messaging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PhoneNumberCapabilities">AWS
   * API Reference</a></p>
   */
  class PhoneNumberCapabilities
  {
  public:
    AWS_CHIME_API PhoneNumberCapabilities();
    AWS_CHIME_API PhoneNumberCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API PhoneNumberCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows or denies inbound calling for the specified phone number.</p>
     */
    inline bool GetInboundCall() const{ return m_inboundCall; }

    /**
     * <p>Allows or denies inbound calling for the specified phone number.</p>
     */
    inline bool InboundCallHasBeenSet() const { return m_inboundCallHasBeenSet; }

    /**
     * <p>Allows or denies inbound calling for the specified phone number.</p>
     */
    inline void SetInboundCall(bool value) { m_inboundCallHasBeenSet = true; m_inboundCall = value; }

    /**
     * <p>Allows or denies inbound calling for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithInboundCall(bool value) { SetInboundCall(value); return *this;}


    /**
     * <p>Allows or denies outbound calling for the specified phone number.</p>
     */
    inline bool GetOutboundCall() const{ return m_outboundCall; }

    /**
     * <p>Allows or denies outbound calling for the specified phone number.</p>
     */
    inline bool OutboundCallHasBeenSet() const { return m_outboundCallHasBeenSet; }

    /**
     * <p>Allows or denies outbound calling for the specified phone number.</p>
     */
    inline void SetOutboundCall(bool value) { m_outboundCallHasBeenSet = true; m_outboundCall = value; }

    /**
     * <p>Allows or denies outbound calling for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithOutboundCall(bool value) { SetOutboundCall(value); return *this;}


    /**
     * <p>Allows or denies inbound SMS messaging for the specified phone number.</p>
     */
    inline bool GetInboundSMS() const{ return m_inboundSMS; }

    /**
     * <p>Allows or denies inbound SMS messaging for the specified phone number.</p>
     */
    inline bool InboundSMSHasBeenSet() const { return m_inboundSMSHasBeenSet; }

    /**
     * <p>Allows or denies inbound SMS messaging for the specified phone number.</p>
     */
    inline void SetInboundSMS(bool value) { m_inboundSMSHasBeenSet = true; m_inboundSMS = value; }

    /**
     * <p>Allows or denies inbound SMS messaging for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithInboundSMS(bool value) { SetInboundSMS(value); return *this;}


    /**
     * <p>Allows or denies outbound SMS messaging for the specified phone number.</p>
     */
    inline bool GetOutboundSMS() const{ return m_outboundSMS; }

    /**
     * <p>Allows or denies outbound SMS messaging for the specified phone number.</p>
     */
    inline bool OutboundSMSHasBeenSet() const { return m_outboundSMSHasBeenSet; }

    /**
     * <p>Allows or denies outbound SMS messaging for the specified phone number.</p>
     */
    inline void SetOutboundSMS(bool value) { m_outboundSMSHasBeenSet = true; m_outboundSMS = value; }

    /**
     * <p>Allows or denies outbound SMS messaging for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithOutboundSMS(bool value) { SetOutboundSMS(value); return *this;}


    /**
     * <p>Allows or denies inbound MMS messaging for the specified phone number.</p>
     */
    inline bool GetInboundMMS() const{ return m_inboundMMS; }

    /**
     * <p>Allows or denies inbound MMS messaging for the specified phone number.</p>
     */
    inline bool InboundMMSHasBeenSet() const { return m_inboundMMSHasBeenSet; }

    /**
     * <p>Allows or denies inbound MMS messaging for the specified phone number.</p>
     */
    inline void SetInboundMMS(bool value) { m_inboundMMSHasBeenSet = true; m_inboundMMS = value; }

    /**
     * <p>Allows or denies inbound MMS messaging for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithInboundMMS(bool value) { SetInboundMMS(value); return *this;}


    /**
     * <p>Allows or denies outbound MMS messaging for the specified phone number.</p>
     */
    inline bool GetOutboundMMS() const{ return m_outboundMMS; }

    /**
     * <p>Allows or denies outbound MMS messaging for the specified phone number.</p>
     */
    inline bool OutboundMMSHasBeenSet() const { return m_outboundMMSHasBeenSet; }

    /**
     * <p>Allows or denies outbound MMS messaging for the specified phone number.</p>
     */
    inline void SetOutboundMMS(bool value) { m_outboundMMSHasBeenSet = true; m_outboundMMS = value; }

    /**
     * <p>Allows or denies outbound MMS messaging for the specified phone number.</p>
     */
    inline PhoneNumberCapabilities& WithOutboundMMS(bool value) { SetOutboundMMS(value); return *this;}

  private:

    bool m_inboundCall;
    bool m_inboundCallHasBeenSet = false;

    bool m_outboundCall;
    bool m_outboundCallHasBeenSet = false;

    bool m_inboundSMS;
    bool m_inboundSMSHasBeenSet = false;

    bool m_outboundSMS;
    bool m_outboundSMSHasBeenSet = false;

    bool m_inboundMMS;
    bool m_inboundMMSHasBeenSet = false;

    bool m_outboundMMS;
    bool m_outboundMMSHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
