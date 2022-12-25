/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A request to delete an existing email identity. When you delete an identity,
   * you lose the ability to use Amazon Pinpoint to send email from that identity.
   * You can restore your ability to send email by completing the verification
   * process for the identity again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteEmailIdentityRequest">AWS
   * API Reference</a></p>
   */
  class DeleteEmailIdentityRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API DeleteEmailIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEmailIdentity"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline DeleteEmailIdentityRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline DeleteEmailIdentityRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The identity (that is, the email address or domain) that you want to delete
     * from your Amazon Pinpoint account.</p>
     */
    inline DeleteEmailIdentityRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
