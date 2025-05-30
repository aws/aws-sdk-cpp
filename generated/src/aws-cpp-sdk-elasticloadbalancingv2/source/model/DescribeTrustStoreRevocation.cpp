﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

DescribeTrustStoreRevocation::DescribeTrustStoreRevocation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DescribeTrustStoreRevocation& DescribeTrustStoreRevocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trustStoreArnNode = resultNode.FirstChild("TrustStoreArn");
    if(!trustStoreArnNode.IsNull())
    {
      m_trustStoreArn = Aws::Utils::Xml::DecodeEscapedXmlText(trustStoreArnNode.GetText());
      m_trustStoreArnHasBeenSet = true;
    }
    XmlNode revocationIdNode = resultNode.FirstChild("RevocationId");
    if(!revocationIdNode.IsNull())
    {
      m_revocationId = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(revocationIdNode.GetText()).c_str()).c_str());
      m_revocationIdHasBeenSet = true;
    }
    XmlNode revocationTypeNode = resultNode.FirstChild("RevocationType");
    if(!revocationTypeNode.IsNull())
    {
      m_revocationType = RevocationTypeMapper::GetRevocationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(revocationTypeNode.GetText()).c_str()));
      m_revocationTypeHasBeenSet = true;
    }
    XmlNode numberOfRevokedEntriesNode = resultNode.FirstChild("NumberOfRevokedEntries");
    if(!numberOfRevokedEntriesNode.IsNull())
    {
      m_numberOfRevokedEntries = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfRevokedEntriesNode.GetText()).c_str()).c_str());
      m_numberOfRevokedEntriesHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeTrustStoreRevocation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_revocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RevocationId=" << m_revocationId << "&";
  }

  if(m_revocationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RevocationType=" << StringUtils::URLEncode(RevocationTypeMapper::GetNameForRevocationType(m_revocationType)) << "&";
  }

  if(m_numberOfRevokedEntriesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfRevokedEntries=" << m_numberOfRevokedEntries << "&";
  }

}

void DescribeTrustStoreRevocation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }
  if(m_revocationIdHasBeenSet)
  {
      oStream << location << ".RevocationId=" << m_revocationId << "&";
  }
  if(m_revocationTypeHasBeenSet)
  {
      oStream << location << ".RevocationType=" << StringUtils::URLEncode(RevocationTypeMapper::GetNameForRevocationType(m_revocationType)) << "&";
  }
  if(m_numberOfRevokedEntriesHasBeenSet)
  {
      oStream << location << ".NumberOfRevokedEntries=" << m_numberOfRevokedEntries << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
