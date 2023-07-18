/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBProxyEndpointResult.h>
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

CreateDBProxyEndpointResult::CreateDBProxyEndpointResult()
{
}

CreateDBProxyEndpointResult::CreateDBProxyEndpointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateDBProxyEndpointResult& CreateDBProxyEndpointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateDBProxyEndpointResult"))
  {
    resultNode = rootNode.FirstChild("CreateDBProxyEndpointResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyEndpointNode = resultNode.FirstChild("DBProxyEndpoint");
    if(!dBProxyEndpointNode.IsNull())
    {
      m_dBProxyEndpoint = dBProxyEndpointNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::CreateDBProxyEndpointResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
