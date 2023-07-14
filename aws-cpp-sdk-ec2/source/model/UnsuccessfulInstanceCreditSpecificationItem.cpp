/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationItem.h>
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

UnsuccessfulInstanceCreditSpecificationItem::UnsuccessfulInstanceCreditSpecificationItem() : 
    m_instanceIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

UnsuccessfulInstanceCreditSpecificationItem::UnsuccessfulInstanceCreditSpecificationItem(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = xmlNode;
}

UnsuccessfulInstanceCreditSpecificationItem& UnsuccessfulInstanceCreditSpecificationItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode errorNode = resultNode.FirstChild("error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
  }

  return *this;
}

void UnsuccessfulInstanceCreditSpecificationItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

}

void UnsuccessfulInstanceCreditSpecificationItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
