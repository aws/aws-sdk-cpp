/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SuccessfulQueuedPurchaseDeletion.h>
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

SuccessfulQueuedPurchaseDeletion::SuccessfulQueuedPurchaseDeletion() : 
    m_reservedInstancesIdHasBeenSet(false)
{
}

SuccessfulQueuedPurchaseDeletion::SuccessfulQueuedPurchaseDeletion(const XmlNode& xmlNode) : 
    m_reservedInstancesIdHasBeenSet(false)
{
  *this = xmlNode;
}

SuccessfulQueuedPurchaseDeletion& SuccessfulQueuedPurchaseDeletion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedInstancesIdNode.GetText());
      m_reservedInstancesIdHasBeenSet = true;
    }
  }

  return *this;
}

void SuccessfulQueuedPurchaseDeletion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

}

void SuccessfulQueuedPurchaseDeletion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
