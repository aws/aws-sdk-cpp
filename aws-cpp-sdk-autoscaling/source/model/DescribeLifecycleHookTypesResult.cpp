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
#include <aws/autoscaling/model/DescribeLifecycleHookTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeLifecycleHookTypesResult::DescribeLifecycleHookTypesResult()
{
}

DescribeLifecycleHookTypesResult::DescribeLifecycleHookTypesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLifecycleHookTypesResult& DescribeLifecycleHookTypesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeLifecycleHookTypesResult");

  if(!resultNode.IsNull())
  {
    XmlNode lifecycleHookTypesNode = resultNode.FirstChild("LifecycleHookTypes");
    while(!lifecycleHookTypesNode.IsNull())
    {
      m_lifecycleHookTypes.push_back(StringUtils::Trim(lifecycleHookTypesNode.GetText().c_str()));
      lifecycleHookTypesNode = lifecycleHookTypesNode.NextNode("LifecycleHookTypes");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
