/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SlotDateTimeRangeRequest.h>
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

SlotDateTimeRangeRequest::SlotDateTimeRangeRequest() : 
    m_earliestTimeHasBeenSet(false),
    m_latestTimeHasBeenSet(false)
{
}

SlotDateTimeRangeRequest::SlotDateTimeRangeRequest(const XmlNode& xmlNode) : 
    m_earliestTimeHasBeenSet(false),
    m_latestTimeHasBeenSet(false)
{
  *this = xmlNode;
}

SlotDateTimeRangeRequest& SlotDateTimeRangeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode earliestTimeNode = resultNode.FirstChild("EarliestTime");
    if(!earliestTimeNode.IsNull())
    {
      m_earliestTime = DateTime(StringUtils::Trim(earliestTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_earliestTimeHasBeenSet = true;
    }
    XmlNode latestTimeNode = resultNode.FirstChild("LatestTime");
    if(!latestTimeNode.IsNull())
    {
      m_latestTime = DateTime(StringUtils::Trim(latestTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_latestTimeHasBeenSet = true;
    }
  }

  return *this;
}

void SlotDateTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_earliestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestTime=" << StringUtils::URLEncode(m_earliestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_latestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestTime=" << StringUtils::URLEncode(m_latestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SlotDateTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_earliestTimeHasBeenSet)
  {
      oStream << location << ".EarliestTime=" << StringUtils::URLEncode(m_earliestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_latestTimeHasBeenSet)
  {
      oStream << location << ".LatestTime=" << StringUtils::URLEncode(m_latestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
