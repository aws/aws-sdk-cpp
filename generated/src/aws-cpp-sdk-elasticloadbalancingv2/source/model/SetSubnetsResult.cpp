/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetSubnetsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SetSubnetsResult::SetSubnetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SetSubnetsResult& SetSubnetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SetSubnetsResult"))
  {
    resultNode = rootNode.FirstChild("SetSubnetsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("member");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("member");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode ipAddressTypeNode = resultNode.FirstChild("IpAddressType");
    if(!ipAddressTypeNode.IsNull())
    {
      m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressTypeNode.GetText()).c_str()));
      m_ipAddressTypeHasBeenSet = true;
    }
    XmlNode enablePrefixForIpv6SourceNatNode = resultNode.FirstChild("EnablePrefixForIpv6SourceNat");
    if(!enablePrefixForIpv6SourceNatNode.IsNull())
    {
      m_enablePrefixForIpv6SourceNat = EnablePrefixForIpv6SourceNatEnumMapper::GetEnablePrefixForIpv6SourceNatEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enablePrefixForIpv6SourceNatNode.GetText()).c_str()));
      m_enablePrefixForIpv6SourceNatHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::SetSubnetsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
