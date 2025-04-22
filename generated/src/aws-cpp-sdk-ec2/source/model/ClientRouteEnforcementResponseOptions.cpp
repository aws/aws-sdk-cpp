/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientRouteEnforcementResponseOptions.h>
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

ClientRouteEnforcementResponseOptions::ClientRouteEnforcementResponseOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ClientRouteEnforcementResponseOptions& ClientRouteEnforcementResponseOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enforcedNode = resultNode.FirstChild("enforced");
    if(!enforcedNode.IsNull())
    {
      m_enforced = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enforcedNode.GetText()).c_str()).c_str());
      m_enforcedHasBeenSet = true;
    }
  }

  return *this;
}

void ClientRouteEnforcementResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enforcedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enforced=" << std::boolalpha << m_enforced << "&";
  }

}

void ClientRouteEnforcementResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enforcedHasBeenSet)
  {
      oStream << location << ".Enforced=" << std::boolalpha << m_enforced << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
