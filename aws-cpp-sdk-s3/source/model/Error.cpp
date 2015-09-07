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
#include <aws/s3/model/Error.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Error::Error() : 
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

Error::Error(const XmlNode& xmlNode) : 
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

Error& Error::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(keyNode.IsNull())
    {
      keyNode = resultNode;
    }

    if(!keyNode.IsNull())
    {
      m_key = StringUtils::Trim(keyNode.GetText().c_str());
      m_keyHasBeenSet = true;
    }
    XmlNode versionIdNode = resultNode.FirstChild("VersionId");
    if(versionIdNode.IsNull())
    {
      versionIdNode = resultNode;
    }

    if(!versionIdNode.IsNull())
    {
      m_versionId = StringUtils::Trim(versionIdNode.GetText().c_str());
      m_versionIdHasBeenSet = true;
    }
    XmlNode codeNode = resultNode.FirstChild("Code");
    if(codeNode.IsNull())
    {
      codeNode = resultNode;
    }

    if(!codeNode.IsNull())
    {
      m_code = StringUtils::Trim(codeNode.GetText().c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(messageNode.IsNull())
    {
      messageNode = resultNode;
    }

    if(!messageNode.IsNull())
    {
      m_message = StringUtils::Trim(messageNode.GetText().c_str());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void Error::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyHasBeenSet)
  {
   XmlNode keyNode = parentNode.CreateChildElement("Key");
   keyNode.SetText(m_key);
  }

  if(m_versionIdHasBeenSet)
  {
   XmlNode versionIdNode = parentNode.CreateChildElement("VersionId");
   versionIdNode.SetText(m_versionId);
  }

  if(m_codeHasBeenSet)
  {
   XmlNode codeNode = parentNode.CreateChildElement("Code");
   codeNode.SetText(m_code);
  }

  if(m_messageHasBeenSet)
  {
   XmlNode messageNode = parentNode.CreateChildElement("Message");
   messageNode.SetText(m_message);
  }

}
