/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateContinuousDeploymentPolicy2020_05_31Request::CreateContinuousDeploymentPolicy2020_05_31Request() : 
    m_continuousDeploymentPolicyConfigHasBeenSet(false)
{
}

Aws::String CreateContinuousDeploymentPolicy2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ContinuousDeploymentPolicyConfig");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  m_continuousDeploymentPolicyConfig.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return {};
}


