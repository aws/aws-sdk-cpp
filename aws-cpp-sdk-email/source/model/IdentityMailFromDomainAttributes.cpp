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

#include <aws/email/model/IdentityMailFromDomainAttributes.h>
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

IdentityMailFromDomainAttributes::IdentityMailFromDomainAttributes() : 
    m_mailFromDomainHasBeenSet(false),
    m_mailFromDomainStatus(CustomMailFromStatus::NOT_SET),
    m_mailFromDomainStatusHasBeenSet(false),
    m_behaviorOnMXFailure(BehaviorOnMXFailure::NOT_SET),
    m_behaviorOnMXFailureHasBeenSet(false)
{
}

IdentityMailFromDomainAttributes::IdentityMailFromDomainAttributes(const XmlNode& xmlNode) : 
    m_mailFromDomainHasBeenSet(false),
    m_mailFromDomainStatus(CustomMailFromStatus::NOT_SET),
    m_mailFromDomainStatusHasBeenSet(false),
    m_behaviorOnMXFailure(BehaviorOnMXFailure::NOT_SET),
    m_behaviorOnMXFailureHasBeenSet(false)
{
  *this = xmlNode;
}

IdentityMailFromDomainAttributes& IdentityMailFromDomainAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode mailFromDomainNode = resultNode.FirstChild("MailFromDomain");
    if(!mailFromDomainNode.IsNull())
    {
      m_mailFromDomain = mailFromDomainNode.GetText();
      m_mailFromDomainHasBeenSet = true;
    }
    XmlNode mailFromDomainStatusNode = resultNode.FirstChild("MailFromDomainStatus");
    if(!mailFromDomainStatusNode.IsNull())
    {
      m_mailFromDomainStatus = CustomMailFromStatusMapper::GetCustomMailFromStatusForName(StringUtils::Trim(mailFromDomainStatusNode.GetText().c_str()).c_str());
      m_mailFromDomainStatusHasBeenSet = true;
    }
    XmlNode behaviorOnMXFailureNode = resultNode.FirstChild("BehaviorOnMXFailure");
    if(!behaviorOnMXFailureNode.IsNull())
    {
      m_behaviorOnMXFailure = BehaviorOnMXFailureMapper::GetBehaviorOnMXFailureForName(StringUtils::Trim(behaviorOnMXFailureNode.GetText().c_str()).c_str());
      m_behaviorOnMXFailureHasBeenSet = true;
    }
  }

  return *this;
}

void IdentityMailFromDomainAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_mailFromDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".MailFromDomain=" << StringUtils::URLEncode(m_mailFromDomain.c_str()) << "&";
  }

  if(m_mailFromDomainStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".MailFromDomainStatus=" << CustomMailFromStatusMapper::GetNameForCustomMailFromStatus(m_mailFromDomainStatus) << "&";
  }

  if(m_behaviorOnMXFailureHasBeenSet)
  {
      oStream << location << index << locationValue << ".BehaviorOnMXFailure=" << BehaviorOnMXFailureMapper::GetNameForBehaviorOnMXFailure(m_behaviorOnMXFailure) << "&";
  }

}

void IdentityMailFromDomainAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_mailFromDomainHasBeenSet)
  {
      oStream << location << ".MailFromDomain=" << StringUtils::URLEncode(m_mailFromDomain.c_str()) << "&";
  }
  if(m_mailFromDomainStatusHasBeenSet)
  {
      oStream << location << ".MailFromDomainStatus=" << CustomMailFromStatusMapper::GetNameForCustomMailFromStatus(m_mailFromDomainStatus) << "&";
  }
  if(m_behaviorOnMXFailureHasBeenSet)
  {
      oStream << location << ".BehaviorOnMXFailure=" << BehaviorOnMXFailureMapper::GetNameForBehaviorOnMXFailure(m_behaviorOnMXFailure) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
