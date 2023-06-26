/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/BulkEmailStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>An object that contains the response from the
   * <code>SendBulkTemplatedEmail</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/BulkEmailDestinationStatus">AWS
   * API Reference</a></p>
   */
  class BulkEmailDestinationStatus
  {
  public:
    AWS_SES_API BulkEmailDestinationStatus();
    AWS_SES_API BulkEmailDestinationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API BulkEmailDestinationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline const BulkEmailStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline void SetStatus(const BulkEmailStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline void SetStatus(BulkEmailStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline BulkEmailDestinationStatus& WithStatus(const BulkEmailStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li> <p>
     * <code>Success</code>: Amazon SES accepted the message, and will attempt to
     * deliver it to the recipients.</p> </li> <li> <p> <code>MessageRejected</code>:
     * The message was rejected because it contained a virus.</p> </li> <li> <p>
     * <code>MailFromDomainNotVerified</code>: The sender's email address or domain was
     * not verified.</p> </li> <li> <p> <code>ConfigurationSetDoesNotExist</code>: The
     * configuration set you specified does not exist.</p> </li> <li> <p>
     * <code>TemplateDoesNotExist</code>: The template you specified does not
     * exist.</p> </li> <li> <p> <code>AccountSuspended</code>: Your account has been
     * shut down because of issues related to your email sending practices.</p> </li>
     * <li> <p> <code>AccountThrottled</code>: The number of emails you can send has
     * been reduced because your account has exceeded its allocated sending limit.</p>
     * </li> <li> <p> <code>AccountDailyQuotaExceeded</code>: You have reached or
     * exceeded the maximum number of emails you can send from your account in a
     * 24-hour period.</p> </li> <li> <p> <code>InvalidSendingPoolName</code>: The
     * configuration set you specified refers to an IP pool that does not exist.</p>
     * </li> <li> <p> <code>AccountSendingPaused</code>: Email sending for the Amazon
     * SES account was disabled using the <a>UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p> <code>ConfigurationSetSendingPaused</code>: Email
     * sending for this configuration set was disabled using the
     * <a>UpdateConfigurationSetSendingEnabled</a> operation.</p> </li> <li> <p>
     * <code>InvalidParameterValue</code>: One or more of the parameters you specified
     * when calling this operation was invalid. See the error message for additional
     * information.</p> </li> <li> <p> <code>TransientFailure</code>: Amazon SES was
     * unable to process your request because of a temporary issue.</p> </li> <li> <p>
     * <code>Failed</code>: Amazon SES was unable to process your request. See the
     * error message for additional information.</p> </li> </ul>
     */
    inline BulkEmailDestinationStatus& WithStatus(BulkEmailStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailDestinationStatus& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    BulkEmailStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
