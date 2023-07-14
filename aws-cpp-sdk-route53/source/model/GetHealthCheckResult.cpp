/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHealthCheckResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHealthCheckResult::GetHealthCheckResult()
{
}

GetHealthCheckResult::GetHealthCheckResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetHealthCheckResult& GetHealthCheckResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode healthCheckNode = resultNode.FirstChild("HealthCheck");
    if(!healthCheckNode.IsNull())
    {
      m_healthCheck = healthCheckNode;
    }
  }

  return *this;
}
