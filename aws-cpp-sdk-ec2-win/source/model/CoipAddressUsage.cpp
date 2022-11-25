/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CoipAddressUsage.h>
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

CoipAddressUsage::CoipAddressUsage() : 
    m_allocationIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_coIpHasBeenSet(false)
{
}

CoipAddressUsage::CoipAddressUsage(const XmlNode& xmlNode) : 
    m_allocationIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_coIpHasBeenSet(false)
{
  *this = xmlNode;
}

CoipAddressUsage& CoipAddressUsage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode awsAccountIdNode = resultNode.FirstChild("awsAccountId");
    if(!awsAccountIdNode.IsNull())
    {
      m_awsAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(awsAccountIdNode.GetText());
      m_awsAccountIdHasBeenSet = true;
    }
    XmlNode awsServiceNode = resultNode.FirstChild("awsService");
    if(!awsServiceNode.IsNull())
    {
      m_awsService = Aws::Utils::Xml::DecodeEscapedXmlText(awsServiceNode.GetText());
      m_awsServiceHasBeenSet = true;
    }
    XmlNode coIpNode = resultNode.FirstChild("coIp");
    if(!coIpNode.IsNull())
    {
      m_coIp = Aws::Utils::Xml::DecodeEscapedXmlText(coIpNode.GetText());
      m_coIpHasBeenSet = true;
    }
  }

  return *this;
}

void CoipAddressUsage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }

  if(m_awsServiceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsService=" << StringUtils::URLEncode(m_awsService.c_str()) << "&";
  }

  if(m_coIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoIp=" << StringUtils::URLEncode(m_coIp.c_str()) << "&";
  }

}

void CoipAddressUsage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }
  if(m_awsServiceHasBeenSet)
  {
      oStream << location << ".AwsService=" << StringUtils::URLEncode(m_awsService.c_str()) << "&";
  }
  if(m_coIpHasBeenSet)
  {
      oStream << location << ".CoIp=" << StringUtils::URLEncode(m_coIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
