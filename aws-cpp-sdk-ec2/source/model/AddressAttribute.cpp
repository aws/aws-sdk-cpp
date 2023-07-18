/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddressAttribute.h>
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

AddressAttribute::AddressAttribute() : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_ptrRecordHasBeenSet(false),
    m_ptrRecordUpdateHasBeenSet(false)
{
}

AddressAttribute::AddressAttribute(const XmlNode& xmlNode) : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_ptrRecordHasBeenSet(false),
    m_ptrRecordUpdateHasBeenSet(false)
{
  *this = xmlNode;
}

AddressAttribute& AddressAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpNode.GetText());
      m_publicIpHasBeenSet = true;
    }
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode ptrRecordNode = resultNode.FirstChild("ptrRecord");
    if(!ptrRecordNode.IsNull())
    {
      m_ptrRecord = Aws::Utils::Xml::DecodeEscapedXmlText(ptrRecordNode.GetText());
      m_ptrRecordHasBeenSet = true;
    }
    XmlNode ptrRecordUpdateNode = resultNode.FirstChild("ptrRecordUpdate");
    if(!ptrRecordUpdateNode.IsNull())
    {
      m_ptrRecordUpdate = ptrRecordUpdateNode;
      m_ptrRecordUpdateHasBeenSet = true;
    }
  }

  return *this;
}

void AddressAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_ptrRecordHasBeenSet)
  {
      oStream << location << index << locationValue << ".PtrRecord=" << StringUtils::URLEncode(m_ptrRecord.c_str()) << "&";
  }

  if(m_ptrRecordUpdateHasBeenSet)
  {
      Aws::StringStream ptrRecordUpdateLocationAndMemberSs;
      ptrRecordUpdateLocationAndMemberSs << location << index << locationValue << ".PtrRecordUpdate";
      m_ptrRecordUpdate.OutputToStream(oStream, ptrRecordUpdateLocationAndMemberSs.str().c_str());
  }

}

void AddressAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_ptrRecordHasBeenSet)
  {
      oStream << location << ".PtrRecord=" << StringUtils::URLEncode(m_ptrRecord.c_str()) << "&";
  }
  if(m_ptrRecordUpdateHasBeenSet)
  {
      Aws::String ptrRecordUpdateLocationAndMember(location);
      ptrRecordUpdateLocationAndMember += ".PtrRecordUpdate";
      m_ptrRecordUpdate.OutputToStream(oStream, ptrRecordUpdateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
