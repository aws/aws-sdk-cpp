/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/S3ControlARN.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateAccessPointRequest::CreateAccessPointRequest() : 
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false)
{
}

Aws::String CreateAccessPointRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateAccessPointRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   S3ControlARN arn(m_bucket);
   if (arn && arn.Validate().IsSuccess())
   {
     if (arn.GetResourceType() == ARNResourceType::BUCKET)
     {
       bucketNode.SetText(arn.GetResourceId());
     }
     else if (arn.GetResourceType() == ARNResourceType::OUTPOST)
     {
       bucketNode.SetText(arn.GetSubResourceId());
     }
     else
     {
       // It's a valid ARN, but has incorrect resource type.
       assert(false);
     }
   }
   else
   {
     bucketNode.SetText(m_bucket);
   }
  }

  if(m_vpcConfigurationHasBeenSet)
  {
   XmlNode vpcConfigurationNode = parentNode.CreateChildElement("VpcConfiguration");
   m_vpcConfiguration.AddToNode(vpcConfigurationNode);
  }

  if(m_publicAccessBlockConfigurationHasBeenSet)
  {
   XmlNode publicAccessBlockConfigurationNode = parentNode.CreateChildElement("PublicAccessBlockConfiguration");
   m_publicAccessBlockConfiguration.AddToNode(publicAccessBlockConfigurationNode);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection CreateAccessPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  Aws::S3Control::S3ControlARN arn(m_bucket);
  if (arn && arn.Validate().IsSuccess())
  {
    ss << arn.GetAccountId();
    headers.emplace("x-amz-account-id", ss.str());
    ss.str("");
    if (arn.GetResourceType() == Aws::S3Control::ARNResourceType::OUTPOST)
    {
      ss << arn.GetResourceId();
      headers.emplace("x-amz-outpost-id",  ss.str());
      ss.str("");
    }
  }

  return headers;
}
