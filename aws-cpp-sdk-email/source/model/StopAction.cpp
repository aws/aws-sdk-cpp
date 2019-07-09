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

#include <aws/email/model/StopAction.h>
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

StopAction::StopAction() : 
    m_scope(StopScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
}

StopAction::StopAction(const XmlNode& xmlNode) : 
    m_scope(StopScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
  *this = xmlNode;
}

StopAction& StopAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scopeNode = resultNode.FirstChild("Scope");
    if(!scopeNode.IsNull())
    {
      m_scope = StopScopeMapper::GetStopScopeForName(StringUtils::Trim(scopeNode.GetText().c_str()).c_str());
      m_scopeHasBeenSet = true;
    }
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
  }

  return *this;
}

void StopAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << StopScopeMapper::GetNameForStopScope(m_scope) << "&";
  }

  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

}

void StopAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << StopScopeMapper::GetNameForStopScope(m_scope) << "&";
  }
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
