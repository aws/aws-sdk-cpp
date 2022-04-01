/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateCloudFrontOriginAccessIdentity2020_05_31Request::CreateCloudFrontOriginAccessIdentity2020_05_31Request() : 
    m_cloudFrontOriginAccessIdentityConfigHasBeenSet(false)
{
}

Aws::String CreateCloudFrontOriginAccessIdentity2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CloudFrontOriginAccessIdentityConfig");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  m_cloudFrontOriginAccessIdentityConfig.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return {};
}


