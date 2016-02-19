/*
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

  class AWS_SES_API BounceAction
  {
  public:
    BounceAction();
    BounceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    BounceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    
    inline BounceAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    
    inline BounceAction& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    
    inline BounceAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    
    inline const Aws::String& GetSmtpReplyCode() const{ return m_smtpReplyCode; }

    
    inline void SetSmtpReplyCode(const Aws::String& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = value; }

    
    inline void SetSmtpReplyCode(Aws::String&& value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode = value; }

    
    inline void SetSmtpReplyCode(const char* value) { m_smtpReplyCodeHasBeenSet = true; m_smtpReplyCode.assign(value); }

    
    inline BounceAction& WithSmtpReplyCode(const Aws::String& value) { SetSmtpReplyCode(value); return *this;}

    
    inline BounceAction& WithSmtpReplyCode(Aws::String&& value) { SetSmtpReplyCode(value); return *this;}

    
    inline BounceAction& WithSmtpReplyCode(const char* value) { SetSmtpReplyCode(value); return *this;}

    
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    
    inline BounceAction& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    
    inline BounceAction& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    
    inline BounceAction& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BounceAction& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BounceAction& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    
    inline BounceAction& WithMessage(const char* value) { SetMessage(value); return *this;}

    
    inline const Aws::String& GetSender() const{ return m_sender; }

    
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }

    
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = value; }

    
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }

    
    inline BounceAction& WithSender(const Aws::String& value) { SetSender(value); return *this;}

    
    inline BounceAction& WithSender(Aws::String&& value) { SetSender(value); return *this;}

    
    inline BounceAction& WithSender(const char* value) { SetSender(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_smtpReplyCode;
    bool m_smtpReplyCodeHasBeenSet;
    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::String m_sender;
    bool m_senderHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
