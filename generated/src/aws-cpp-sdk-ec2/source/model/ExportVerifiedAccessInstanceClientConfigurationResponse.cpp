﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportVerifiedAccessInstanceClientConfigurationResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ExportVerifiedAccessInstanceClientConfigurationResponse::ExportVerifiedAccessInstanceClientConfigurationResponse()
{
}

ExportVerifiedAccessInstanceClientConfigurationResponse::ExportVerifiedAccessInstanceClientConfigurationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ExportVerifiedAccessInstanceClientConfigurationResponse& ExportVerifiedAccessInstanceClientConfigurationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ExportVerifiedAccessInstanceClientConfigurationResponse"))
  {
    resultNode = rootNode.FirstChild("ExportVerifiedAccessInstanceClientConfigurationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode versionNode = resultNode.FirstChild("version");
    if(!versionNode.IsNull())
    {
      m_version = Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText());
    }
    XmlNode verifiedAccessInstanceIdNode = resultNode.FirstChild("verifiedAccessInstanceId");
    if(!verifiedAccessInstanceIdNode.IsNull())
    {
      m_verifiedAccessInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessInstanceIdNode.GetText());
    }
    XmlNode regionNode = resultNode.FirstChild("region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
    }
    XmlNode deviceTrustProvidersNode = resultNode.FirstChild("deviceTrustProviderSet");
    if(!deviceTrustProvidersNode.IsNull())
    {
      XmlNode deviceTrustProvidersMember = deviceTrustProvidersNode.FirstChild("item");
      while(!deviceTrustProvidersMember.IsNull())
      {
        m_deviceTrustProviders.push_back(DeviceTrustProviderTypeMapper::GetDeviceTrustProviderTypeForName(StringUtils::Trim(deviceTrustProvidersMember.GetText().c_str())));
        deviceTrustProvidersMember = deviceTrustProvidersMember.NextNode("item");
      }

    }
    XmlNode userTrustProviderNode = resultNode.FirstChild("userTrustProvider");
    if(!userTrustProviderNode.IsNull())
    {
      m_userTrustProvider = userTrustProviderNode;
    }
    XmlNode openVpnConfigurationsNode = resultNode.FirstChild("openVpnConfigurationSet");
    if(!openVpnConfigurationsNode.IsNull())
    {
      XmlNode openVpnConfigurationsMember = openVpnConfigurationsNode.FirstChild("item");
      while(!openVpnConfigurationsMember.IsNull())
      {
        m_openVpnConfigurations.push_back(openVpnConfigurationsMember);
        openVpnConfigurationsMember = openVpnConfigurationsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ExportVerifiedAccessInstanceClientConfigurationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
