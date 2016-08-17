/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to begin email address verification with Amazon SES. For
   * information about email address verification, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API VerifyEmailIdentityRequest : public SESRequest
  {
  public:
    VerifyEmailIdentityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The email address to be verified.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address to be verified.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address to be verified.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address to be verified.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address to be verified.</p>
     */
    inline VerifyEmailIdentityRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address to be verified.</p>
     */
    inline VerifyEmailIdentityRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address to be verified.</p>
     */
    inline VerifyEmailIdentityRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:
    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
