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
#include <aws/email/model/StopAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

StopAction::StopAction() : 
    m_topicArnHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

StopAction::StopAction(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = xmlNode;
}

StopAction& StopAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = StringUtils::Trim(topicArnNode.GetText().c_str());
      m_topicArnHasBeenSet = true;
    }
    XmlNode targetNode = resultNode.FirstChild("Target");
    if(!targetNode.IsNull())
    {
      m_target = StopTargetMapper::GetStopTargetForName(StringUtils::Trim(targetNode.GetText().c_str()).c_str());
      m_targetHasBeenSet = true;
    }
  }

  return *this;
}

void StopAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_targetHasBeenSet)
  {
      oStream << location << index << locationValue << ".Target=" << StopTargetMapper::GetNameForStopTarget(m_target) << "&";
  }
}

void StopAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_targetHasBeenSet)
  {
      oStream << location << ".Target=" << StopTargetMapper::GetNameForStopTarget(m_target) << "&";
  }
}
