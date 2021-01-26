/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FailedQueuedPurchaseDeletion.h>
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

FailedQueuedPurchaseDeletion::FailedQueuedPurchaseDeletion() : 
    m_errorHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false)
{
}

FailedQueuedPurchaseDeletion::FailedQueuedPurchaseDeletion(const XmlNode& xmlNode) : 
    m_errorHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false)
{
  *this = xmlNode;
}

FailedQueuedPurchaseDeletion& FailedQueuedPurchaseDeletion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorNode = resultNode.FirstChild("error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedInstancesIdNode.GetText());
      m_reservedInstancesIdHasBeenSet = true;
    }
  }

  return *this;
}

void FailedQueuedPurchaseDeletion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

}

void FailedQueuedPurchaseDeletion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
