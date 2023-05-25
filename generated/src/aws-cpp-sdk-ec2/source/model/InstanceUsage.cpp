/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceUsage.h>
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

InstanceUsage::InstanceUsage() : 
    m_accountIdHasBeenSet(false),
    m_usedInstanceCount(0),
    m_usedInstanceCountHasBeenSet(false)
{
}

InstanceUsage::InstanceUsage(const XmlNode& xmlNode) : 
    m_accountIdHasBeenSet(false),
    m_usedInstanceCount(0),
    m_usedInstanceCountHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceUsage& InstanceUsage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountIdNode = resultNode.FirstChild("accountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode usedInstanceCountNode = resultNode.FirstChild("usedInstanceCount");
    if(!usedInstanceCountNode.IsNull())
    {
      m_usedInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usedInstanceCountNode.GetText()).c_str()).c_str());
      m_usedInstanceCountHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceUsage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_usedInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsedInstanceCount=" << m_usedInstanceCount << "&";
  }

}

void InstanceUsage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_usedInstanceCountHasBeenSet)
  {
      oStream << location << ".UsedInstanceCount=" << m_usedInstanceCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
