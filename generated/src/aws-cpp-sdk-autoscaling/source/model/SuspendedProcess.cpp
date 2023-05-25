/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/SuspendedProcess.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

SuspendedProcess::SuspendedProcess() : 
    m_processNameHasBeenSet(false),
    m_suspensionReasonHasBeenSet(false)
{
}

SuspendedProcess::SuspendedProcess(const XmlNode& xmlNode) : 
    m_processNameHasBeenSet(false),
    m_suspensionReasonHasBeenSet(false)
{
  *this = xmlNode;
}

SuspendedProcess& SuspendedProcess::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode processNameNode = resultNode.FirstChild("ProcessName");
    if(!processNameNode.IsNull())
    {
      m_processName = Aws::Utils::Xml::DecodeEscapedXmlText(processNameNode.GetText());
      m_processNameHasBeenSet = true;
    }
    XmlNode suspensionReasonNode = resultNode.FirstChild("SuspensionReason");
    if(!suspensionReasonNode.IsNull())
    {
      m_suspensionReason = Aws::Utils::Xml::DecodeEscapedXmlText(suspensionReasonNode.GetText());
      m_suspensionReasonHasBeenSet = true;
    }
  }

  return *this;
}

void SuspendedProcess::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_processNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProcessName=" << StringUtils::URLEncode(m_processName.c_str()) << "&";
  }

  if(m_suspensionReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".SuspensionReason=" << StringUtils::URLEncode(m_suspensionReason.c_str()) << "&";
  }

}

void SuspendedProcess::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_processNameHasBeenSet)
  {
      oStream << location << ".ProcessName=" << StringUtils::URLEncode(m_processName.c_str()) << "&";
  }
  if(m_suspensionReasonHasBeenSet)
  {
      oStream << location << ".SuspensionReason=" << StringUtils::URLEncode(m_suspensionReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
