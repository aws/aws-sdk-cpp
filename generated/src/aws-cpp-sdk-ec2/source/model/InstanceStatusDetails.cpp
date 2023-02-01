/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceStatusDetails.h>
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

InstanceStatusDetails::InstanceStatusDetails() : 
    m_impairedSinceHasBeenSet(false),
    m_name(StatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

InstanceStatusDetails::InstanceStatusDetails(const XmlNode& xmlNode) : 
    m_impairedSinceHasBeenSet(false),
    m_name(StatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusDetails& InstanceStatusDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode impairedSinceNode = resultNode.FirstChild("impairedSince");
    if(!impairedSinceNode.IsNull())
    {
      m_impairedSince = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(impairedSinceNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_impairedSinceHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = StatusNameMapper::GetStatusNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()).c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = StatusTypeMapper::GetStatusTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_impairedSinceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImpairedSince=" << StringUtils::URLEncode(m_impairedSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StatusNameMapper::GetNameForStatusName(m_name) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }

}

void InstanceStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_impairedSinceHasBeenSet)
  {
      oStream << location << ".ImpairedSince=" << StringUtils::URLEncode(m_impairedSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StatusNameMapper::GetNameForStatusName(m_name) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
