/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeprecationTimeConditionRequest.h>
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

DeprecationTimeConditionRequest::DeprecationTimeConditionRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DeprecationTimeConditionRequest& DeprecationTimeConditionRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumDaysSinceDeprecatedNode = resultNode.FirstChild("MaximumDaysSinceDeprecated");
    if(!maximumDaysSinceDeprecatedNode.IsNull())
    {
      m_maximumDaysSinceDeprecated = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumDaysSinceDeprecatedNode.GetText()).c_str()).c_str());
      m_maximumDaysSinceDeprecatedHasBeenSet = true;
    }
  }

  return *this;
}

void DeprecationTimeConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumDaysSinceDeprecatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumDaysSinceDeprecated=" << m_maximumDaysSinceDeprecated << "&";
  }

}

void DeprecationTimeConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumDaysSinceDeprecatedHasBeenSet)
  {
      oStream << location << ".MaximumDaysSinceDeprecated=" << m_maximumDaysSinceDeprecated << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
