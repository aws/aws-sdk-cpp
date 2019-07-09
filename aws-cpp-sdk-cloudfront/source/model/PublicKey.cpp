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

#include <aws/cloudfront/model/PublicKey.h>
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

PublicKey::PublicKey() : 
    m_idHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_publicKeyConfigHasBeenSet(false)
{
}

PublicKey::PublicKey(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_publicKeyConfigHasBeenSet(false)
{
  *this = xmlNode;
}

PublicKey& PublicKey::operator =(const XmlNode& xmlNode)
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
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode publicKeyConfigNode = resultNode.FirstChild("PublicKeyConfig");
    if(!publicKeyConfigNode.IsNull())
    {
      m_publicKeyConfig = publicKeyConfigNode;
      m_publicKeyConfigHasBeenSet = true;
    }
  }

  return *this;
}

void PublicKey::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_createdTimeHasBeenSet)
  {
   XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
   createdTimeNode.SetText(m_createdTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_publicKeyConfigHasBeenSet)
  {
   XmlNode publicKeyConfigNode = parentNode.CreateChildElement("PublicKeyConfig");
   m_publicKeyConfig.AddToNode(publicKeyConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
