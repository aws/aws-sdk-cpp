/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ImportInstallationMediaResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ImportInstallationMediaResult::ImportInstallationMediaResult()
{
}

ImportInstallationMediaResult::ImportInstallationMediaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ImportInstallationMediaResult& ImportInstallationMediaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ImportInstallationMediaResult"))
  {
    resultNode = rootNode.FirstChild("ImportInstallationMediaResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode installationMediaIdNode = resultNode.FirstChild("InstallationMediaId");
    if(!installationMediaIdNode.IsNull())
    {
      m_installationMediaId = Aws::Utils::Xml::DecodeEscapedXmlText(installationMediaIdNode.GetText());
    }
    XmlNode customAvailabilityZoneIdNode = resultNode.FirstChild("CustomAvailabilityZoneId");
    if(!customAvailabilityZoneIdNode.IsNull())
    {
      m_customAvailabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(customAvailabilityZoneIdNode.GetText());
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
    }
    XmlNode engineInstallationMediaPathNode = resultNode.FirstChild("EngineInstallationMediaPath");
    if(!engineInstallationMediaPathNode.IsNull())
    {
      m_engineInstallationMediaPath = Aws::Utils::Xml::DecodeEscapedXmlText(engineInstallationMediaPathNode.GetText());
    }
    XmlNode oSInstallationMediaPathNode = resultNode.FirstChild("OSInstallationMediaPath");
    if(!oSInstallationMediaPathNode.IsNull())
    {
      m_oSInstallationMediaPath = Aws::Utils::Xml::DecodeEscapedXmlText(oSInstallationMediaPathNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode failureCauseNode = resultNode.FirstChild("FailureCause");
    if(!failureCauseNode.IsNull())
    {
      m_failureCause = failureCauseNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ImportInstallationMediaResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
