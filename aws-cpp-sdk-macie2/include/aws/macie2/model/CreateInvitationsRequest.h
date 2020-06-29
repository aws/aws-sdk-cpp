/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API CreateInvitationsRequest : public Macie2Request
  {
  public:
    CreateInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvitations"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline CreateInvitationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline CreateInvitationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline CreateInvitationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline CreateInvitationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists AWS account IDs, one for each account to send the
     * invitation to.</p>
     */
    inline CreateInvitationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>Specifies whether to send an email notification to the root user of each
     * account that the invitation will be sent to. This notification is in addition to
     * an alert that the root user receives in AWS Personal Health Dashboard. To send
     * an email notification to the root user of each account, set this value to
     * true.</p>
     */
    inline bool GetDisableEmailNotification() const{ return m_disableEmailNotification; }

    /**
     * <p>Specifies whether to send an email notification to the root user of each
     * account that the invitation will be sent to. This notification is in addition to
     * an alert that the root user receives in AWS Personal Health Dashboard. To send
     * an email notification to the root user of each account, set this value to
     * true.</p>
     */
    inline bool DisableEmailNotificationHasBeenSet() const { return m_disableEmailNotificationHasBeenSet; }

    /**
     * <p>Specifies whether to send an email notification to the root user of each
     * account that the invitation will be sent to. This notification is in addition to
     * an alert that the root user receives in AWS Personal Health Dashboard. To send
     * an email notification to the root user of each account, set this value to
     * true.</p>
     */
    inline void SetDisableEmailNotification(bool value) { m_disableEmailNotificationHasBeenSet = true; m_disableEmailNotification = value; }

    /**
     * <p>Specifies whether to send an email notification to the root user of each
     * account that the invitation will be sent to. This notification is in addition to
     * an alert that the root user receives in AWS Personal Health Dashboard. To send
     * an email notification to the root user of each account, set this value to
     * true.</p>
     */
    inline CreateInvitationsRequest& WithDisableEmailNotification(bool value) { SetDisableEmailNotification(value); return *this;}


    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline CreateInvitationsRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline CreateInvitationsRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A custom message to include in the invitation. Amazon Macie adds this message
     * to the standard content that it sends for an invitation.</p>
     */
    inline CreateInvitationsRequest& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    bool m_disableEmailNotification;
    bool m_disableEmailNotificationHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
