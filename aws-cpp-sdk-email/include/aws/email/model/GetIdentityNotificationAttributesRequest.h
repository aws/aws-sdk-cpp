﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return the notification attributes for a list of
   * identities you verified with Amazon SES. For information about Amazon SES
   * notifications, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API GetIdentityNotificationAttributesRequest : public SESRequest
  {
  public:
    GetIdentityNotificationAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentities() const{ return m_identities; }

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline void SetIdentities(const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities = value; }

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline void SetIdentities(Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities = value; }

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline GetIdentityNotificationAttributesRequest& WithIdentities(const Aws::Vector<Aws::String>& value) { SetIdentities(value); return *this;}

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline GetIdentityNotificationAttributesRequest& WithIdentities(Aws::Vector<Aws::String>&& value) { SetIdentities(value); return *this;}

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline GetIdentityNotificationAttributesRequest& AddIdentities(const Aws::String& value) { m_identitiesHasBeenSet = true; m_identities.push_back(value); return *this; }

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline GetIdentityNotificationAttributesRequest& AddIdentities(Aws::String&& value) { m_identitiesHasBeenSet = true; m_identities.push_back(value); return *this; }

    /**
     * <p>A list of one or more identities. You can specify an identity by using its
     * name or by using its Amazon Resource Name (ARN). Examples:
     * <code>user@example.com</code>, <code>example.com</code>,
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline GetIdentityNotificationAttributesRequest& AddIdentities(const char* value) { m_identitiesHasBeenSet = true; m_identities.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_identities;
    bool m_identitiesHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
