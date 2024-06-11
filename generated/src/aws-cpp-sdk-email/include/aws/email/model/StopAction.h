﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/StopScope.h>
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
   * <p>When included in a receipt rule, this action terminates the evaluation of the
   * receipt rule set and, optionally, publishes a notification to Amazon Simple
   * Notification Service (Amazon SNS).</p> <p>For information about setting a stop
   * action in a receipt rule, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-stop.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/StopAction">AWS
   * API Reference</a></p>
   */
  class StopAction
  {
  public:
    AWS_SES_API StopAction();
    AWS_SES_API StopAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API StopAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The scope of the StopAction. The only acceptable value is
     * <code>RuleSet</code>.</p>
     */
    inline const StopScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const StopScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(StopScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline StopAction& WithScope(const StopScope& value) { SetScope(value); return *this;}
    inline StopAction& WithScope(StopScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * stop action is taken. You can find the ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * Amazon SNS operation.</p> <p>For more information about Amazon SNS topics, see
     * the <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon
     * SNS Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }
    inline StopAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline StopAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline StopAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}
  private:

    StopScope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
