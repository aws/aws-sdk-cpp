/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/InvocationType.h>
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
   * <p>When included in a receipt rule, this action calls an Amazon Web Services
   * Lambda function and, optionally, publishes a notification to Amazon Simple
   * Notification Service (Amazon SNS).</p> <p>To enable Amazon SES to call your
   * Amazon Web Services Lambda function or to publish to an Amazon SNS topic of
   * another account, Amazon SES must have permission to access those resources. For
   * information about giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p> <p>For information about using Amazon Web Services
   * Lambda actions in receipt rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-lambda.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/LambdaAction">AWS
   * API Reference</a></p>
   */
  class LambdaAction
  {
  public:
    AWS_SES_API LambdaAction() = default;
    AWS_SES_API LambdaAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API LambdaAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is executed. You can find the ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * operation in Amazon SNS.</p> <p>For more information about Amazon SNS topics,
     * see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    LambdaAction& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Lambda function. An
     * example of an Amazon Web Services Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about Amazon Web Services Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">Amazon Web
     * Services Lambda Developer Guide</a>.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    LambdaAction& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation type of the Amazon Web Services Lambda function. An invocation
     * type of <code>RequestResponse</code> means that the execution of the function
     * immediately results in a response, and a value of <code>Event</code> means that
     * the function is invoked asynchronously. The default value is <code>Event</code>.
     * For information about Amazon Web Services Lambda invocation types, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">Amazon Web
     * Services Lambda Developer Guide</a>.</p>  <p>There is a 30-second
     * timeout on <code>RequestResponse</code> invocations. You should use
     * <code>Event</code> invocation in most cases. Use <code>RequestResponse</code>
     * only to make a mail flow decision, such as whether to stop the receipt rule or
     * the receipt rule set.</p> 
     */
    inline InvocationType GetInvocationType() const { return m_invocationType; }
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
    inline void SetInvocationType(InvocationType value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }
    inline LambdaAction& WithInvocationType(InvocationType value) { SetInvocationType(value); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    InvocationType m_invocationType{InvocationType::NOT_SET};
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
