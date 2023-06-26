/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/SubnetOutpost.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

SubnetOutpost::SubnetOutpost() : 
    m_subnetOutpostArnHasBeenSet(false)
{
}

SubnetOutpost::SubnetOutpost(const XmlNode& xmlNode) : 
    m_subnetOutpostArnHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetOutpost& SubnetOutpost::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetOutpostArnNode = resultNode.FirstChild("SubnetOutpostArn");
    if(!subnetOutpostArnNode.IsNull())
    {
      m_subnetOutpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(subnetOutpostArnNode.GetText());
      m_subnetOutpostArnHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetOutpost::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetOutpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetOutpostArn=" << StringUtils::URLEncode(m_subnetOutpostArn.c_str()) << "&";
  }

}

void SubnetOutpost::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetOutpostArnHasBeenSet)
  {
      oStream << location << ".SubnetOutpostArn=" << StringUtils::URLEncode(m_subnetOutpostArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
