/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsResult.h>
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

DescribeEnvironmentManagedActionsResult::DescribeEnvironmentManagedActionsResult()
{
}

DescribeEnvironmentManagedActionsResult::DescribeEnvironmentManagedActionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeEnvironmentManagedActionsResult& DescribeEnvironmentManagedActionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEnvironmentManagedActionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEnvironmentManagedActionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode managedActionsNode = resultNode.FirstChild("ManagedActions");
    if(!managedActionsNode.IsNull())
    {
      XmlNode managedActionsMember = managedActionsNode.FirstChild("member");
      while(!managedActionsMember.IsNull())
      {
        m_managedActions.push_back(managedActionsMember);
        managedActionsMember = managedActionsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::DescribeEnvironmentManagedActionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
