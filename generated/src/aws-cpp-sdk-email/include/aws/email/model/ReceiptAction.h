/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/email/model/ConnectAction.h>
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptAction">AWS
   * API Reference</a></p>
   */
  class ReceiptAction
  {
  public:
    AWS_SES_API ReceiptAction() = default;
    AWS_SES_API ReceiptAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3)
     * bucket and, optionally, publishes a notification to Amazon SNS.</p>
     */
    inline const S3Action& GetS3Action() const { return m_s3Action; }
    inline bool S3ActionHasBeenSet() const { return m_s3ActionHasBeenSet; }
    template<typename S3ActionT = S3Action>
    void SetS3Action(S3ActionT&& value) { m_s3ActionHasBeenSet = true; m_s3Action = std::forward<S3ActionT>(value); }
    template<typename S3ActionT = S3Action>
    ReceiptAction& WithS3Action(S3ActionT&& value) { SetS3Action(std::forward<S3ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rejects the received email by returning a bounce response to the sender and,
     * optionally, publishes a notification to Amazon Simple Notification Service
     * (Amazon SNS).</p>
     */
    inline const BounceAction& GetBounceAction() const { return m_bounceAction; }
    inline bool BounceActionHasBeenSet() const { return m_bounceActionHasBeenSet; }
    template<typename BounceActionT = BounceAction>
    void SetBounceAction(BounceActionT&& value) { m_bounceActionHasBeenSet = true; m_bounceAction = std::forward<BounceActionT>(value); }
    template<typename BounceActionT = BounceAction>
    ReceiptAction& WithBounceAction(BounceActionT&& value) { SetBounceAction(std::forward<BounceActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon
     * Amazon SNS.</p>
     */
    inline const WorkmailAction& GetWorkmailAction() const { return m_workmailAction; }
    inline bool WorkmailActionHasBeenSet() const { return m_workmailActionHasBeenSet; }
    template<typename WorkmailActionT = WorkmailAction>
    void SetWorkmailAction(WorkmailActionT&& value) { m_workmailActionHasBeenSet = true; m_workmailAction = std::forward<WorkmailActionT>(value); }
    template<typename WorkmailActionT = WorkmailAction>
    ReceiptAction& WithWorkmailAction(WorkmailActionT&& value) { SetWorkmailAction(std::forward<WorkmailActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calls an Amazon Web Services Lambda function, and optionally, publishes a
     * notification to Amazon SNS.</p>
     */
    inline const LambdaAction& GetLambdaAction() const { return m_lambdaAction; }
    inline bool LambdaActionHasBeenSet() const { return m_lambdaActionHasBeenSet; }
    template<typename LambdaActionT = LambdaAction>
    void SetLambdaAction(LambdaActionT&& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = std::forward<LambdaActionT>(value); }
    template<typename LambdaActionT = LambdaAction>
    ReceiptAction& WithLambdaAction(LambdaActionT&& value) { SetLambdaAction(std::forward<LambdaActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Terminates the evaluation of the receipt rule set and optionally publishes a
     * notification to Amazon SNS.</p>
     */
    inline const StopAction& GetStopAction() const { return m_stopAction; }
    inline bool StopActionHasBeenSet() const { return m_stopActionHasBeenSet; }
    template<typename StopActionT = StopAction>
    void SetStopAction(StopActionT&& value) { m_stopActionHasBeenSet = true; m_stopAction = std::forward<StopActionT>(value); }
    template<typename StopActionT = StopAction>
    ReceiptAction& WithStopAction(StopActionT&& value) { SetStopAction(std::forward<StopActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a header to the received email.</p>
     */
    inline const AddHeaderAction& GetAddHeaderAction() const { return m_addHeaderAction; }
    inline bool AddHeaderActionHasBeenSet() const { return m_addHeaderActionHasBeenSet; }
    template<typename AddHeaderActionT = AddHeaderAction>
    void SetAddHeaderAction(AddHeaderActionT&& value) { m_addHeaderActionHasBeenSet = true; m_addHeaderAction = std::forward<AddHeaderActionT>(value); }
    template<typename AddHeaderActionT = AddHeaderAction>
    ReceiptAction& WithAddHeaderAction(AddHeaderActionT&& value) { SetAddHeaderAction(std::forward<AddHeaderActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes the email content within a notification to Amazon SNS.</p>
     */
    inline const SNSAction& GetSNSAction() const { return m_sNSAction; }
    inline bool SNSActionHasBeenSet() const { return m_sNSActionHasBeenSet; }
    template<typename SNSActionT = SNSAction>
    void SetSNSAction(SNSActionT&& value) { m_sNSActionHasBeenSet = true; m_sNSAction = std::forward<SNSActionT>(value); }
    template<typename SNSActionT = SNSAction>
    ReceiptAction& WithSNSAction(SNSActionT&& value) { SetSNSAction(std::forward<SNSActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parses the received message and starts an email contact in Amazon Connect on
     * your behalf.</p>
     */
    inline const ConnectAction& GetConnectAction() const { return m_connectAction; }
    inline bool ConnectActionHasBeenSet() const { return m_connectActionHasBeenSet; }
    template<typename ConnectActionT = ConnectAction>
    void SetConnectAction(ConnectActionT&& value) { m_connectActionHasBeenSet = true; m_connectAction = std::forward<ConnectActionT>(value); }
    template<typename ConnectActionT = ConnectAction>
    ReceiptAction& WithConnectAction(ConnectActionT&& value) { SetConnectAction(std::forward<ConnectActionT>(value)); return *this;}
    ///@}
  private:

    S3Action m_s3Action;
    bool m_s3ActionHasBeenSet = false;

    BounceAction m_bounceAction;
    bool m_bounceActionHasBeenSet = false;

    WorkmailAction m_workmailAction;
    bool m_workmailActionHasBeenSet = false;

    LambdaAction m_lambdaAction;
    bool m_lambdaActionHasBeenSet = false;

    StopAction m_stopAction;
    bool m_stopActionHasBeenSet = false;

    AddHeaderAction m_addHeaderAction;
    bool m_addHeaderActionHasBeenSet = false;

    SNSAction m_sNSAction;
    bool m_sNSActionHasBeenSet = false;

    ConnectAction m_connectAction;
    bool m_connectActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
