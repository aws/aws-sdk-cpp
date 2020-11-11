/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateRealtimeLogConfig2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateRealtimeLogConfig2020_05_31Request::CreateRealtimeLogConfig2020_05_31Request() : 
    m_endPointsHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false)
{
}

Aws::String CreateRealtimeLogConfig2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateRealtimeLogConfigRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_endPointsHasBeenSet)
  {
   XmlNode endPointsParentNode = parentNode.CreateChildElement("EndPoints");
   for(const auto& item : m_endPoints)
   {
     XmlNode endPointsNode = endPointsParentNode.CreateChildElement("EndPoint");
     item.AddToNode(endPointsNode);
   }
  }

  if(m_fieldsHasBeenSet)
  {
   XmlNode fieldsParentNode = parentNode.CreateChildElement("Fields");
   for(const auto& item : m_fields)
   {
     XmlNode fieldsNode = fieldsParentNode.CreateChildElement("Field");
     fieldsNode.SetText(item);
   }
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_samplingRateHasBeenSet)
  {
   XmlNode samplingRateNode = parentNode.CreateChildElement("SamplingRate");
   ss << m_samplingRate;
   samplingRateNode.SetText(ss.str());
   ss.str("");
  }

  return payloadDoc.ConvertToString();
}


