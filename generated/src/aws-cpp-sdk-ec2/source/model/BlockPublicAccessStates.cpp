/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BlockPublicAccessStates.h>
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

BlockPublicAccessStates::BlockPublicAccessStates() : 
    m_internetGatewayBlockMode(BlockPublicAccessMode::NOT_SET),
    m_internetGatewayBlockModeHasBeenSet(false)
{
}

BlockPublicAccessStates::BlockPublicAccessStates(const XmlNode& xmlNode)
  : BlockPublicAccessStates()
{
  *this = xmlNode;
}

BlockPublicAccessStates& BlockPublicAccessStates::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode internetGatewayBlockModeNode = resultNode.FirstChild("internetGatewayBlockMode");
    if(!internetGatewayBlockModeNode.IsNull())
    {
      m_internetGatewayBlockMode = BlockPublicAccessModeMapper::GetBlockPublicAccessModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(internetGatewayBlockModeNode.GetText()).c_str()).c_str());
      m_internetGatewayBlockModeHasBeenSet = true;
    }
  }

  return *this;
}

void BlockPublicAccessStates::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_internetGatewayBlockModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InternetGatewayBlockMode=" << BlockPublicAccessModeMapper::GetNameForBlockPublicAccessMode(m_internetGatewayBlockMode) << "&";
  }

}

void BlockPublicAccessStates::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_internetGatewayBlockModeHasBeenSet)
  {
      oStream << location << ".InternetGatewayBlockMode=" << BlockPublicAccessModeMapper::GetNameForBlockPublicAccessMode(m_internetGatewayBlockMode) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
