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

#include <aws/cloudformation/model/StackResourceDriftInformation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackResourceDriftInformation::StackResourceDriftInformation() : 
    m_stackResourceDriftStatus(StackResourceDriftStatus::NOT_SET),
    m_stackResourceDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
}

StackResourceDriftInformation::StackResourceDriftInformation(const XmlNode& xmlNode) : 
    m_stackResourceDriftStatus(StackResourceDriftStatus::NOT_SET),
    m_stackResourceDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

StackResourceDriftInformation& StackResourceDriftInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackResourceDriftStatusNode = resultNode.FirstChild("StackResourceDriftStatus");
    if(!stackResourceDriftStatusNode.IsNull())
    {
      m_stackResourceDriftStatus = StackResourceDriftStatusMapper::GetStackResourceDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stackResourceDriftStatusNode.GetText()).c_str()).c_str());
      m_stackResourceDriftStatusHasBeenSet = true;
    }
    XmlNode lastCheckTimestampNode = resultNode.FirstChild("LastCheckTimestamp");
    if(!lastCheckTimestampNode.IsNull())
    {
      m_lastCheckTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastCheckTimestampNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_lastCheckTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void StackResourceDriftInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackResourceDriftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackResourceDriftStatus=" << StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(m_stackResourceDriftStatus) << "&";
  }

  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void StackResourceDriftInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackResourceDriftStatusHasBeenSet)
  {
      oStream << location << ".StackResourceDriftStatus=" << StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(m_stackResourceDriftStatus) << "&";
  }
  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
