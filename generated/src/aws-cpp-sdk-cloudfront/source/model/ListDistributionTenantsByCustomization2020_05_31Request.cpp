/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListDistributionTenantsByCustomization2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String ListDistributionTenantsByCustomization2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ListDistributionTenantsByCustomizationRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_webACLArnHasBeenSet)
  {
   XmlNode webACLArnNode = parentNode.CreateChildElement("WebACLArn");
   webACLArnNode.SetText(m_webACLArn);
  }

  if(m_certificateArnHasBeenSet)
  {
   XmlNode certificateArnNode = parentNode.CreateChildElement("CertificateArn");
   certificateArnNode.SetText(m_certificateArn);
  }

  if(m_markerHasBeenSet)
  {
   XmlNode markerNode = parentNode.CreateChildElement("Marker");
   markerNode.SetText(m_marker);
  }

  if(m_maxItemsHasBeenSet)
  {
   XmlNode maxItemsNode = parentNode.CreateChildElement("MaxItems");
   ss << m_maxItems;
   maxItemsNode.SetText(ss.str());
   ss.str("");
  }

  return payloadDoc.ConvertToString();
}


