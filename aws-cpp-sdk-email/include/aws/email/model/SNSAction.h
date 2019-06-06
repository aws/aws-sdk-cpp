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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/SNSActionEncoding.h>
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
   * <p>When included in a receipt rule, this action publishes a notification to
   * Amazon Simple Notification Service (Amazon SNS). This action includes a complete
   * copy of the email content in the Amazon SNS notifications. Amazon SNS
   * notifications for all other actions simply provide information about the email.
   * They do not include the email content itself.</p> <p>If you own the Amazon SNS
   * topic, you don't need to do anything to give Amazon SES permission to publish
   * emails to it. However, if you don't own the Amazon SNS topic, you need to attach
   * a policy to the topic to give Amazon SES permissions to access it. For
   * information about giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p> <important> <p>You can only publish emails that are
   * 150 KB or less (including the header) to Amazon SNS. Larger emails will bounce.
   * If you anticipate emails larger than 150 KB, use the S3 action instead.</p>
   * </important> <p>For information about using a receipt rule to publish an Amazon
   * SNS notification, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-sns.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SNSAction">AWS API
   * Reference</a></p>
   */
  class AWS_SES_API SNSAction
  {
  public:
    SNSAction();
    SNSAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    SNSAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SNSAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SNSAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example
     * of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline SNSAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline const SNSActionEncoding& GetEncoding() const{ return m_encoding; }

    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }

    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline void SetEncoding(const SNSActionEncoding& value) { m_encodingHasBeenSet = true; m_encoding = value; }

    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline void SetEncoding(SNSActionEncoding&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }

    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline SNSAction& WithEncoding(const SNSActionEncoding& value) { SetEncoding(value); return *this;}

    /**
     * <p>The encoding to use for the email within the Amazon SNS notification. UTF-8
     * is easier to use, but may not preserve all special characters when a message was
     * encoded with a different encoding format. Base64 preserves all special
     * characters. The default value is UTF-8.</p>
     */
    inline SNSAction& WithEncoding(SNSActionEncoding&& value) { SetEncoding(std::move(value)); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    SNSActionEncoding m_encoding;
    bool m_encodingHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
