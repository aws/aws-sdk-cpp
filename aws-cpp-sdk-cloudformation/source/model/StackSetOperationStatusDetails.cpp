/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
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

StackSetOperationStatusDetails::StackSetOperationStatusDetails() : 
    m_failedStackInstancesCount(0),
    m_failedStackInstancesCountHasBeenSet(false)
{
}

StackSetOperationStatusDetails::StackSetOperationStatusDetails(const XmlNode& xmlNode) : 
    m_failedStackInstancesCount(0),
    m_failedStackInstancesCountHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetOperationStatusDetails& StackSetOperationStatusDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode failedStackInstancesCountNode = resultNode.FirstChild("FailedStackInstancesCount");
    if(!failedStackInstancesCountNode.IsNull())
    {
      m_failedStackInstancesCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_failedStackInstancesCountHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_failedStackInstancesCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }

}

void StackSetOperationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_failedStackInstancesCountHasBeenSet)
  {
      oStream << location << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
