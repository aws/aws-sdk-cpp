/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ProcessType.h>
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

ProcessType::ProcessType() : 
    m_processNameHasBeenSet(false)
{
}

ProcessType::ProcessType(const XmlNode& xmlNode) : 
    m_processNameHasBeenSet(false)
{
  *this = xmlNode;
}

ProcessType& ProcessType::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void ProcessType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_processNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProcessName=" << StringUtils::URLEncode(m_processName.c_str()) << "&";
  }

}

void ProcessType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_processNameHasBeenSet)
  {
      oStream << location << ".ProcessName=" << StringUtils::URLEncode(m_processName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
