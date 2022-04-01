/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTagsForResourcesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTagsForResourcesResult::ListTagsForResourcesResult()
{
}

ListTagsForResourcesResult::ListTagsForResourcesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTagsForResourcesResult& ListTagsForResourcesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode resourceTagSetsNode = resultNode.FirstChild("ResourceTagSets");
    if(!resourceTagSetsNode.IsNull())
    {
      XmlNode resourceTagSetsMember = resourceTagSetsNode.FirstChild("ResourceTagSet");
      while(!resourceTagSetsMember.IsNull())
      {
        m_resourceTagSets.push_back(resourceTagSetsMember);
        resourceTagSetsMember = resourceTagSetsMember.NextNode("ResourceTagSet");
      }

    }
  }

  return *this;
}
