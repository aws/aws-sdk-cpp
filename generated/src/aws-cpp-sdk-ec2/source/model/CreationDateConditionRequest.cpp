/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreationDateConditionRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CreationDateConditionRequest::CreationDateConditionRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CreationDateConditionRequest& CreationDateConditionRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumDaysSinceCreatedNode = resultNode.FirstChild("MaximumDaysSinceCreated");
    if(!maximumDaysSinceCreatedNode.IsNull())
    {
      m_maximumDaysSinceCreated = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumDaysSinceCreatedNode.GetText()).c_str()).c_str());
      m_maximumDaysSinceCreatedHasBeenSet = true;
    }
  }

  return *this;
}

void CreationDateConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumDaysSinceCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumDaysSinceCreated=" << m_maximumDaysSinceCreated << "&";
  }

}

void CreationDateConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumDaysSinceCreatedHasBeenSet)
  {
      oStream << location << ".MaximumDaysSinceCreated=" << m_maximumDaysSinceCreated << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
