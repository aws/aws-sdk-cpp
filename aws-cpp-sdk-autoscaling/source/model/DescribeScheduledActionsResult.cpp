/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeScheduledActionsResult.h>
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

DescribeScheduledActionsResult::DescribeScheduledActionsResult()
{
}

DescribeScheduledActionsResult::DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeScheduledActionsResult& DescribeScheduledActionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeScheduledActionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeScheduledActionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode scheduledUpdateGroupActionsNode = resultNode.FirstChild("ScheduledUpdateGroupActions");
    if(!scheduledUpdateGroupActionsNode.IsNull())
    {
      XmlNode scheduledUpdateGroupActionsMember = scheduledUpdateGroupActionsNode.FirstChild("member");
      while(!scheduledUpdateGroupActionsMember.IsNull())
      {
        m_scheduledUpdateGroupActions.push_back(scheduledUpdateGroupActionsMember);
        scheduledUpdateGroupActionsMember = scheduledUpdateGroupActionsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeScheduledActionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
