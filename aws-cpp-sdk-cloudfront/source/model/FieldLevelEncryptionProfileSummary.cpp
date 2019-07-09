/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cloudfront/model/FieldLevelEncryptionProfileSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

FieldLevelEncryptionProfileSummary::FieldLevelEncryptionProfileSummary() : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_encryptionEntitiesHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

FieldLevelEncryptionProfileSummary::FieldLevelEncryptionProfileSummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_encryptionEntitiesHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

FieldLevelEncryptionProfileSummary& FieldLevelEncryptionProfileSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode encryptionEntitiesNode = resultNode.FirstChild("EncryptionEntities");
    if(!encryptionEntitiesNode.IsNull())
    {
      m_encryptionEntities = encryptionEntitiesNode;
      m_encryptionEntitiesHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void FieldLevelEncryptionProfileSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_encryptionEntitiesHasBeenSet)
  {
   XmlNode encryptionEntitiesNode = parentNode.CreateChildElement("EncryptionEntities");
   m_encryptionEntities.AddToNode(encryptionEntitiesNode);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
