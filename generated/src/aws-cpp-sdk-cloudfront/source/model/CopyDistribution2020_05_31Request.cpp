/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CopyDistribution2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CopyDistribution2020_05_31Request::CopyDistribution2020_05_31Request() : 
    m_primaryDistributionIdHasBeenSet(false),
    m_staging(false),
    m_stagingHasBeenSet(false),
    m_ifMatchHasBeenSet(false),
    m_callerReferenceHasBeenSet(false)
{
}

Aws::String CopyDistribution2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CopyDistributionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection CopyDistribution2020_05_31Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_stagingHasBeenSet)
  {
    ss << std::boolalpha << m_staging;
    headers.emplace("staging", ss.str());
    ss.str("");
  }

  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;
}
