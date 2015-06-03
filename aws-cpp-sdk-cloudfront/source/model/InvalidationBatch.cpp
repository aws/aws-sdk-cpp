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
#include <aws/cloudfront/model/InvalidationBatch.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InvalidationBatch::InvalidationBatch()
{
}

InvalidationBatch::InvalidationBatch(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InvalidationBatch& InvalidationBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathsNode = resultNode.FirstChild("Paths");
    m_paths = pathsNode;
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    m_callerReference = StringUtils::Trim(callerReferenceNode.GetText().c_str());
  }

  return *this;
}

void InvalidationBatch::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode pathsNode = parentNode.CreateChildElement("Paths");
  m_paths.AddToNode(pathsNode);
  XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
  callerReferenceNode.SetText(m_callerReference);
}
