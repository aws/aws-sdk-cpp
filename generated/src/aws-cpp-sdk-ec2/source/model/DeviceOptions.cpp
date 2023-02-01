/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeviceOptions.h>
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

DeviceOptions::DeviceOptions() : 
    m_tenantIdHasBeenSet(false)
{
}

DeviceOptions::DeviceOptions(const XmlNode& xmlNode) : 
    m_tenantIdHasBeenSet(false)
{
  *this = xmlNode;
}

DeviceOptions& DeviceOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tenantIdNode = resultNode.FirstChild("tenantId");
    if(!tenantIdNode.IsNull())
    {
      m_tenantId = Aws::Utils::Xml::DecodeEscapedXmlText(tenantIdNode.GetText());
      m_tenantIdHasBeenSet = true;
    }
  }

  return *this;
}

void DeviceOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tenantIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantId=" << StringUtils::URLEncode(m_tenantId.c_str()) << "&";
  }

}

void DeviceOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tenantIdHasBeenSet)
  {
      oStream << location << ".TenantId=" << StringUtils::URLEncode(m_tenantId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
