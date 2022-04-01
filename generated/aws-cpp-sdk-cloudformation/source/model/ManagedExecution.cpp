/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ManagedExecution.h>
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

ManagedExecution::ManagedExecution() : 
    m_active(false),
    m_activeHasBeenSet(false)
{
}

ManagedExecution::ManagedExecution(const XmlNode& xmlNode) : 
    m_active(false),
    m_activeHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedExecution& ManagedExecution::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activeNode = resultNode.FirstChild("Active");
    if(!activeNode.IsNull())
    {
      m_active = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activeNode.GetText()).c_str()).c_str());
      m_activeHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedExecution::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_activeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Active=" << std::boolalpha << m_active << "&";
  }

}

void ManagedExecution::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_activeHasBeenSet)
  {
      oStream << location << ".Active=" << std::boolalpha << m_active << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
