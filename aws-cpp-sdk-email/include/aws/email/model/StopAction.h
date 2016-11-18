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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/StopScope.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>When included in a receipt rule, this action terminates the evaluation of the
   * receipt rule set and, optionally, publishes a notification to Amazon Simple
   * Notification Service (Amazon SNS).</p> <p>For information about setting a stop
   * action in a receipt rule, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-stop.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API StopAction
  {
  public:
    StopAction();
    StopAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    StopAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The scope to which the Stop action applies. That is, what is being
     * stopped.</p>
     */
    inline const StopScope& GetScope() const{ return m_scope; }

    /**
     * <p>The scope to which the Stop action applies. That is, what is being
     * stopped.</p>
     */
    inline void SetScope(const StopScope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope to which the Stop action applies. That is, what is being
     * stopped.</p>
     */
    inline void SetScope(StopScope&& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope to which the Stop action applies. That is, what is being
     * stopped.</p>
     */
    inline StopAction& WithScope(const StopScope& value) { SetScope(value); return *this;}

    /**
     * <p>The scope to which the Stop action applies. That is, what is being
     * stopped.</p>
     */
    inline StopAction& WithScope(StopScope&& value) { SetScope(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline StopAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline StopAction& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline StopAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:
    StopScope m_scope;
    bool m_scopeHasBeenSet;
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
