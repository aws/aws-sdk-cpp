/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/MultipartUpload.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

MultipartUpload::MultipartUpload() : 
    m_uploadIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_initiated(0.0),
    m_initiatedHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_initiatorHasBeenSet(false)
{
}

MultipartUpload::MultipartUpload(const XmlNode& xmlNode) : 
    m_uploadIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_initiated(0.0),
    m_initiatedHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_initiatorHasBeenSet(false)
{
  *this = xmlNode;
}

MultipartUpload& MultipartUpload::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode uploadIdNode = resultNode.FirstChild("UploadId");
    if(!uploadIdNode.IsNull())
    {
      m_uploadId = StringUtils::Trim(uploadIdNode.GetText().c_str());
      m_uploadIdHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = StringUtils::Trim(keyNode.GetText().c_str());
      m_keyHasBeenSet = true;
    }
    XmlNode initiatedNode = resultNode.FirstChild("Initiated");
    if(!initiatedNode.IsNull())
    {
      m_initiated = StringUtils::ConvertToDouble(StringUtils::Trim(initiatedNode.GetText().c_str()).c_str());
      m_initiatedHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = StorageClassMapper::GetStorageClassForName(StringUtils::Trim(storageClassNode.GetText().c_str()).c_str());
      m_storageClassHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode;
      m_ownerHasBeenSet = true;
    }
    XmlNode initiatorNode = resultNode.FirstChild("Initiator");
    if(!initiatorNode.IsNull())
    {
      m_initiator = initiatorNode;
      m_initiatorHasBeenSet = true;
    }
  }

  return *this;
}

void MultipartUpload::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_uploadIdHasBeenSet)
  {
   XmlNode uploadIdNode = parentNode.CreateChildElement("UploadId");
   uploadIdNode.SetText(m_uploadId);
  }

  if(m_keyHasBeenSet)
  {
   XmlNode keyNode = parentNode.CreateChildElement("Key");
   keyNode.SetText(m_key);
  }

  if(m_initiatedHasBeenSet)
  {
   XmlNode initiatedNode = parentNode.CreateChildElement("Initiated");
  ss << m_initiated;
   initiatedNode.SetText(ss.str());
  ss.str("");
  }

  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_ownerHasBeenSet)
  {
   XmlNode ownerNode = parentNode.CreateChildElement("Owner");
   m_owner.AddToNode(ownerNode);
  }

  if(m_initiatorHasBeenSet)
  {
   XmlNode initiatorNode = parentNode.CreateChildElement("Initiator");
   m_initiator.AddToNode(initiatorNode);
  }

}
