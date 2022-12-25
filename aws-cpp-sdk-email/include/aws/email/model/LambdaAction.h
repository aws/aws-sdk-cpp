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
   * <p>When included in a receipt rule, this action calls an AWS Lambda function
   * and, optionally, publishes a notification to Amazon Simple Notification Service
   * (Amazon SNS).</p> <p>To enable Amazon SES to call your AWS Lambda function or to
   * publish to an Amazon SNS topic of another account, Amazon SES must have
   * permission to access those resources. For information about giving permissions,
   * see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p> <p>For information about using AWS Lambda actions
   * in receipt rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-lambda.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/LambdaAction">AWS
   * API Reference</a></p>
   */
  class LambdaAction
  {
  public:
    AWS_SES_API LambdaAction();
    AWS_SES_API LambdaAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API LambdaAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * Lambda action is taken. An example of an Amazon SNS topic ARN is
     * <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information
     * about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an
     * AWS Lambda function ARN is
     * <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more
     * information about AWS Lambda, see the <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda
     * Developer Guide</a>.</p>
     */
    inline LambdaAction& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline LambdaAction& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>The invocation type of the AWS Lambda function. An invocation type of
     * <code>RequestResponse</code> means that the execution of the function will
     * immediately result in a response, and a value of <code>Event</code> means that
     * the function will be invoked asynchronously. The default value is
     * <code>Event</code>. For information about AWS Lambda invocation types, see the
     * <a href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS
     * Lambda Developer Guide</a>.</p>  <p>There is a 30-second timeout on
     * <code>RequestResponse</code> invocations. You should use <code>Event</code>
     * invocation in most cases. Use <code>RequestResponse</code> only when you want to
     * make a mail flow decision, such as whether to stop the receipt rule or the
     * receipt rule set.</p> 
     */
    inline LambdaAction& WithInvocationType(InvocationType&& value) { SetInvocationType(std::move(value)); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
