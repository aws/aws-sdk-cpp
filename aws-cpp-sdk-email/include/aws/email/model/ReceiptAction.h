/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    $shape.documentation
  */
  class AWS_SES_API ReceiptAction
  {
  public:
    ReceiptAction();
    ReceiptAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const S3Action& GetS3Action() const{ return m_s3Action; }
    
    inline void SetS3Action(const S3Action& value) { m_s3ActionHasBeenSet = true; m_s3Action = value; }

    
    inline ReceiptAction&  WithS3Action(const S3Action& value) { SetS3Action(value); return *this;}

    
    inline const BounceAction& GetBounceAction() const{ return m_bounceAction; }
    
    inline void SetBounceAction(const BounceAction& value) { m_bounceActionHasBeenSet = true; m_bounceAction = value; }

    
    inline ReceiptAction&  WithBounceAction(const BounceAction& value) { SetBounceAction(value); return *this;}

    
    inline const WorkmailAction& GetWorkmailAction() const{ return m_workmailAction; }
    
    inline void SetWorkmailAction(const WorkmailAction& value) { m_workmailActionHasBeenSet = true; m_workmailAction = value; }

    
    inline ReceiptAction&  WithWorkmailAction(const WorkmailAction& value) { SetWorkmailAction(value); return *this;}

    
    inline const LambdaAction& GetLambdaAction() const{ return m_lambdaAction; }
    
    inline void SetLambdaAction(const LambdaAction& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = value; }

    
    inline ReceiptAction&  WithLambdaAction(const LambdaAction& value) { SetLambdaAction(value); return *this;}

    
    inline const StopAction& GetStopAction() const{ return m_stopAction; }
    
    inline void SetStopAction(const StopAction& value) { m_stopActionHasBeenSet = true; m_stopAction = value; }

    
    inline ReceiptAction&  WithStopAction(const StopAction& value) { SetStopAction(value); return *this;}

    
    inline const AddHeaderAction& GetAddHeaderAction() const{ return m_addHeaderAction; }
    
    inline void SetAddHeaderAction(const AddHeaderAction& value) { m_addHeaderActionHasBeenSet = true; m_addHeaderAction = value; }

    
    inline ReceiptAction&  WithAddHeaderAction(const AddHeaderAction& value) { SetAddHeaderAction(value); return *this;}

    
    inline const SNSAction& GetSNSAction() const{ return m_sNSAction; }
    
    inline void SetSNSAction(const SNSAction& value) { m_sNSActionHasBeenSet = true; m_sNSAction = value; }

    
    inline ReceiptAction&  WithSNSAction(const SNSAction& value) { SetSNSAction(value); return *this;}

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
