/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TrustStore.h>
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

TrustStore::TrustStore() : 
    m_nameHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_status(TrustStoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfCaCertificates(0),
    m_numberOfCaCertificatesHasBeenSet(false),
    m_totalRevokedEntries(0),
    m_totalRevokedEntriesHasBeenSet(false)
{
}

TrustStore::TrustStore(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_status(TrustStoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfCaCertificates(0),
    m_numberOfCaCertificatesHasBeenSet(false),
    m_totalRevokedEntries(0),
    m_totalRevokedEntriesHasBeenSet(false)
{
  *this = xmlNode;
}

TrustStore& TrustStore::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode trustStoreArnNode = resultNode.FirstChild("TrustStoreArn");
    if(!trustStoreArnNode.IsNull())
    {
      m_trustStoreArn = Aws::Utils::Xml::DecodeEscapedXmlText(trustStoreArnNode.GetText());
      m_trustStoreArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = TrustStoreStatusMapper::GetTrustStoreStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode numberOfCaCertificatesNode = resultNode.FirstChild("NumberOfCaCertificates");
    if(!numberOfCaCertificatesNode.IsNull())
    {
      m_numberOfCaCertificates = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfCaCertificatesNode.GetText()).c_str()).c_str());
      m_numberOfCaCertificatesHasBeenSet = true;
    }
    XmlNode totalRevokedEntriesNode = resultNode.FirstChild("TotalRevokedEntries");
    if(!totalRevokedEntriesNode.IsNull())
    {
      m_totalRevokedEntries = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalRevokedEntriesNode.GetText()).c_str()).c_str());
      m_totalRevokedEntriesHasBeenSet = true;
    }
  }

  return *this;
}

void TrustStore::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << TrustStoreStatusMapper::GetNameForTrustStoreStatus(m_status) << "&";
  }

  if(m_numberOfCaCertificatesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfCaCertificates=" << m_numberOfCaCertificates << "&";
  }

  if(m_totalRevokedEntriesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalRevokedEntries=" << m_totalRevokedEntries << "&";
  }

}

void TrustStore::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << TrustStoreStatusMapper::GetNameForTrustStoreStatus(m_status) << "&";
  }
  if(m_numberOfCaCertificatesHasBeenSet)
  {
      oStream << location << ".NumberOfCaCertificates=" << m_numberOfCaCertificates << "&";
  }
  if(m_totalRevokedEntriesHasBeenSet)
  {
      oStream << location << ".TotalRevokedEntries=" << m_totalRevokedEntries << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
