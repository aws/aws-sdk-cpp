/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstanceComprehensiveStatus.h>
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

StackInstanceComprehensiveStatus::StackInstanceComprehensiveStatus() : 
    m_detailedStatus(StackInstanceDetailedStatus::NOT_SET),
    m_detailedStatusHasBeenSet(false)
{
}

StackInstanceComprehensiveStatus::StackInstanceComprehensiveStatus(const XmlNode& xmlNode) : 
    m_detailedStatus(StackInstanceDetailedStatus::NOT_SET),
    m_detailedStatusHasBeenSet(false)
{
  *this = xmlNode;
}

StackInstanceComprehensiveStatus& StackInstanceComprehensiveStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode detailedStatusNode = resultNode.FirstChild("DetailedStatus");
    if(!detailedStatusNode.IsNull())
    {
      m_detailedStatus = StackInstanceDetailedStatusMapper::GetStackInstanceDetailedStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(detailedStatusNode.GetText()).c_str()).c_str());
      m_detailedStatusHasBeenSet = true;
    }
  }

  return *this;
}

void StackInstanceComprehensiveStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_detailedStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DetailedStatus=" << StackInstanceDetailedStatusMapper::GetNameForStackInstanceDetailedStatus(m_detailedStatus) << "&";
  }

}

void StackInstanceComprehensiveStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_detailedStatusHasBeenSet)
  {
      oStream << location << ".DetailedStatus=" << StackInstanceDetailedStatusMapper::GetNameForStackInstanceDetailedStatus(m_detailedStatus) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
