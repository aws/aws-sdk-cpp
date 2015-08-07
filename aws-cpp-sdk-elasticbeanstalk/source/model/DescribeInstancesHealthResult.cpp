/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstancesHealthResult::DescribeInstancesHealthResult() : 
    m_refreshedAt(0.0)
{
}

DescribeInstancesHealthResult::DescribeInstancesHealthResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_refreshedAt(0.0)
{
  *this = result;
}

DescribeInstancesHealthResult& DescribeInstancesHealthResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeInstancesHealthResult");

  if(!resultNode.IsNull())
  {
    XmlNode instanceHealthListNodeParent = resultNode.FirstChild("InstanceHealthList");
    XmlNode instanceHealthListNode = instanceHealthListNodeParent.FirstChild("member");
    while(!instanceHealthListNode.IsNull())
    {
      m_instanceHealthList.push_back(instanceHealthListNode);
      instanceHealthListNode = instanceHealthListNode.NextNode("member");
    }

    XmlNode refreshedAtNode = resultNode.FirstChild("RefreshedAt");
    m_refreshedAt = StringUtils::ConvertToDouble(StringUtils::Trim(refreshedAtNode.GetText().c_str()).c_str());
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    m_nextToken = StringUtils::Trim(nextTokenNode.GetText().c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
