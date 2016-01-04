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
#include <aws/s3/model/Object.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Object::Object() : 
    m_keyHasBeenSet(false),
    m_lastModified(0.0),
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

Object::Object(const XmlNode& xmlNode) : 
    m_keyHasBeenSet(false),
    m_lastModified(0.0),
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
  *this = xmlNode;
}

Object& Object::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = StringUtils::Trim(keyNode.GetText().c_str());
      m_keyHasBeenSet = true;
    }
    XmlNode lastModifiedNode = resultNode.FirstChild("LastModified");
    if(!lastModifiedNode.IsNull())
    {
      m_lastModified = StringUtils::ConvertToDouble(StringUtils::Trim(lastModifiedNode.GetText().c_str()).c_str());
      m_lastModifiedHasBeenSet = true;
    }
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = StringUtils::Trim(eTagNode.GetText().c_str());
      m_eTagHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("Size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt32(StringUtils::Trim(sizeNode.GetText().c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = ObjectStorageClassMapper::GetObjectStorageClassForName(StringUtils::Trim(storageClassNode.GetText().c_str()).c_str());
      m_storageClassHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode;
      m_ownerHasBeenSet = true;
    }
  }

  return *this;
}

void Object::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyHasBeenSet)
  {
   XmlNode keyNode = parentNode.CreateChildElement("Key");
   keyNode.SetText(m_key);
  }

  if(m_lastModifiedHasBeenSet)
  {
   XmlNode lastModifiedNode = parentNode.CreateChildElement("LastModified");
  ss << m_lastModified;
   lastModifiedNode.SetText(ss.str());
  ss.str("");
  }

  if(m_eTagHasBeenSet)
  {
   XmlNode eTagNode = parentNode.CreateChildElement("ETag");
   eTagNode.SetText(m_eTag);
  }

  if(m_sizeHasBeenSet)
  {
   XmlNode sizeNode = parentNode.CreateChildElement("Size");
  ss << m_size;
   sizeNode.SetText(ss.str());
  ss.str("");
  }

  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(ObjectStorageClassMapper::GetNameForObjectStorageClass(m_storageClass));
  }

  if(m_ownerHasBeenSet)
  {
   XmlNode ownerNode = parentNode.CreateChildElement("Owner");
   m_owner.AddToNode(ownerNode);
  }

}
