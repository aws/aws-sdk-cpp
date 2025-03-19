/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeLaunchConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeLaunchConfigurationsResult::DescribeLaunchConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLaunchConfigurationsResult& DescribeLaunchConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLaunchConfigurationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLaunchConfigurationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode launchConfigurationsNode = resultNode.FirstChild("LaunchConfigurations");
    if(!launchConfigurationsNode.IsNull())
    {
      XmlNode launchConfigurationsMember = launchConfigurationsNode.FirstChild("member");
      m_launchConfigurationsHasBeenSet = !launchConfigurationsMember.IsNull();
      while(!launchConfigurationsMember.IsNull())
      {
        m_launchConfigurations.push_back(launchConfigurationsMember);
        launchConfigurationsMember = launchConfigurationsMember.NextNode("member");
      }

      m_launchConfigurationsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeLaunchConfigurationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
