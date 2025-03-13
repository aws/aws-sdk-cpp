/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/Destination.h>
#include <aws/email/model/Message.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a single formatted email using Amazon SES. For
   * more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-formatted.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendEmailRequest : public SESRequest
  {
  public:
    AWS_SES_API SendEmailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEmail"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>  <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * email address string must be 7-bit ASCII. If you want to send to or from email
     * addresses that contain Unicode characters in the domain part of an address, you
     * must encode the domain using Punycode. Punycode is not permitted in the local
     * part of the email address (the part before the @ sign) nor in the "friendly
     * from" name. If you want to use Unicode characters in the "friendly from" name,
     * you must encode the "friendly from" name using MIME encoded-word syntax, as
     * described in <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Sending raw
     * email using the Amazon SES API</a>. For more information about Punycode, see <a
     * href="http://tools.ietf.org/html/rfc3492">RFC 3492</a>.</p> 
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    SendEmailRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    SendEmailRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to be sent.</p>
     */
    inline const Message& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Message>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Message>
    SendEmailRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const { return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    void SetReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::forward<ReplyToAddressesT>(value); }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    SendEmailRequest& WithReplyToAddresses(ReplyToAddressesT&& value) { SetReplyToAddresses(std::forward<ReplyToAddressesT>(value)); return *this;}
    template<typename ReplyToAddressesT = Aws::String>
    SendEmailRequest& AddReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.emplace_back(std::forward<ReplyToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The email address that bounces and complaints are forwarded to when feedback
     * forwarding is enabled. If the message cannot be delivered to the recipient, then
     * an error message is returned from the recipient's ISP; this message is forwarded
     * to the email address specified by the <code>ReturnPath</code> parameter. The
     * <code>ReturnPath</code> parameter is never overwritten. This email address must
     * be either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. </p>
     */
    inline const Aws::String& GetReturnPath() const { return m_returnPath; }
    inline bool ReturnPathHasBeenSet() const { return m_returnPathHasBeenSet; }
    template<typename ReturnPathT = Aws::String>
    void SetReturnPath(ReturnPathT&& value) { m_returnPathHasBeenSet = true; m_returnPath = std::forward<ReturnPathT>(value); }
    template<typename ReturnPathT = Aws::String>
    SendEmailRequest& WithReturnPath(ReturnPathT&& value) { SetReturnPath(std::forward<ReturnPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    SendEmailRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetReturnPathArn() const { return m_returnPathArn; }
    inline bool ReturnPathArnHasBeenSet() const { return m_returnPathArnHasBeenSet; }
    template<typename ReturnPathArnT = Aws::String>
    void SetReturnPathArn(ReturnPathArnT&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = std::forward<ReturnPathArnT>(value); }
    template<typename ReturnPathArnT = Aws::String>
    SendEmailRequest& WithReturnPathArn(ReturnPathArnT&& value) { SetReturnPathArn(std::forward<ReturnPathArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendEmail</code>. Tags correspond to characteristics of the
     * email that you define, so that you can publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<MessageTag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<MessageTag>>
    SendEmailRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = MessageTag>
    SendEmailRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendEmailRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Message m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    Aws::String m_returnPath;
    bool m_returnPathHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet = false;

    Aws::Vector<MessageTag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
