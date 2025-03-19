/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksResult.h>
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

ListAvailableSolutionStacksResult::ListAvailableSolutionStacksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAvailableSolutionStacksResult& ListAvailableSolutionStacksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListAvailableSolutionStacksResult"))
  {
    resultNode = rootNode.FirstChild("ListAvailableSolutionStacksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode solutionStacksNode = resultNode.FirstChild("SolutionStacks");
    if(!solutionStacksNode.IsNull())
    {
      XmlNode solutionStacksMember = solutionStacksNode.FirstChild("member");
      m_solutionStacksHasBeenSet = !solutionStacksMember.IsNull();
      while(!solutionStacksMember.IsNull())
      {
        m_solutionStacks.push_back(solutionStacksMember.GetText());
        solutionStacksMember = solutionStacksMember.NextNode("member");
      }

      m_solutionStacksHasBeenSet = true;
    }
    XmlNode solutionStackDetailsNode = resultNode.FirstChild("SolutionStackDetails");
    if(!solutionStackDetailsNode.IsNull())
    {
      XmlNode solutionStackDetailsMember = solutionStackDetailsNode.FirstChild("member");
      m_solutionStackDetailsHasBeenSet = !solutionStackDetailsMember.IsNull();
      while(!solutionStackDetailsMember.IsNull())
      {
        m_solutionStackDetails.push_back(solutionStackDetailsMember);
        solutionStackDetailsMember = solutionStackDetailsMember.NextNode("member");
      }

      m_solutionStackDetailsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::ListAvailableSolutionStacksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
