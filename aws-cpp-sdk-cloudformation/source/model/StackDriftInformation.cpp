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

#include <aws/cloudformation/model/StackDriftInformation.h>
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

StackDriftInformation::StackDriftInformation() : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_stackDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
}

StackDriftInformation::StackDriftInformation(const XmlNode& xmlNode) : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_stackDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

StackDriftInformation& StackDriftInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackDriftStatusNode = resultNode.FirstChild("StackDriftStatus");
    if(!stackDriftStatusNode.IsNull())
    {
      m_stackDriftStatus = StackDriftStatusMapper::GetStackDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stackDriftStatusNode.GetText()).c_str()).c_str());
      m_stackDriftStatusHasBeenSet = true;
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

void StackDriftInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackDriftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackDriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_stackDriftStatus) << "&";
  }

  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void StackDriftInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackDriftStatusHasBeenSet)
  {
      oStream << location << ".StackDriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_stackDriftStatus) << "&";
  }
  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
