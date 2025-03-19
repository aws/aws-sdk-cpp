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
   * <p>Settings that allow management of telephony permissions for an Amazon Chime
   * user, such as inbound and outbound calling and text messaging.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TelephonySettings">AWS
   * API Reference</a></p>
   */
  class TelephonySettings
  {
  public:
    AWS_CHIME_API TelephonySettings() = default;
    AWS_CHIME_API TelephonySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API TelephonySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows or denies inbound calling.</p>
     */
    inline bool GetInboundCalling() const { return m_inboundCalling; }
    inline bool InboundCallingHasBeenSet() const { return m_inboundCallingHasBeenSet; }
    inline void SetInboundCalling(bool value) { m_inboundCallingHasBeenSet = true; m_inboundCalling = value; }
    inline TelephonySettings& WithInboundCalling(bool value) { SetInboundCalling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows or denies outbound calling.</p>
     */
    inline bool GetOutboundCalling() const { return m_outboundCalling; }
    inline bool OutboundCallingHasBeenSet() const { return m_outboundCallingHasBeenSet; }
    inline void SetOutboundCalling(bool value) { m_outboundCallingHasBeenSet = true; m_outboundCalling = value; }
    inline TelephonySettings& WithOutboundCalling(bool value) { SetOutboundCalling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows or denies SMS messaging.</p>
     */
    inline bool GetSMS() const { return m_sMS; }
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }
    inline void SetSMS(bool value) { m_sMSHasBeenSet = true; m_sMS = value; }
    inline TelephonySettings& WithSMS(bool value) { SetSMS(value); return *this;}
    ///@}
  private:

    bool m_inboundCalling{false};
    bool m_inboundCallingHasBeenSet = false;

    bool m_outboundCalling{false};
    bool m_outboundCallingHasBeenSet = false;

    bool m_sMS{false};
    bool m_sMSHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
