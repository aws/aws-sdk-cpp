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
#include <aws/email/model/S3Action.h>
#include <aws/email/model/BounceAction.h>
#include <aws/email/model/WorkmailAction.h>
#include <aws/email/model/LambdaAction.h>
#include <aws/email/model/StopAction.h>
#include <aws/email/model/AddHeaderAction.h>
#include <aws/email/model/SNSAction.h>
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
   * <p>An action that Amazon SES can take when it receives an email on behalf of one
   * or more email addresses or domains that you own. An instance of this data type
   * can represent only one action.</p> <p>For information about setting up receipt
   * rules, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptAction">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ReceiptAction
  {
  public:
    ReceiptAction();
    ReceiptAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline const S3Action& GetS3Action() const{ return m_s3Action; }

    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline bool S3ActionHasBeenSet() const { return m_s3ActionHasBeenSet; }

    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline void SetS3Action(const S3Action& value) { m_s3ActionHasBeenSet = true; m_s3Action = value; }

    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline void SetS3Action(S3Action&& value) { m_s3ActionHasBeenSet = true; m_s3Action = std::move(value); }

    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithS3Action(const S3Action& value) { SetS3Action(value); return *this;}

    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithS3Action(S3Action&& value) { SetS3Action(std::move(value)); return *this;}


    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline const BounceAction& GetBounceAction() const{ return m_bounceAction; }

    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline bool BounceActionHasBeenSet() const { return m_bounceActionHasBeenSet; }

    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline void SetBounceAction(const BounceAction& value) { m_bounceActionHasBeenSet = true; m_bounceAction = value; }

    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline void SetBounceAction(BounceAction&& value) { m_bounceActionHasBeenSet = true; m_bounceAction = std::move(value); }

    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline ReceiptAction& WithBounceAction(const BounceAction& value) { SetBounceAction(value); return *this;}

    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline ReceiptAction& WithBounceAction(BounceAction&& value) { SetBounceAction(std::move(value)); return *this;}


    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline const WorkmailAction& GetWorkmailAction() const{ return m_workmailAction; }

    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline bool WorkmailActionHasBeenSet() const { return m_workmailActionHasBeenSet; }

    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline void SetWorkmailAction(const WorkmailAction& value) { m_workmailActionHasBeenSet = true; m_workmailAction = value; }

    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline void SetWorkmailAction(WorkmailAction&& value) { m_workmailActionHasBeenSet = true; m_workmailAction = std::move(value); }

    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline ReceiptAction& WithWorkmailAction(const WorkmailAction& value) { SetWorkmailAction(value); return *this;}

    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline ReceiptAction& WithWorkmailAction(WorkmailAction&& value) { SetWorkmailAction(std::move(value)); return *this;}


    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline const LambdaAction& GetLambdaAction() const{ return m_lambdaAction; }

    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline bool LambdaActionHasBeenSet() const { return m_lambdaActionHasBeenSet; }

    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline void SetLambdaAction(const LambdaAction& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = value; }

    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline void SetLambdaAction(LambdaAction&& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = std::move(value); }

    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline ReceiptAction& WithLambdaAction(const LambdaAction& value) { SetLambdaAction(value); return *this;}

    /**
     * <p>Calls an AWS Lambda function, and optionally, publishes a notification to
     * Amazon SNS.</p>
     */
    inline ReceiptAction& WithLambdaAction(LambdaAction&& value) { SetLambdaAction(std::move(value)); return *this;}


    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline const StopAction& GetStopAction() const{ return m_stopAction; }

    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline bool StopActionHasBeenSet() const { return m_stopActionHasBeenSet; }

    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline void SetStopAction(const StopAction& value) { m_stopActionHasBeenSet = true; m_stopAction = value; }

    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline void SetStopAction(StopAction&& value) { m_stopActionHasBeenSet = true; m_stopAction = std::move(value); }

    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithStopAction(const StopAction& value) { SetStopAction(value); return *this;}

    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithStopAction(StopAction&& value) { SetStopAction(std::move(value)); return *this;}


    /**
     * <p>Adds a header to the received email.</p>
     */
    inline const AddHeaderAction& GetAddHeaderAction() const{ return m_addHeaderAction; }

    /**
     * <p>Adds a header to the received email.</p>
     */
    inline bool AddHeaderActionHasBeenSet() const { return m_addHeaderActionHasBeenSet; }

    /**
     * <p>Adds a header to the received email.</p>
     */
    inline void SetAddHeaderAction(const AddHeaderAction& value) { m_addHeaderActionHasBeenSet = true; m_addHeaderAction = value; }

    /**
     * <p>Adds a header to the received email.</p>
     */
    inline void SetAddHeaderAction(AddHeaderAction&& value) { m_addHeaderActionHasBeenSet = true; m_addHeaderAction = std::move(value); }

    /**
     * <p>Adds a header to the received email.</p>
     */
    inline ReceiptAction& WithAddHeaderAction(const AddHeaderAction& value) { SetAddHeaderAction(value); return *this;}

    /**
     * <p>Adds a header to the received email.</p>
     */
    inline ReceiptAction& WithAddHeaderAction(AddHeaderAction&& value) { SetAddHeaderAction(std::move(value)); return *this;}


    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline const SNSAction& GetSNSAction() const{ return m_sNSAction; }

    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline bool SNSActionHasBeenSet() const { return m_sNSActionHasBeenSet; }

    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline void SetSNSAction(const SNSAction& value) { m_sNSActionHasBeenSet = true; m_sNSAction = value; }

    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline void SetSNSAction(SNSAction&& value) { m_sNSActionHasBeenSet = true; m_sNSAction = std::move(value); }

    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithSNSAction(const SNSAction& value) { SetSNSAction(value); return *this;}

    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline ReceiptAction& WithSNSAction(SNSAction&& value) { SetSNSAction(std::move(value)); return *this;}

  private:

    S3Action m_s3Action;
    bool m_s3ActionHasBeenSet;

    BounceAction m_bounceAction;
    bool m_bounceActionHasBeenSet;

    WorkmailAction m_workmailAction;
    bool m_workmailActionHasBeenSet;

    LambdaAction m_lambdaAction;
    bool m_lambdaActionHasBeenSet;

    StopAction m_stopAction;
    bool m_stopActionHasBeenSet;

    AddHeaderAction m_addHeaderAction;
    bool m_addHeaderActionHasBeenSet;

    SNSAction m_sNSAction;
    bool m_sNSActionHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
