/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseRequest.h>
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

PurchaseRequest::PurchaseRequest() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_purchaseTokenHasBeenSet(false)
{
}

PurchaseRequest::PurchaseRequest(const XmlNode& xmlNode) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_purchaseTokenHasBeenSet(false)
{
  *this = xmlNode;
}

PurchaseRequest& PurchaseRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceCountNode = resultNode.FirstChild("InstanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode purchaseTokenNode = resultNode.FirstChild("PurchaseToken");
    if(!purchaseTokenNode.IsNull())
    {
      m_purchaseToken = Aws::Utils::Xml::DecodeEscapedXmlText(purchaseTokenNode.GetText());
      m_purchaseTokenHasBeenSet = true;
    }
  }

  return *this;
}

void PurchaseRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_purchaseTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".PurchaseToken=" << StringUtils::URLEncode(m_purchaseToken.c_str()) << "&";
  }

}

void PurchaseRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_purchaseTokenHasBeenSet)
  {
      oStream << location << ".PurchaseToken=" << StringUtils::URLEncode(m_purchaseToken.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
