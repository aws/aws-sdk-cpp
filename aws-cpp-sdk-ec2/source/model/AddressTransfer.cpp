/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AddressTransfer.h>
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

AddressTransfer::AddressTransfer() : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_transferAccountIdHasBeenSet(false),
    m_transferOfferExpirationTimestampHasBeenSet(false),
    m_transferOfferAcceptedTimestampHasBeenSet(false),
    m_addressTransferStatus(AddressTransferStatus::NOT_SET),
    m_addressTransferStatusHasBeenSet(false)
{
}

AddressTransfer::AddressTransfer(const XmlNode& xmlNode) : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_transferAccountIdHasBeenSet(false),
    m_transferOfferExpirationTimestampHasBeenSet(false),
    m_transferOfferAcceptedTimestampHasBeenSet(false),
    m_addressTransferStatus(AddressTransferStatus::NOT_SET),
    m_addressTransferStatusHasBeenSet(false)
{
  *this = xmlNode;
}

AddressTransfer& AddressTransfer::operator =(const XmlNode& xmlNode)
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
    XmlNode transferAccountIdNode = resultNode.FirstChild("transferAccountId");
    if(!transferAccountIdNode.IsNull())
    {
      m_transferAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(transferAccountIdNode.GetText());
      m_transferAccountIdHasBeenSet = true;
    }
    XmlNode transferOfferExpirationTimestampNode = resultNode.FirstChild("transferOfferExpirationTimestamp");
    if(!transferOfferExpirationTimestampNode.IsNull())
    {
      m_transferOfferExpirationTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transferOfferExpirationTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_transferOfferExpirationTimestampHasBeenSet = true;
    }
    XmlNode transferOfferAcceptedTimestampNode = resultNode.FirstChild("transferOfferAcceptedTimestamp");
    if(!transferOfferAcceptedTimestampNode.IsNull())
    {
      m_transferOfferAcceptedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transferOfferAcceptedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_transferOfferAcceptedTimestampHasBeenSet = true;
    }
    XmlNode addressTransferStatusNode = resultNode.FirstChild("addressTransferStatus");
    if(!addressTransferStatusNode.IsNull())
    {
      m_addressTransferStatus = AddressTransferStatusMapper::GetAddressTransferStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(addressTransferStatusNode.GetText()).c_str()).c_str());
      m_addressTransferStatusHasBeenSet = true;
    }
  }

  return *this;
}

void AddressTransfer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_transferAccountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransferAccountId=" << StringUtils::URLEncode(m_transferAccountId.c_str()) << "&";
  }

  if(m_transferOfferExpirationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransferOfferExpirationTimestamp=" << StringUtils::URLEncode(m_transferOfferExpirationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_transferOfferAcceptedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransferOfferAcceptedTimestamp=" << StringUtils::URLEncode(m_transferOfferAcceptedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_addressTransferStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressTransferStatus=" << AddressTransferStatusMapper::GetNameForAddressTransferStatus(m_addressTransferStatus) << "&";
  }

}

void AddressTransfer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_transferAccountIdHasBeenSet)
  {
      oStream << location << ".TransferAccountId=" << StringUtils::URLEncode(m_transferAccountId.c_str()) << "&";
  }
  if(m_transferOfferExpirationTimestampHasBeenSet)
  {
      oStream << location << ".TransferOfferExpirationTimestamp=" << StringUtils::URLEncode(m_transferOfferExpirationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_transferOfferAcceptedTimestampHasBeenSet)
  {
      oStream << location << ".TransferOfferAcceptedTimestamp=" << StringUtils::URLEncode(m_transferOfferAcceptedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_addressTransferStatusHasBeenSet)
  {
      oStream << location << ".AddressTransferStatus=" << AddressTransferStatusMapper::GetNameForAddressTransferStatus(m_addressTransferStatus) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
