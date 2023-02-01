/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeInstancesHealthResult.h>
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

DescribeInstancesHealthResult::DescribeInstancesHealthResult()
{
}

DescribeInstancesHealthResult::DescribeInstancesHealthResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstancesHealthResult& DescribeInstancesHealthResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstancesHealthResult"))
  {
    resultNode = rootNode.FirstChild("DescribeInstancesHealthResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceHealthListNode = resultNode.FirstChild("InstanceHealthList");
    if(!instanceHealthListNode.IsNull())
    {
      XmlNode instanceHealthListMember = instanceHealthListNode.FirstChild("member");
      while(!instanceHealthListMember.IsNull())
      {
        m_instanceHealthList.push_back(instanceHealthListMember);
        instanceHealthListMember = instanceHealthListMember.NextNode("member");
      }

    }
    XmlNode refreshedAtNode = resultNode.FirstChild("RefreshedAt");
    if(!refreshedAtNode.IsNull())
    {
      m_refreshedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(refreshedAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::DescribeInstancesHealthResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
