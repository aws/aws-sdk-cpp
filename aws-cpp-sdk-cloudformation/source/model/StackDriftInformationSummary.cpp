/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackDriftInformationSummary.h>
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

StackDriftInformationSummary::StackDriftInformationSummary() : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_stackDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
}

StackDriftInformationSummary::StackDriftInformationSummary(const XmlNode& xmlNode) : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_stackDriftStatusHasBeenSet(false),
    m_lastCheckTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

StackDriftInformationSummary& StackDriftInformationSummary::operator =(const XmlNode& xmlNode)
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
      m_lastCheckTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastCheckTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastCheckTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void StackDriftInformationSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackDriftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackDriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_stackDriftStatus) << "&";
  }

  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void StackDriftInformationSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackDriftStatusHasBeenSet)
  {
      oStream << location << ".StackDriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_stackDriftStatus) << "&";
  }
  if(m_lastCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastCheckTimestamp=" << StringUtils::URLEncode(m_lastCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
