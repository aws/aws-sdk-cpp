/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

BatchDescribeTypeConfigurationsResult::BatchDescribeTypeConfigurationsResult()
{
}

BatchDescribeTypeConfigurationsResult::BatchDescribeTypeConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchDescribeTypeConfigurationsResult& BatchDescribeTypeConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchDescribeTypeConfigurationsResult"))
  {
    resultNode = rootNode.FirstChild("BatchDescribeTypeConfigurationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("member");
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("member");
      }

    }
    XmlNode unprocessedTypeConfigurationsNode = resultNode.FirstChild("UnprocessedTypeConfigurations");
    if(!unprocessedTypeConfigurationsNode.IsNull())
    {
      XmlNode unprocessedTypeConfigurationsMember = unprocessedTypeConfigurationsNode.FirstChild("member");
      while(!unprocessedTypeConfigurationsMember.IsNull())
      {
        m_unprocessedTypeConfigurations.push_back(unprocessedTypeConfigurationsMember);
        unprocessedTypeConfigurationsMember = unprocessedTypeConfigurationsMember.NextNode("member");
      }

    }
    XmlNode typeConfigurationsNode = resultNode.FirstChild("TypeConfigurations");
    if(!typeConfigurationsNode.IsNull())
    {
      XmlNode typeConfigurationsMember = typeConfigurationsNode.FirstChild("member");
      while(!typeConfigurationsMember.IsNull())
      {
        m_typeConfigurations.push_back(typeConfigurationsMember);
        typeConfigurationsMember = typeConfigurationsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::BatchDescribeTypeConfigurationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
