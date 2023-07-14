﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/DeleteMultiRegionAccessPointRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteMultiRegionAccessPointRequest::DeleteMultiRegionAccessPointRequest() : 
    m_accountIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_detailsHasBeenSet(false)
{
}

Aws::String DeleteMultiRegionAccessPointRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("DeleteMultiRegionAccessPointRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
   XmlNode clientTokenNode = parentNode.CreateChildElement("ClientToken");
   clientTokenNode.SetText(m_clientToken);
  }

  if(m_detailsHasBeenSet)
  {
   XmlNode detailsNode = parentNode.CreateChildElement("Details");
   m_details.AddToNode(detailsNode);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection DeleteMultiRegionAccessPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}
