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
#include <aws/monitoring/model/ListHostInfoResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHostInfoResult::ListHostInfoResult()
{
}

ListHostInfoResult::ListHostInfoResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListHostInfoResult& ListHostInfoResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ListHostInfoResult")
  {
    resultNode = rootNode.FirstChild("ListHostInfoResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode hostNameNode = resultNode.FirstChild("HostName");
    if(!hostNameNode.IsNull())
    {
      m_hostName = StringUtils::Trim(hostNameNode.GetText().c_str());
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = StringUtils::Trim(stackNameNode.GetText().c_str());
    }
    XmlNode marketplaceNode = resultNode.FirstChild("Marketplace");
    if(!marketplaceNode.IsNull())
    {
      m_marketplace = StringUtils::Trim(marketplaceNode.GetText().c_str());
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = StringUtils::Trim(regionNode.GetText().c_str());
    }
    XmlNode sdbDatastoreEndpointsNode = resultNode.FirstChild("SdbDatastoreEndpoints");
    if(!sdbDatastoreEndpointsNode.IsNull())
    {
      XmlNode sdbDatastoreEndpointsMember = sdbDatastoreEndpointsNode.FirstChild("member");
      while(!sdbDatastoreEndpointsMember.IsNull())
      {
        m_sdbDatastoreEndpoints.push_back(StringUtils::Trim(sdbDatastoreEndpointsMember.GetText().c_str()));
        sdbDatastoreEndpointsMember = sdbDatastoreEndpointsMember.NextNode("member");
      }

    }
    XmlNode datastoreEndpointsNode = resultNode.FirstChild("DatastoreEndpoints");
    if(!datastoreEndpointsNode.IsNull())
    {
      XmlNode datastoreEndpointsMember = datastoreEndpointsNode.FirstChild("member");
      while(!datastoreEndpointsMember.IsNull())
      {
        m_datastoreEndpoints.push_back(StringUtils::Trim(datastoreEndpointsMember.GetText().c_str()));
        datastoreEndpointsMember = datastoreEndpointsMember.NextNode("member");
      }

    }
    XmlNode ampQueuesNode = resultNode.FirstChild("AmpQueues");
    if(!ampQueuesNode.IsNull())
    {
      XmlNode ampQueuesMember = ampQueuesNode.FirstChild("member");
      while(!ampQueuesMember.IsNull())
      {
        m_ampQueues.push_back(StringUtils::Trim(ampQueuesMember.GetText().c_str()));
        ampQueuesMember = ampQueuesMember.NextNode("member");
      }

    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
