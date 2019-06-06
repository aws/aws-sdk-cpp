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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable whether Amazon SES forwards you
   * bounce and complaint notifications through email. For information about email
   * feedback forwarding, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-email.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabledRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SetIdentityFeedbackForwardingEnabledRequest : public SESRequest
  {
  public:
    SetIdentityFeedbackForwardingEnabledRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityFeedbackForwardingEnabled"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityFeedbackForwardingEnabledRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityFeedbackForwardingEnabledRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The identity for which to set bounce and complaint notification forwarding.
     * Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
     */
    inline SetIdentityFeedbackForwardingEnabledRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>Sets whether Amazon SES will forward bounce and complaint notifications as
     * email. <code>true</code> specifies that Amazon SES will forward bounce and
     * complaint notifications as email, in addition to any Amazon SNS topic publishing
     * otherwise specified. <code>false</code> specifies that Amazon SES will publish
     * bounce and complaint notifications only through Amazon SNS. This value can only
     * be set to <code>false</code> when Amazon SNS topics are set for both
     * <code>Bounce</code> and <code>Complaint</code> notification types.</p>
     */
    inline bool GetForwardingEnabled() const{ return m_forwardingEnabled; }

    /**
     * <p>Sets whether Amazon SES will forward bounce and complaint notifications as
     * email. <code>true</code> specifies that Amazon SES will forward bounce and
     * complaint notifications as email, in addition to any Amazon SNS topic publishing
     * otherwise specified. <code>false</code> specifies that Amazon SES will publish
     * bounce and complaint notifications only through Amazon SNS. This value can only
     * be set to <code>false</code> when Amazon SNS topics are set for both
     * <code>Bounce</code> and <code>Complaint</code> notification types.</p>
     */
    inline bool ForwardingEnabledHasBeenSet() const { return m_forwardingEnabledHasBeenSet; }

    /**
     * <p>Sets whether Amazon SES will forward bounce and complaint notifications as
     * email. <code>true</code> specifies that Amazon SES will forward bounce and
     * complaint notifications as email, in addition to any Amazon SNS topic publishing
     * otherwise specified. <code>false</code> specifies that Amazon SES will publish
     * bounce and complaint notifications only through Amazon SNS. This value can only
     * be set to <code>false</code> when Amazon SNS topics are set for both
     * <code>Bounce</code> and <code>Complaint</code> notification types.</p>
     */
    inline void SetForwardingEnabled(bool value) { m_forwardingEnabledHasBeenSet = true; m_forwardingEnabled = value; }

    /**
     * <p>Sets whether Amazon SES will forward bounce and complaint notifications as
     * email. <code>true</code> specifies that Amazon SES will forward bounce and
     * complaint notifications as email, in addition to any Amazon SNS topic publishing
     * otherwise specified. <code>false</code> specifies that Amazon SES will publish
     * bounce and complaint notifications only through Amazon SNS. This value can only
     * be set to <code>false</code> when Amazon SNS topics are set for both
     * <code>Bounce</code> and <code>Complaint</code> notification types.</p>
     */
    inline SetIdentityFeedbackForwardingEnabledRequest& WithForwardingEnabled(bool value) { SetForwardingEnabled(value); return *this;}

  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet;

    bool m_forwardingEnabled;
    bool m_forwardingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
