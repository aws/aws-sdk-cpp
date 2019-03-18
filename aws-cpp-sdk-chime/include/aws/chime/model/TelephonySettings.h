/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CHIME_API TelephonySettings
  {
  public:
    TelephonySettings();
    TelephonySettings(Aws::Utils::Json::JsonView jsonValue);
    TelephonySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows or denies inbound calling.</p>
     */
    inline bool GetInboundCalling() const{ return m_inboundCalling; }

    /**
     * <p>Allows or denies inbound calling.</p>
     */
    inline bool InboundCallingHasBeenSet() const { return m_inboundCallingHasBeenSet; }

    /**
     * <p>Allows or denies inbound calling.</p>
     */
    inline void SetInboundCalling(bool value) { m_inboundCallingHasBeenSet = true; m_inboundCalling = value; }

    /**
     * <p>Allows or denies inbound calling.</p>
     */
    inline TelephonySettings& WithInboundCalling(bool value) { SetInboundCalling(value); return *this;}


    /**
     * <p>Allows or denies outbound calling.</p>
     */
    inline bool GetOutboundCalling() const{ return m_outboundCalling; }

    /**
     * <p>Allows or denies outbound calling.</p>
     */
    inline bool OutboundCallingHasBeenSet() const { return m_outboundCallingHasBeenSet; }

    /**
     * <p>Allows or denies outbound calling.</p>
     */
    inline void SetOutboundCalling(bool value) { m_outboundCallingHasBeenSet = true; m_outboundCalling = value; }

    /**
     * <p>Allows or denies outbound calling.</p>
     */
    inline TelephonySettings& WithOutboundCalling(bool value) { SetOutboundCalling(value); return *this;}


    /**
     * <p>Allows or denies SMS messaging.</p>
     */
    inline bool GetSMS() const{ return m_sMS; }

    /**
     * <p>Allows or denies SMS messaging.</p>
     */
    inline bool SMSHasBeenSet() const { return m_sMSHasBeenSet; }

    /**
     * <p>Allows or denies SMS messaging.</p>
     */
    inline void SetSMS(bool value) { m_sMSHasBeenSet = true; m_sMS = value; }

    /**
     * <p>Allows or denies SMS messaging.</p>
     */
    inline TelephonySettings& WithSMS(bool value) { SetSMS(value); return *this;}

  private:

    bool m_inboundCalling;
    bool m_inboundCallingHasBeenSet;

    bool m_outboundCalling;
    bool m_outboundCallingHasBeenSet;

    bool m_sMS;
    bool m_sMSHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
