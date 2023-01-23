/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceStatusSummary.h>
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

InstanceStatusSummary::InstanceStatusSummary() : 
    m_detailsHasBeenSet(false),
    m_status(SummaryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

InstanceStatusSummary::InstanceStatusSummary(const XmlNode& xmlNode) : 
    m_detailsHasBeenSet(false),
    m_status(SummaryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusSummary& InstanceStatusSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode detailsNode = resultNode.FirstChild("details");
    if(!detailsNode.IsNull())
    {
      XmlNode detailsMember = detailsNode.FirstChild("item");
      while(!detailsMember.IsNull())
      {
        m_details.push_back(detailsMember);
        detailsMember = detailsMember.NextNode("item");
      }

      m_detailsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = SummaryStatusMapper::GetSummaryStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_detailsHasBeenSet)
  {
      unsigned detailsIdx = 1;
      for(auto& item : m_details)
      {
        Aws::StringStream detailsSs;
        detailsSs << location << index << locationValue << ".Details." << detailsIdx++;
        item.OutputToStream(oStream, detailsSs.str().c_str());
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << SummaryStatusMapper::GetNameForSummaryStatus(m_status) << "&";
  }

}

void InstanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_detailsHasBeenSet)
  {
      unsigned detailsIdx = 1;
      for(auto& item : m_details)
      {
        Aws::StringStream detailsSs;
        detailsSs << location <<  ".Details." << detailsIdx++;
        item.OutputToStream(oStream, detailsSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << SummaryStatusMapper::GetNameForSummaryStatus(m_status) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
