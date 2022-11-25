/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceTypeDetail.h>
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

ServiceTypeDetail::ServiceTypeDetail() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

ServiceTypeDetail::ServiceTypeDetail(const XmlNode& xmlNode) : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceTypeDetail& ServiceTypeDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceTypeNode = resultNode.FirstChild("serviceType");
    if(!serviceTypeNode.IsNull())
    {
      m_serviceType = ServiceTypeMapper::GetServiceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceTypeNode.GetText()).c_str()).c_str());
      m_serviceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceTypeDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceType=" << ServiceTypeMapper::GetNameForServiceType(m_serviceType) << "&";
  }

}

void ServiceTypeDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceTypeHasBeenSet)
  {
      oStream << location << ".ServiceType=" << ServiceTypeMapper::GetNameForServiceType(m_serviceType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
