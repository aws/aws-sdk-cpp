/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceRefreshProgressDetails.h>
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

InstanceRefreshProgressDetails::InstanceRefreshProgressDetails() : 
    m_livePoolProgressHasBeenSet(false),
    m_warmPoolProgressHasBeenSet(false)
{
}

InstanceRefreshProgressDetails::InstanceRefreshProgressDetails(const XmlNode& xmlNode) : 
    m_livePoolProgressHasBeenSet(false),
    m_warmPoolProgressHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceRefreshProgressDetails& InstanceRefreshProgressDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode livePoolProgressNode = resultNode.FirstChild("LivePoolProgress");
    if(!livePoolProgressNode.IsNull())
    {
      m_livePoolProgress = livePoolProgressNode;
      m_livePoolProgressHasBeenSet = true;
    }
    XmlNode warmPoolProgressNode = resultNode.FirstChild("WarmPoolProgress");
    if(!warmPoolProgressNode.IsNull())
    {
      m_warmPoolProgress = warmPoolProgressNode;
      m_warmPoolProgressHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRefreshProgressDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_livePoolProgressHasBeenSet)
  {
      Aws::StringStream livePoolProgressLocationAndMemberSs;
      livePoolProgressLocationAndMemberSs << location << index << locationValue << ".LivePoolProgress";
      m_livePoolProgress.OutputToStream(oStream, livePoolProgressLocationAndMemberSs.str().c_str());
  }

  if(m_warmPoolProgressHasBeenSet)
  {
      Aws::StringStream warmPoolProgressLocationAndMemberSs;
      warmPoolProgressLocationAndMemberSs << location << index << locationValue << ".WarmPoolProgress";
      m_warmPoolProgress.OutputToStream(oStream, warmPoolProgressLocationAndMemberSs.str().c_str());
  }

}

void InstanceRefreshProgressDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_livePoolProgressHasBeenSet)
  {
      Aws::String livePoolProgressLocationAndMember(location);
      livePoolProgressLocationAndMember += ".LivePoolProgress";
      m_livePoolProgress.OutputToStream(oStream, livePoolProgressLocationAndMember.c_str());
  }
  if(m_warmPoolProgressHasBeenSet)
  {
      Aws::String warmPoolProgressLocationAndMember(location);
      warmPoolProgressLocationAndMember += ".WarmPoolProgress";
      m_warmPoolProgress.OutputToStream(oStream, warmPoolProgressLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
