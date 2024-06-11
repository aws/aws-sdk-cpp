﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/MessageTag.h>
#include <aws/email/model/BulkEmailDestination.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a templated email to multiple destinations using
   * Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBulkTemplatedEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendBulkTemplatedEmailRequest : public SESRequest
  {
  public:
    AWS_SES_API SendBulkTemplatedEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBulkTemplatedEmail"; }

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
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}
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
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }
    inline SendBulkTemplatedEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
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
    inline const Aws::String& GetReturnPath() const{ return m_returnPath; }
    inline bool ReturnPathHasBeenSet() const { return m_returnPathHasBeenSet; }
    inline void SetReturnPath(const Aws::String& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }
    inline void SetReturnPath(Aws::String&& value) { m_returnPathHasBeenSet = true; m_returnPath = std::move(value); }
    inline void SetReturnPath(const char* value) { m_returnPathHasBeenSet = true; m_returnPath.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithReturnPath(const Aws::String& value) { SetReturnPath(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithReturnPath(Aws::String&& value) { SetReturnPath(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithReturnPath(const char* value) { SetReturnPath(value); return *this;}
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
    inline const Aws::String& GetReturnPathArn() const{ return m_returnPathArn; }
    inline bool ReturnPathArnHasBeenSet() const { return m_returnPathArnHasBeenSet; }
    inline void SetReturnPathArn(const Aws::String& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = value; }
    inline void SetReturnPathArn(Aws::String&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = std::move(value); }
    inline void SetReturnPathArn(const char* value) { m_returnPathArnHasBeenSet = true; m_returnPathArn.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(const Aws::String& value) { SetReturnPathArn(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(Aws::String&& value) { SetReturnPathArn(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(const char* value) { SetReturnPathArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline const Aws::Vector<MessageTag>& GetDefaultTags() const{ return m_defaultTags; }
    inline bool DefaultTagsHasBeenSet() const { return m_defaultTagsHasBeenSet; }
    inline void SetDefaultTags(const Aws::Vector<MessageTag>& value) { m_defaultTagsHasBeenSet = true; m_defaultTags = value; }
    inline void SetDefaultTags(Aws::Vector<MessageTag>&& value) { m_defaultTagsHasBeenSet = true; m_defaultTags = std::move(value); }
    inline SendBulkTemplatedEmailRequest& WithDefaultTags(const Aws::Vector<MessageTag>& value) { SetDefaultTags(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithDefaultTags(Aws::Vector<MessageTag>&& value) { SetDefaultTags(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& AddDefaultTags(const MessageTag& value) { m_defaultTagsHasBeenSet = true; m_defaultTags.push_back(value); return *this; }
    inline SendBulkTemplatedEmailRequest& AddDefaultTags(MessageTag&& value) { m_defaultTagsHasBeenSet = true; m_defaultTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The template to use when sending this email.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetDefaultTemplateData() const{ return m_defaultTemplateData; }
    inline bool DefaultTemplateDataHasBeenSet() const { return m_defaultTemplateDataHasBeenSet; }
    inline void SetDefaultTemplateData(const Aws::String& value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData = value; }
    inline void SetDefaultTemplateData(Aws::String&& value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData = std::move(value); }
    inline void SetDefaultTemplateData(const char* value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData.assign(value); }
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(const Aws::String& value) { SetDefaultTemplateData(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(Aws::String&& value) { SetDefaultTemplateData(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(const char* value) { SetDefaultTemplateData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> receive the same version of the email. You can specify
     * up to 50 <code>Destination</code> objects within a <code>Destinations</code>
     * array.</p>
     */
    inline const Aws::Vector<BulkEmailDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<BulkEmailDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<BulkEmailDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline SendBulkTemplatedEmailRequest& WithDestinations(const Aws::Vector<BulkEmailDestination>& value) { SetDestinations(value); return *this;}
    inline SendBulkTemplatedEmailRequest& WithDestinations(Aws::Vector<BulkEmailDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline SendBulkTemplatedEmailRequest& AddDestinations(const BulkEmailDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline SendBulkTemplatedEmailRequest& AddDestinations(BulkEmailDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    Aws::String m_returnPath;
    bool m_returnPathHasBeenSet = false;

    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Vector<MessageTag> m_defaultTags;
    bool m_defaultTagsHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_defaultTemplateData;
    bool m_defaultTemplateDataHasBeenSet = false;

    Aws::Vector<BulkEmailDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
