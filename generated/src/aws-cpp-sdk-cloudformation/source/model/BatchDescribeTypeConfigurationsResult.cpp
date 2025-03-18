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
      m_errorsHasBeenSet = !errorsMember.IsNull();
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("member");
      }

      m_errorsHasBeenSet = true;
    }
    XmlNode unprocessedTypeConfigurationsNode = resultNode.FirstChild("UnprocessedTypeConfigurations");
    if(!unprocessedTypeConfigurationsNode.IsNull())
    {
      XmlNode unprocessedTypeConfigurationsMember = unprocessedTypeConfigurationsNode.FirstChild("member");
      m_unprocessedTypeConfigurationsHasBeenSet = !unprocessedTypeConfigurationsMember.IsNull();
      while(!unprocessedTypeConfigurationsMember.IsNull())
      {
        m_unprocessedTypeConfigurations.push_back(unprocessedTypeConfigurationsMember);
        unprocessedTypeConfigurationsMember = unprocessedTypeConfigurationsMember.NextNode("member");
      }

      m_unprocessedTypeConfigurationsHasBeenSet = true;
    }
    XmlNode typeConfigurationsNode = resultNode.FirstChild("TypeConfigurations");
    if(!typeConfigurationsNode.IsNull())
    {
      XmlNode typeConfigurationsMember = typeConfigurationsNode.FirstChild("member");
      m_typeConfigurationsHasBeenSet = !typeConfigurationsMember.IsNull();
      while(!typeConfigurationsMember.IsNull())
      {
        m_typeConfigurations.push_back(typeConfigurationsMember);
        typeConfigurationsMember = typeConfigurationsMember.NextNode("member");
      }

      m_typeConfigurationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::BatchDescribeTypeConfigurationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
