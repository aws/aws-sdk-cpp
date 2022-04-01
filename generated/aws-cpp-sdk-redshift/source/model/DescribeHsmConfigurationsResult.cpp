/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeHsmConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeHsmConfigurationsResult::DescribeHsmConfigurationsResult()
{
}

DescribeHsmConfigurationsResult::DescribeHsmConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeHsmConfigurationsResult& DescribeHsmConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeHsmConfigurationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeHsmConfigurationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode hsmConfigurationsNode = resultNode.FirstChild("HsmConfigurations");
    if(!hsmConfigurationsNode.IsNull())
    {
      XmlNode hsmConfigurationsMember = hsmConfigurationsNode.FirstChild("HsmConfiguration");
      while(!hsmConfigurationsMember.IsNull())
      {
        m_hsmConfigurations.push_back(hsmConfigurationsMember);
        hsmConfigurationsMember = hsmConfigurationsMember.NextNode("HsmConfiguration");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeHsmConfigurationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
