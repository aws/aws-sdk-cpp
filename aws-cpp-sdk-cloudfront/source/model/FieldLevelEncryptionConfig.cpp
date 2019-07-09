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

#include <aws/cloudfront/model/FieldLevelEncryptionConfig.h>
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

FieldLevelEncryptionConfig::FieldLevelEncryptionConfig() : 
    m_callerReferenceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_queryArgProfileConfigHasBeenSet(false),
    m_contentTypeProfileConfigHasBeenSet(false)
{
}

FieldLevelEncryptionConfig::FieldLevelEncryptionConfig(const XmlNode& xmlNode) : 
    m_callerReferenceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_queryArgProfileConfigHasBeenSet(false),
    m_contentTypeProfileConfigHasBeenSet(false)
{
  *this = xmlNode;
}

FieldLevelEncryptionConfig& FieldLevelEncryptionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = callerReferenceNode.GetText();
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
    XmlNode queryArgProfileConfigNode = resultNode.FirstChild("QueryArgProfileConfig");
    if(!queryArgProfileConfigNode.IsNull())
    {
      m_queryArgProfileConfig = queryArgProfileConfigNode;
      m_queryArgProfileConfigHasBeenSet = true;
    }
    XmlNode contentTypeProfileConfigNode = resultNode.FirstChild("ContentTypeProfileConfig");
    if(!contentTypeProfileConfigNode.IsNull())
    {
      m_contentTypeProfileConfig = contentTypeProfileConfigNode;
      m_contentTypeProfileConfigHasBeenSet = true;
    }
  }

  return *this;
}

void FieldLevelEncryptionConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_queryArgProfileConfigHasBeenSet)
  {
   XmlNode queryArgProfileConfigNode = parentNode.CreateChildElement("QueryArgProfileConfig");
   m_queryArgProfileConfig.AddToNode(queryArgProfileConfigNode);
  }

  if(m_contentTypeProfileConfigHasBeenSet)
  {
   XmlNode contentTypeProfileConfigNode = parentNode.CreateChildElement("ContentTypeProfileConfig");
   m_contentTypeProfileConfig.AddToNode(contentTypeProfileConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
