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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The email configuration type.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API EmailConfigurationType
  {
  public:
    EmailConfigurationType();
    EmailConfigurationType(const Aws::Utils::Json::JsonValue& jsonValue);
    EmailConfigurationType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline EmailConfigurationType& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline EmailConfigurationType& WithSourceArn(Aws::String&& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the email source.</p>
     */
    inline EmailConfigurationType& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline const Aws::String& GetReplyToEmailAddress() const{ return m_replyToEmailAddress; }

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline void SetReplyToEmailAddress(const Aws::String& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = value; }

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline void SetReplyToEmailAddress(Aws::String&& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = value; }

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline void SetReplyToEmailAddress(const char* value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress.assign(value); }

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const Aws::String& value) { SetReplyToEmailAddress(value); return *this;}

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(Aws::String&& value) { SetReplyToEmailAddress(value); return *this;}

    /**
     * <p>The REPLY-TO email address.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const char* value) { SetReplyToEmailAddress(value); return *this;}

  private:
    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;
    Aws::String m_replyToEmailAddress;
    bool m_replyToEmailAddressHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
