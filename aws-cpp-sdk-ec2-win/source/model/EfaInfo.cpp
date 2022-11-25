/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EfaInfo.h>
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

EfaInfo::EfaInfo() : 
    m_maximumEfaInterfaces(0),
    m_maximumEfaInterfacesHasBeenSet(false)
{
}

EfaInfo::EfaInfo(const XmlNode& xmlNode) : 
    m_maximumEfaInterfaces(0),
    m_maximumEfaInterfacesHasBeenSet(false)
{
  *this = xmlNode;
}

EfaInfo& EfaInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumEfaInterfacesNode = resultNode.FirstChild("maximumEfaInterfaces");
    if(!maximumEfaInterfacesNode.IsNull())
    {
      m_maximumEfaInterfaces = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumEfaInterfacesNode.GetText()).c_str()).c_str());
      m_maximumEfaInterfacesHasBeenSet = true;
    }
  }

  return *this;
}

void EfaInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumEfaInterfacesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumEfaInterfaces=" << m_maximumEfaInterfaces << "&";
  }

}

void EfaInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumEfaInterfacesHasBeenSet)
  {
      oStream << location << ".MaximumEfaInterfaces=" << m_maximumEfaInterfaces << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
