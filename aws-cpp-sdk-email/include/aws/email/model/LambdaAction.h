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
#include <aws/email/model/InvocationType.h>

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

  class AWS_SES_API LambdaAction
  {
  public:
    LambdaAction();
    LambdaAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    LambdaAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    
    inline LambdaAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    
    inline LambdaAction& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    
    inline LambdaAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    
    inline LambdaAction& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    
    inline LambdaAction& WithFunctionArn(Aws::String&& value) { SetFunctionArn(value); return *this;}

    
    inline LambdaAction& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

    
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    
    inline LambdaAction& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    
    inline LambdaAction& WithInvocationType(InvocationType&& value) { SetInvocationType(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;
    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
