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
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable DKIM signing of email that you send from an
   * email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityDkimAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutEmailIdentityDkimAttributesRequest : public PinpointEmailRequest
  {
  public:
    PutEmailIdentityDkimAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityDkimAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that Amazon Pinpoint sends from
     * the identity are DKIM-signed. When you set this value to <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline bool GetSigningEnabled() const{ return m_signingEnabled; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that Amazon Pinpoint sends from
     * the identity are DKIM-signed. When you set this value to <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that Amazon Pinpoint sends from
     * the identity are DKIM-signed. When you set this value to <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }

    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that Amazon Pinpoint sends from
     * the identity are DKIM-signed. When you set this value to <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline PutEmailIdentityDkimAttributesRequest& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet;

    bool m_signingEnabled;
    bool m_signingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
