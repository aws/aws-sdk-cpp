/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2019_03_26Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateFieldLevelEncryptionProfile2019_03_26Request::UpdateFieldLevelEncryptionProfile2019_03_26Request() : 
    m_fieldLevelEncryptionProfileConfigHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String UpdateFieldLevelEncryptionProfile2019_03_26Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("FieldLevelEncryptionProfileConfig");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2019-03-26/");

  m_fieldLevelEncryptionProfileConfig.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return {};
}


Aws::Http::HeaderValueCollection UpdateFieldLevelEncryptionProfile2019_03_26Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;
}
