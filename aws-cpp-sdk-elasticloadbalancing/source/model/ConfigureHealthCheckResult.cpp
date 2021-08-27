/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ConfigureHealthCheckResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ConfigureHealthCheckResult::ConfigureHealthCheckResult()
{
}

ConfigureHealthCheckResult::ConfigureHealthCheckResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ConfigureHealthCheckResult& ConfigureHealthCheckResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ConfigureHealthCheckResult"))
  {
    resultNode = rootNode.FirstChild("ConfigureHealthCheckResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode healthCheckNode = resultNode.FirstChild("HealthCheck");
    if(!healthCheckNode.IsNull())
    {
      m_healthCheck = healthCheckNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::ConfigureHealthCheckResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
