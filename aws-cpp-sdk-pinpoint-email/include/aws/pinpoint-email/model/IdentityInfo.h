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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/IdentityType.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Information about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/IdentityInfo">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API IdentityInfo
  {
  public:
    IdentityInfo();
    IdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    IdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline IdentityInfo& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The email identity type. The identity type can be one of the following:</p>
     * <ul> <li> <p> <code>EMAIL_ADDRESS</code> – The identity is an email address.</p>
     * </li> <li> <p> <code>DOMAIN</code> – The identity is a domain.</p> </li> <li>
     * <p> <code>MANAGED_DOMAIN</code> – The identity is a domain that is managed by
     * AWS.</p> </li> </ul>
     */
    inline IdentityInfo& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The address or domain of the identity.</p>
     */
    inline const Aws::String& GetIdentityName() const{ return m_identityName; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(const Aws::String& value) { m_identityNameHasBeenSet = true; m_identityName = value; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(Aws::String&& value) { m_identityNameHasBeenSet = true; m_identityName = std::move(value); }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(const char* value) { m_identityNameHasBeenSet = true; m_identityName.assign(value); }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(const Aws::String& value) { SetIdentityName(value); return *this;}

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(Aws::String&& value) { SetIdentityName(std::move(value)); return *this;}

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(const char* value) { SetIdentityName(value); return *this;}


    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>In
     * Amazon Pinpoint, an identity is an email address or domain that you send email
     * from. Before you can send email from an identity, you have to demostrate that
     * you own the identity, and that you authorize Amazon Pinpoint to send email from
     * that identity.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>In
     * Amazon Pinpoint, an identity is an email address or domain that you send email
     * from. Before you can send email from an identity, you have to demostrate that
     * you own the identity, and that you authorize Amazon Pinpoint to send email from
     * that identity.</p>
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>In
     * Amazon Pinpoint, an identity is an email address or domain that you send email
     * from. Before you can send email from an identity, you have to demostrate that
     * you own the identity, and that you authorize Amazon Pinpoint to send email from
     * that identity.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>In
     * Amazon Pinpoint, an identity is an email address or domain that you send email
     * from. Before you can send email from an identity, you have to demostrate that
     * you own the identity, and that you authorize Amazon Pinpoint to send email from
     * that identity.</p>
     */
    inline IdentityInfo& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet;

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
