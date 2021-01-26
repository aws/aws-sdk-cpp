/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeLifecycleHookTypesResult.h>
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

DescribeLifecycleHookTypesResult::DescribeLifecycleHookTypesResult()
{
}

DescribeLifecycleHookTypesResult::DescribeLifecycleHookTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLifecycleHookTypesResult& DescribeLifecycleHookTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLifecycleHookTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLifecycleHookTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode lifecycleHookTypesNode = resultNode.FirstChild("LifecycleHookTypes");
    if(!lifecycleHookTypesNode.IsNull())
    {
      XmlNode lifecycleHookTypesMember = lifecycleHookTypesNode.FirstChild("member");
      while(!lifecycleHookTypesMember.IsNull())
      {
        m_lifecycleHookTypes.push_back(lifecycleHookTypesMember.GetText());
        lifecycleHookTypesMember = lifecycleHookTypesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeLifecycleHookTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
