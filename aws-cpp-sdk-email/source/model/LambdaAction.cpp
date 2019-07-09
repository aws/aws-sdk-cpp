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

#include <aws/email/model/LambdaAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

LambdaAction::LambdaAction() : 
    m_topicArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
}

LambdaAction::LambdaAction(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
  *this = xmlNode;
}

LambdaAction& LambdaAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
    XmlNode functionArnNode = resultNode.FirstChild("FunctionArn");
    if(!functionArnNode.IsNull())
    {
      m_functionArn = functionArnNode.GetText();
      m_functionArnHasBeenSet = true;
    }
    XmlNode invocationTypeNode = resultNode.FirstChild("InvocationType");
    if(!invocationTypeNode.IsNull())
    {
      m_invocationType = InvocationTypeMapper::GetInvocationTypeForName(StringUtils::Trim(invocationTypeNode.GetText().c_str()).c_str());
      m_invocationTypeHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_functionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }

  if(m_invocationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InvocationType=" << InvocationTypeMapper::GetNameForInvocationType(m_invocationType) << "&";
  }

}

void LambdaAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_functionArnHasBeenSet)
  {
      oStream << location << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }
  if(m_invocationTypeHasBeenSet)
  {
      oStream << location << ".InvocationType=" << InvocationTypeMapper::GetNameForInvocationType(m_invocationType) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
