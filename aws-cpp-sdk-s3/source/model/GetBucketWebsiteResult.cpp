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
#include <aws/s3/model/GetBucketWebsiteResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketWebsiteResult::GetBucketWebsiteResult()
{
}

GetBucketWebsiteResult::GetBucketWebsiteResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetBucketWebsiteResult& GetBucketWebsiteResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode redirectAllRequestsToNode = resultNode.FirstChild("RedirectAllRequestsTo");
    m_redirectAllRequestsTo = redirectAllRequestsToNode;
    XmlNode indexDocumentNode = resultNode.FirstChild("IndexDocument");
    m_indexDocument = indexDocumentNode;
    XmlNode errorDocumentNode = resultNode.FirstChild("ErrorDocument");
    m_errorDocument = errorDocumentNode;
    XmlNode routingRuleNodeParent = resultNode.FirstChild("RoutingRules");
    XmlNode routingRuleNode = routingRuleNodeParent.FirstChild("RoutingRule");
    while(!routingRuleNode.IsNull())
    {
      m_routingRules.push_back(routingRuleNode);
      routingRuleNode = routingRuleNode.NextNode("RoutingRule");
    }

  }

  return *this;
}
