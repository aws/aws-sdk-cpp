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
   * <p>When included in a receipt rule, this action calls Amazon WorkMail and,
   * optionally, publishes a notification to Amazon Simple Notification Service
   * (Amazon SNS). You will typically not use this action directly because Amazon
   * WorkMail adds the rule automatically during its setup procedure.</p> <p>For
   * information using a receipt rule to call Amazon WorkMail, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-workmail.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/WorkmailAction">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API WorkmailAction
  {
  public:
    WorkmailAction();
    WorkmailAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    WorkmailAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline WorkmailAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline WorkmailAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline WorkmailAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline const Aws::String& GetOrganizationArn() const{ return m_organizationArn; }

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline void SetOrganizationArn(const Aws::String& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline void SetOrganizationArn(Aws::String&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline void SetOrganizationArn(const char* value) { m_organizationArnHasBeenSet = true; m_organizationArn.assign(value); }

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline WorkmailAction& WithOrganizationArn(const Aws::String& value) { SetOrganizationArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline WorkmailAction& WithOrganizationArn(Aws::String&& value) { SetOrganizationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail
     * organization ARN is
     * <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>.
     * For information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline WorkmailAction& WithOrganizationArn(const char* value) { SetOrganizationArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
