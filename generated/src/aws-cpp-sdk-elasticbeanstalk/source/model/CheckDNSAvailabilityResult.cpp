/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CheckDNSAvailabilityResult::CheckDNSAvailabilityResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CheckDNSAvailabilityResult& CheckDNSAvailabilityResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CheckDNSAvailabilityResult"))
  {
    resultNode = rootNode.FirstChild("CheckDNSAvailabilityResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode availableNode = resultNode.FirstChild("Available");
    if(!availableNode.IsNull())
    {
      m_available = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableNode.GetText()).c_str()).c_str());
      m_availableHasBeenSet = true;
    }
    XmlNode fullyQualifiedCNAMENode = resultNode.FirstChild("FullyQualifiedCNAME");
    if(!fullyQualifiedCNAMENode.IsNull())
    {
      m_fullyQualifiedCNAME = Aws::Utils::Xml::DecodeEscapedXmlText(fullyQualifiedCNAMENode.GetText());
      m_fullyQualifiedCNAMEHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::CheckDNSAvailabilityResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
