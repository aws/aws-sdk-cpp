/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/CreateInvalidation2015_04_17Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateInvalidation2015_04_17Request::CreateInvalidation2015_04_17Request() : 
    m_distributionIdHasBeenSet(false),
    m_invalidationBatchHasBeenSet(false)
{
}

Aws::String CreateInvalidation2015_04_17Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("InvalidationBatch");

  XmlNode rootNode = payloadDoc.GetRootElement();
  rootNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2015-04-17/");

  m_invalidationBatch.AddToNode(rootNode);
  if(rootNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return "";
}


