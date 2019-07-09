/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/model/ProvisionedBandwidth.h>
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

ProvisionedBandwidth::ProvisionedBandwidth() : 
    m_provisionTimeHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ProvisionedBandwidth::ProvisionedBandwidth(const XmlNode& xmlNode) : 
    m_provisionTimeHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ProvisionedBandwidth& ProvisionedBandwidth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode provisionTimeNode = resultNode.FirstChild("provisionTime");
    if(!provisionTimeNode.IsNull())
    {
      m_provisionTime = DateTime(StringUtils::Trim(provisionTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_provisionTimeHasBeenSet = true;
    }
    XmlNode provisionedNode = resultNode.FirstChild("provisioned");
    if(!provisionedNode.IsNull())
    {
      m_provisioned = provisionedNode.GetText();
      m_provisionedHasBeenSet = true;
    }
    XmlNode requestTimeNode = resultNode.FirstChild("requestTime");
    if(!requestTimeNode.IsNull())
    {
      m_requestTime = DateTime(StringUtils::Trim(requestTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_requestTimeHasBeenSet = true;
    }
    XmlNode requestedNode = resultNode.FirstChild("requested");
    if(!requestedNode.IsNull())
    {
      m_requested = requestedNode.GetText();
      m_requestedHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ProvisionedBandwidth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_provisionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProvisionTime=" << StringUtils::URLEncode(m_provisionTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_provisionedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Provisioned=" << StringUtils::URLEncode(m_provisioned.c_str()) << "&";
  }

  if(m_requestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_requestedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Requested=" << StringUtils::URLEncode(m_requested.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void ProvisionedBandwidth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_provisionTimeHasBeenSet)
  {
      oStream << location << ".ProvisionTime=" << StringUtils::URLEncode(m_provisionTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_provisionedHasBeenSet)
  {
      oStream << location << ".Provisioned=" << StringUtils::URLEncode(m_provisioned.c_str()) << "&";
  }
  if(m_requestTimeHasBeenSet)
  {
      oStream << location << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_requestedHasBeenSet)
  {
      oStream << location << ".Requested=" << StringUtils::URLEncode(m_requested.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
