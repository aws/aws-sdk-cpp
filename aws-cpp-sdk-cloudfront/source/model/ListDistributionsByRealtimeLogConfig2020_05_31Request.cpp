/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListDistributionsByRealtimeLogConfig2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ListDistributionsByRealtimeLogConfig2020_05_31Request::ListDistributionsByRealtimeLogConfig2020_05_31Request() : 
    m_markerHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_realtimeLogConfigNameHasBeenSet(false),
    m_realtimeLogConfigArnHasBeenSet(false)
{
}

Aws::String ListDistributionsByRealtimeLogConfig2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ListDistributionsByRealtimeLogConfigRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_markerHasBeenSet)
  {
   XmlNode markerNode = parentNode.CreateChildElement("Marker");
   markerNode.SetText(m_marker);
  }

  if(m_maxItemsHasBeenSet)
  {
   XmlNode maxItemsNode = parentNode.CreateChildElement("MaxItems");
   maxItemsNode.SetText(m_maxItems);
  }

  if(m_realtimeLogConfigNameHasBeenSet)
  {
   XmlNode realtimeLogConfigNameNode = parentNode.CreateChildElement("RealtimeLogConfigName");
   realtimeLogConfigNameNode.SetText(m_realtimeLogConfigName);
  }

  if(m_realtimeLogConfigArnHasBeenSet)
  {
   XmlNode realtimeLogConfigArnNode = parentNode.CreateChildElement("RealtimeLogConfigArn");
   realtimeLogConfigArnNode.SetText(m_realtimeLogConfigArn);
  }

  return payloadDoc.ConvertToString();
}


